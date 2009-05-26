#!/usr/bin/perl

#script to show display basket of orders
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

use strict;
use C4::Auth;
use C4::Koha;
use C4::Output;
use CGI;
use C4::Acquisition;
use C4::Bookfund;
use C4::Bookseller;
use C4::Dates qw/format_date/;
use C4::Debug;

=head1 NAME

basket.pl

=head1 DESCRIPTION

 This script display all informations about basket for the supplier given
 on input arg.  Moreover, it allows us to add a new order for this supplier from
 an existing record, a suggestion or a new record.

=head1 CGI PARAMETERS

=over 4

=item $basketno

The basket number.

=item supplierid

the supplier this script have to display the basket.

=item order

=back

=cut

my $query        = new CGI;
my $basketno     = $query->param('basketno');
my $booksellerid = $query->param('supplierid');
my $sort         = $query->param('order');

my @sort_loop;
if (defined $sort) {
	foreach (split /\,/, $sort) {
		my %sorthash = (
			string => $_,
		);
		# other possibly valid tables for later: aqbookfund biblio biblioitems
		if (
			(/^\s*(aqorderbreakdown)\.(\w+)\s*$/ and $2 eq 'bookfundid'   ) or
			(/^\s*(biblioitems)\.(\w+)\s*$/      and $2 eq 'publishercode')
		) {
			$sorthash{table} = $1;
			$sorthash{field} = $2;
		} else {
			$sorthash{error} = 1;
		}
		push @sort_loop, \%sorthash;
	}
}

my ( $template, $loggedinuser, $cookie ) = get_template_and_user(
    {
        template_name   => "acqui/basket.tmpl",
        query           => $query,
        type            => "intranet",
        authnotrequired => 0,
        flagsrequired   => { acquisition => 1 },
        debug           => 1,
    }
);

my $basket = GetBasket($basketno);

# FIXME : what about the "discount" percentage?
# FIXME : the query->param('supplierid') below is probably useless. The bookseller is always known from the basket
# if no booksellerid in parameter, get it from basket
# warn "=>".$basket->{booksellerid};
$booksellerid = $basket->{booksellerid} unless $booksellerid;
my ($bookseller) = GetBookSellerFromId($booksellerid);

if ( !$bookseller ) {
    $template->param( NO_BOOKSELLER => 1 );
}
else {

    # get librarian branch...
    if ( C4::Context->preference("IndependantBranches") ) {
        my $userenv = C4::Context->userenv;
        unless ( $userenv->{flags} == 1 ) {
            my $validtest = ( $basket->{creationdate} eq '' )
              || ( $userenv->{branch} eq $basket->{branch} )
              || ( $userenv->{branch} eq '' )
              || ( $basket->{branch}  eq '' );
            unless ($validtest) {
                print $query->redirect("../mainpage.pl");
                exit 1;
            }
        }
    }

    # if new basket, pre-fill infos
    $basket->{creationdate} = ""            unless ( $basket->{creationdate} );
    $basket->{authorisedby} = $loggedinuser unless ( $basket->{authorisedby} );
    $debug
      and warn sprintf
      "loggedinuser: $loggedinuser; creationdate: %s; authorisedby: %s",
      $basket->{creationdate}, $basket->{authorisedby};

    my @results = GetOrders( $basketno, $sort );
    my $count = scalar @results;

    my $sub_total;      # total of line totals
    my $grand_total;    # $subttotal + $gist

    # my $line_total_est; # total of each line
    my $sub_total_est;      # total of line totals
    my $sub_total_rrp;      # total of line totals
    my $grand_total_est;    # $subttotal + $gist

    my $qty_total;
    my @books_loop;
    for ( my $i = 0 ; $i < $count ; $i++ ) {
        my $rrp = $results[$i]->{'listprice'};
		my $qty = $results[$i]->{'quantity'};
        $rrp = ConvertCurrency( $results[$i]->{'currency'}, $rrp );
        $sub_total_rrp += $qty * $results[$i]->{'rrp'};
        my $line_total = $qty * $results[$i]->{'ecost'};
		# FIXME: what about the "actual cost" field?
        $sub_total += $line_total;
        $qty_total += $qty;
        my %line = %{ $results[$i] };
		($i%2) and $line{toggle} = 1;
        $line{order_received}= ( $qty eq $results[$i]->{'quantityreceived'} );
        $line{basketno}      = $basketno;
        $line{i}             = $i;
        $line{rrp}           = sprintf( "%.2f", $line{'rrp'} );
        $line{ecost}         = sprintf( "%.2f", $line{'ecost'} );
        $line{line_total}    = sprintf( "%.2f", $line_total );
        $line{odd}           = $i % 2;
        push @books_loop, \%line;
    }
    my $prefgist = C4::Context->preference("gist") || 0;
    my $gist     = $sub_total     * $prefgist;
    my $gist_rrp = $sub_total_rrp * $prefgist;
    $grand_total     = $sub_total_est = $sub_total;
    $grand_total_est = $sub_total_est;		# FIXME: Too many things that are ALL the SAME
	my $temp;
    if ($temp = $bookseller->{'listincgst'}) {
		$template->param(listincgst => $temp);
		$gist = 0;
	} else {
        $grand_total += $gist;
        $grand_total_est += $sub_total_est * $prefgist;		# same thing as += gist
    }
    if ($temp = $bookseller->{'discount'}) {
		$template->param(discount => sprintf( "%.2f", $temp ));
	}
    $template->param(
        basketno         => $basketno,
        creationdate     => format_date( $basket->{creationdate} ),
        authorisedby     => $basket->{authorisedby},
        authorisedbyname => $basket->{authorisedbyname},
        closedate        => format_date( $basket->{closedate} ),
        active           => $bookseller->{'active'},
        booksellerid     => $bookseller->{'id'},
        name             => $bookseller->{'name'},
        address1         => $bookseller->{'address1'},
        address2         => $bookseller->{'address2'},
        address3         => $bookseller->{'address3'},
        address4         => $bookseller->{'address4'},
        entrydate        => format_date( $results[0]->{'entrydate'} ),
        books_loop       => \@books_loop,
         sort_loop       => \@sort_loop,
        count            => $count,
        gist             => $gist ? sprintf( "%.2f", $gist ) : 0,
        gist_rate        => sprintf( "%.2f", $prefgist * 100) . '%',
        gist_est         => sprintf( "%.2f", $sub_total_est * $prefgist ),
        gist_rrp         => sprintf( "%.2f", $gist_rrp),
          sub_total      => sprintf( "%.2f", $sub_total ),
        grand_total      => sprintf( "%.2f", $grand_total ),
          sub_total_est  => sprintf( "%.2f", $sub_total_est),
        grand_total_est  => sprintf( "%.2f", $grand_total_est),
          sub_total_rrp  => sprintf( "%.2f", $sub_total_rrp),
        grand_total_rrp  => sprintf( "%.2f", $sub_total_rrp + $gist_rrp),
        currency         => $bookseller->{'listprice'},
        qty_total        => $qty_total,
        GST              => $prefgist,
    );
}
output_html_with_http_headers $query, $cookie, $template->output;
