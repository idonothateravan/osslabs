#!/usr/bin/perl

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
require Exporter;
use CGI;

use C4::Auth;
use C4::Koha;
use C4::Circulation;
use C4::Dates qw/format_date/;
use C4::Members;

use C4::Output;

my $query = new CGI;
my ( $template, $borrowernumber, $cookie ) = get_template_and_user(
    {
        template_name   => "opac-readingrecord.tmpl",
        query           => $query,
        type            => "opac",
        authnotrequired => 0,
        flagsrequired   => { borrow => 1 },
        debug           => 1,
    }
);

# get borrower information ....
my ( $borr ) = GetMemberDetails( $borrowernumber );

$template->param($borr);

my $imgdir = getitemtypeimagesrc();
my $itemtypes = GetItemTypes();

# get the record
my $order  = $query->param('order');
my $order2 = $order;
if ( $order2 eq '' ) {
    $order2 = "date_due desc";
    $template->param( orderbydate => 1 );
}

if ( $order2 eq 'title' ) {
    $template->param( orderbytitle => 1 );
}

if ( $order2 eq 'author' ) {
    $template->param( orderbyauthor => 1 );
}

my $limit = $query->param('limit');
if ( $limit eq 'full' ) {
    $limit = 0;
}
else {
    $limit = 50;
}

my ( $count, $issues ) = GetAllIssues( $borrowernumber, $order2, $limit );

# add the row parity
#my $num = 0;
#foreach my $row (@$issues) {
#    $row->{'even'} = 1 if $num % 2 == 0;
#    $row->{'odd'} = 1 if $num % 2 == 1;
#    $num++;
#}

my @loop_reading;

for ( my $i = 0 ; $i < $count ; $i++ ) {
    my %line;
    if ( $i % 2 ) {
        $line{'toggle'} = 1;
    }
	
	# XISBN Stuff
	my $xisbn=$issues->[$i]->{'isbn'};
	$xisbn =~ /(\d*[X]*)/;
	$line{amazonisbn} = $1;		# FIXME: so it is OK if the ISBN = 'XXXXX' ?
	my ($clean, $amazonisbn);
	$amazonisbn = $1;
	# these might be overkill, but they are better than the regexp above.
	if (
		$amazonisbn =~ /\b(\d{13})\b/ or
		$amazonisbn =~ /\b(\d{10})\b/ or 
		$amazonisbn =~ /\b(\d{9}X)\b/i
	) {
		$clean = $1;
		$line{clean_isbn} = $1;
	}
	
    $line{biblionumber}   = $issues->[$i]->{'biblionumber'};
    $line{title}          = $issues->[$i]->{'title'};
    $line{author}         = $issues->[$i]->{'author'};
    $line{isbn}           = $issues->[$i]->{'isbn'};
    $line{itemcallnumber} = $issues->[$i]->{'itemcallnumber'};
    $line{date_due}       = format_date( $issues->[$i]->{'date_due'} );
    $line{returndate}     = format_date( $issues->[$i]->{'returndate'} );
    $line{volumeddesc}    = $issues->[$i]->{'volumeddesc'};
    $line{counter}        = $i + 1;
    $line{'description'} = $itemtypes->{ $issues->[$i]->{'itemtype'} }->{'description'};
    $line{imageurl}       = $imgdir."/".$itemtypes->{ $issues->[$i]->{'itemtype'}  }->{'imageurl'}; 
    push( @loop_reading, \%line );
}

if (C4::Context->preference('BakerTaylorEnabled')) {
	$template->param(
		JacketImages=>1,
		BakerTaylorEnabled  => 1,
		BakerTaylorImageURL => &image_url(),
		BakerTaylorLinkURL  => &link_url(),
		BakerTaylorBookstoreURL => C4::Context->preference('BakerTaylorBookstoreURL'),
	);
}

BEGIN {
	if (C4::Context->preference('BakerTaylorEnabled')) {
		require C4::External::BakerTaylor;
		import C4::External::BakerTaylor qw(&image_url &link_url);
	}
}

for(qw(AmazonContent GoogleJackets)) {	# BakerTaylorEnabled handled above
	C4::Context->preference($_) or next;
	$template->param($_=>1);
	$template->param(JacketImages=>1);
}

$template->param(
    count          => $count,
    READING_RECORD => \@loop_reading,
    limit          => $limit,
    showfulllink   => 1,
	readingrecview => 1
);

output_html_with_http_headers $query, $cookie, $template->output;

