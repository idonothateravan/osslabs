#!/usr/bin/perl
# WARNING: This file uses 4-character tabs!

#written 11/3/2002 by Finlay
#script to execute branch transfers of books

# Copyright 2000-2002 Katipo Communications
#
# This file is part of Koha.
#
# Koha is free software; you can redistribute it and/or modify it under the
# terms of the GNU General Public License as published by the Free Software
# Foundation; either version 2 of the License, or (at your option) any later
# version.
#
# Koha is distributed in the hope that it will be useful, but WITHOUT ANY
# WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
# A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License along with
# Koha; if not, write to the Free Software Foundation, Inc., 59 Temple Place,
# Suite 330, Boston, MA  02111-1307 USA

use strict;
use CGI;
use C4::Circulation;
use C4::Output;
use C4::Reserves;
use C4::Biblio;
use C4::Items;
use C4::Auth qw/:DEFAULT get_session/;
use C4::Branch; # GetBranches
use C4::Koha;
use C4::Members;

###############################################
#  Getting state

my $query = new CGI;

if (!C4::Context->userenv){
	my $sessionID = $query->cookie("CGISESSID");
	my $session = get_session($sessionID);
	if ($session->param('branch') eq 'NO_LIBRARY_SET'){
		# no branch set we can't transfer
		print $query->redirect("/cgi-bin/koha/circ/selectbranchprinter.pl");
		exit;
	}
}   


#######################################################################################
# Make the page .....
my ( $template, $cookie );
my $user;
( $template, $user, $cookie ) = get_template_and_user(
    {
        template_name   => "circ/branchtransfers.tmpl",
        query           => $query,
        type            => "intranet",
        authnotrequired => 0,
        flagsrequired   => { circulate => 1 },
    }
);

my $branches = GetBranches;
my $branch  = GetBranch( $query,  $branches );

my $messages;
my $found;
my $reserved;
my $waiting;
my $reqmessage;
my $cancelled;
my $setwaiting;

my $request        = $query->param('request');
my $borrowernumber = $query->param('borrowernumber');
my $tobranchcd     = $query->param('tobranchcd');

############
# Deal with the requests....
if ( $request eq "KillWaiting" ) {
    my $item = $query->param('itemnumber');

    CancelReserve( 0, $item, $borrowernumber );
    $cancelled   = 1;
    $reqmessage  = 1;
}

my $ignoreRs = 0;
if ( $request eq "SetWaiting" ) {
    my $item = $query->param('itemnumber');
    ModReserveAffect( $item, $borrowernumber );
    $ignoreRs    = 1;
    $setwaiting  = 1;
    $reqmessage  = 1;
}
if ( $request eq 'KillReserved' ) {
    my $biblio = $query->param('biblionumber');
    CancelReserve( $biblio, 0, $borrowernumber );
    $cancelled   = 1;
    $reqmessage  = 1;
}

# set up the branchselect options....
my @branchoptionloop;
foreach my $br ( keys %$branches ) {
    my %branch;
    $branch{selected} = ( $br eq $tobranchcd );
    $branch{code}     = $br;
    $branch{name}     = $branches->{$br}->{'branchname'};
    push( @branchoptionloop, \%branch );
}

# collect the stack of books already transfered so they can printed...
my @trsfitemloop;
my %transfereditems;
my $transfered;
my $barcode = $query->param('barcode');
# strip whitespace
$barcode =~ s/\s*//g;
# warn "barcode : $barcode";
if ($barcode) {

    my $iteminformation;
    ( $transfered, $messages, $iteminformation ) =
      transferbook( $tobranchcd, $barcode, $ignoreRs );
#       use Data::Dumper;
#       warn "Transfered : $transfered / ".Dumper($messages);
    $found = $messages->{'ResFound'};
    if ($transfered) {
        my %item;
        my $frbranchcd =  C4::Context->userenv->{'branch'};
#         if ( not($found) ) {
        $item{'biblionumber'} = $iteminformation->{'biblionumber'};
        $item{'title'}        = $iteminformation->{'title'};
        $item{'author'}       = $iteminformation->{'author'};
        $item{'itemtype'}     = $iteminformation->{'itemtype'};
        $item{'ccode'}        = $iteminformation->{'ccode'};
        $item{'frbrname'}     = $branches->{$frbranchcd}->{'branchname'};
        $item{'tobrname'}     = $branches->{$tobranchcd}->{'branchname'};
#         }
        $item{counter}  = 0;
        $item{barcode}  = $barcode;
        $item{frombrcd} = $frbranchcd;
        $item{tobrcd}   = $tobranchcd;
        push( @trsfitemloop, \%item );
#         warn Dumper(@trsfitemloop);
    }
}

