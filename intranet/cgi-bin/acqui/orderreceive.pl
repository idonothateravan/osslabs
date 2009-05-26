#!/usr/bin/perl


#script to recieve orders
#written by chris@katipo.co.nz 24/2/2000

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

=head1 NAME

orderreceive.pl

=head1 DESCRIPTION
This script shows all order already receive and all pendings orders.
It permit to write a new order as 'received'.

=head1 CGI PARAMETERS

=over 4

=item supplierid
to know on what supplier this script has to display receive order.

=item receive

=item invoice
the number of this invoice.

=item freight

=item biblio
The biblionumber of this order.

=item datereceived

=item catview

=item gst

=back

=cut

use strict;
use CGI;
use C4::Context;
use C4::Koha;   # GetKohaAuthorisedValues GetItemTypes
use C4::Acquisition;
use C4::Auth;
use C4::Output;
use C4::Dates qw/format_date/;
use C4::Bookseller;
use C4::Members;
use C4::Branch;    # GetBranches

my $input      = new CGI;
my $supplierid = $input->param('supplierid');
my $dbh        = C4::Context->dbh;

my $search       = $input->param('receive');
my $invoice      = $input->param('invoice');
my $freight      = $input->param('freight');
my $biblionumber       = $input->param('biblionumber');
my $datereceived = C4::Dates->new($input->param('datereceived'),'iso') || C4::Dates->new();
my $catview      = $input->param('catview');
my $gst          = $input->param('gst');

my @results = SearchOrder( $search, $supplierid, $biblionumber, $catview );
my $count   = scalar @results;
my $order 	= GetOrder($search);

my $bookseller = GetBookSellerFromId( $results[0]->{'booksellerid'} );

my $date = $results[0]->{'entrydate'};

my ( $template, $loggedinuser, $cookie ) = get_template_and_user(
    {
        template_name   => "acqui/orderreceive.tmpl",
        query           => $input,
        type            => "intranet",
        authnotrequired => 0,
        flagsrequired   => { acquisition => 1 },
        debug           => 1,
    }
);
$template->param($count);

if ( $count == 1 ) {

    my (@itemtypesloop,@locationloop,@ccodeloop);
    my $itemtypes = GetItemTypes;
    foreach my $thisitemtype (sort keys %$itemtypes) {
		my %row = (
                    value => $thisitemtype,
                    description => $itemtypes->{$thisitemtype}->{'description'},
					selected => ($thisitemtype eq $results[0]->{itemtype}),  # ifdef itemtype @ bibliolevel, use it as default for item level. 
                  );
        push @itemtypesloop, \%row;
    }

    my $locs = GetKohaAuthorisedValues( 'items.location' );
    foreach my $thisloc (sort keys %$locs) {
		my $row = {
                    value => $thisloc,
                    description => $locs->{$thisloc},
                  };
        push @locationloop, $row;
    }
    my $ccodes= GetKohaAuthorisedValues( 'items.ccode' );
	foreach my $thisccode (sort keys %$ccodes) {
        push @ccodeloop,  {
                    value => $thisccode,
                    description => $ccodes->{$thisccode},
                  };
    }
    $template->param(itemtypeloop => \@itemtypesloop ,
					locationloop => \@locationloop,
					ccodeloop => \@ccodeloop,
					itype => C4::Context->preference('item-level_itypes'),
					);
    
	my $onlymine=C4::Context->preference('IndependantBranches') && 
                C4::Context->userenv && 
                C4::Context->userenv->{flags} !=1  && 
                C4::Context->userenv->{branch};
    my $branches = GetBranches($onlymine);
    my @branchloop;
    foreach my $thisbranch ( sort keys %$branches ) {
        my %row = (
            value      => $thisbranch,
            description => $branches->{$thisbranch}->{'branchname'},
        );
	    $row{'selected'} = 1 if( $thisbranch eq $order->{branchcode}) ;
        push @branchloop, \%row;
    }

    my $barcode;
    # See whether barcodes should be automatically allocated.
	# FIXME : only incremental is implemented here, and it creates a race condition.
	#
    if ( C4::Context->preference('autoBarcode') eq 'incremental' ) {
        my $sth = $dbh->prepare("Select max(barcode) from items");
        $sth->execute;
        my $data = $sth->fetchrow_hashref;
        $barcode = $results[0]->{'barcode'} + 1;
        $sth->finish;
    }

    if ( $results[0]->{'quantityreceived'} == 0 ) {
        $results[0]->{'quantityreceived'} = '';
    }
    if ( $results[0]->{'unitprice'} == 0 ) {
        $results[0]->{'unitprice'} = '';
    }
#    $results[0]->{'copyrightdate'} = format_date( $results[0]->{'copyrightdate'} );  # this usu fails.
    $template->param(
        branchloop            => \@branchloop,
        count                 => 1,
        biblionumber          => $results[0]->{'biblionumber'},
        ordernumber           => $results[0]->{'ordernumber'},
        biblioitemnumber      => $results[0]->{'biblioitemnumber'},
        supplierid            => $results[0]->{'booksellerid'},
        freight               => $freight,
        gst                   => $gst,
        catview               => ( $catview ne 'yes' ? 1 : 0 ),
        name                  => $bookseller->{'name'},
        date                  => format_date($date),
        title                 => $results[0]->{'title'},
        author                => $results[0]->{'author'},
        copyrightdate         => $results[0]->{'copyrightdate'},
        itemtype              => $results[0]->{'itemtype'},
        isbn                  => $results[0]->{'isbn'},
        seriestitle           => $results[0]->{'seriestitle'},
        barcode               => $barcode,
        bookfund              => $results[0]->{'bookfundid'},
        quantity              => $results[0]->{'quantity'},
        quantityreceivedplus1 => $results[0]->{'quantityreceived'} + 1,
        quantityreceived      => $results[0]->{'quantityreceived'},
        rrp                   => $results[0]->{'rrp'},
        ecost                 => $results[0]->{'ecost'},
        unitprice             => $results[0]->{'unitprice'},
        invoice               => $invoice,
        datereceived          => $datereceived->output(),
        datereceived_iso          => $datereceived->output('iso'),
    );
}
else {
    my @loop;
    for ( my $i = 0 ; $i < $count ; $i++ ) {
        my %line = %{ $results[$i] };

        $line{invoice}      = $invoice;
        $line{datereceived} = $datereceived->output();
        $line{freight}      = $freight;
        $line{gst}          = $gst;
        $line{title}        = $results[$i]->{'title'};
        $line{author}       = $results[$i]->{'author'};
        $line{supplierid}   = $supplierid;
        push @loop, \%line;
    }
    $template->param(
        loop                    => \@loop,
        date                    => format_date($date),
        datereceived            => $datereceived->output(),
        name                    => $bookseller->{'name'},
        supplierid              => $supplierid,
        invoice                 => $invoice,
    );

}
output_html_with_http_headers $input, $cookie, $template->output;