foreach ( $query->param ) {
    (next) unless (/bc-(\d*)/);
    my $counter = $1;
    my %item;
    my $bc    = $query->param("bc-$counter");
    my $frbcd = $query->param("fb-$counter");
    my $tobcd = $query->param("tb-$counter");
    $counter++;
    $item{counter}  = $counter;
    $item{barcode}  = $bc;
    $item{frombrcd} = $frbcd;
    $item{tobrcd}   = $tobcd;
    my ($iteminformation) = GetBiblioFromItemNumber( GetItemnumberFromBarcode($bc) );
    $item{'biblionumber'} = $iteminformation->{'biblionumber'};
    $item{'title'}        = $iteminformation->{'title'};
    $item{'author'}       = $iteminformation->{'author'};
    $item{'itemtype'}     = $iteminformation->{'itemtype'};
    $item{'ccode'}        = $iteminformation->{'ccode'};
    $item{'frbrname'}     = $branches->{$frbcd}->{'branchname'};
    $item{'tobrname'}     = $branches->{$tobcd}->{'branchname'};
    push( @trsfitemloop, \%item );
}

my $itemnumber;
my $biblionumber;

#####################

if ($found) {
    my $res = $messages->{'ResFound'};
    $itemnumber = $res->{'itemnumber'};

    if ( $res->{'ResFound'} eq "Waiting" ) {
        $waiting = 1;
    }
    if ( $res->{'ResFound'} eq "Reserved" ) {
        $reserved  = 1;
        $biblionumber = $res->{'biblionumber'};
    }
}

#####################

my @errmsgloop;
foreach my $code ( keys %$messages ) {
    my %err;

    if ( $code eq 'BadBarcode' ) {
        $err{msg}        = $messages->{'BadBarcode'};
        $err{errbadcode} = 1;
    }

    if ( $code eq 'IsPermanent' ) {
        $err{errispermanent} = 1;
        $err{msg} = $branches->{ $messages->{'IsPermanent'} }->{'branchname'};
    }
    $err{errdesteqholding} = ( $code eq 'DestinationEqualsHolding' );

    if ( $code eq 'WasReturned' ) {
        $err{errwasreturned} = 1;
		$err{borrowernumber}=$messages->{'WasReturned'};
		my $borrower = GetMember($messages->{'WasReturned'},'borrowernumber');
		$err{title}=$borrower->{'title'};
		$err{firstname}=$borrower->{'firstname'};
		$err{surname}=$borrower->{'surname'};
		$err{cardnumber} =$borrower->{'cardnumber'};
    }
    push( @errmsgloop, \%err );
}

# use Data::Dumper;
# warn "FINAL ============= ".Dumper(@trsfitemloop);
$template->param(
    found                   => $found,
    reserved                => $reserved,
    waiting                 => $waiting,
    borrowernumber          => $borrowernumber,
    itemnumber              => $itemnumber,
    barcode                 => $barcode,
    biblionumber            => $biblionumber,
    tobranchcd              => $tobranchcd,
    reqmessage              => $reqmessage,
    cancelled               => $cancelled,
    setwaiting              => $setwaiting,
    trsfitemloop            => \@trsfitemloop,
    branchoptionloop        => \@branchoptionloop,
    errmsgloop              => \@errmsgloop,
    CircAutocompl           => C4::Context->preference("CircAutocompl")
);
output_html_with_http_headers $query, $cookie, $template->output;

sub name {
    my ($borinfo) = @_;
    return $borinfo->{'surname'} . " "
      . $borinfo->{'title'} . " "
      . $borinfo->{'firstname'};
}

# Local Variables:
# tab-width: 4
# End: