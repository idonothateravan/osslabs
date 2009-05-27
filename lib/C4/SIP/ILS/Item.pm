#
# ILS::Item.pm
# 
# A Class for hiding the ILS's concept of the item from the OpenSIP
# system
#

package ILS::Item;

use strict;
use warnings;

use Sys::Syslog qw(syslog);

use ILS::Transaction;

use C4::Debug;
use C4::Context;
use C4::Biblio;
use C4::Items;
use C4::Circulation;
use C4::Members;
use C4::Reserves;

use vars qw($VERSION @ISA @EXPORT @EXPORT_OK);

BEGIN {
	$VERSION = 2.10;
	require Exporter;
	@ISA = qw(Exporter);
	@EXPORT_OK = qw();
}

=head2 EXAMPLE

our %item_db = (
    '1565921879' => {
        title => "Perl 5 desktop reference",
        id => '1565921879',
        sip_media_type => '001',
        magnetic_media => 0,
        hold_queue => [],
    },
    '0440242746' => {
        title => "The deep blue alibi",
        id => '0440242746',
        sip_media_type => '001',
        magnetic_media => 0,
        hold_queue => [
            {
            itemnumber => '823',
            priority => '1',
            reservenotes => undef,
            constrainttype => 'a',
            reservedate => '2008-10-09',
            found => undef,
            rtimestamp => '2008-10-09 11:15:06',
            biblionumber => '406',
            borrowernumber => '756',
            branchcode => 'CPL'
            }
        ],
    },
    '660' => {
        title => "Harry Potter y el c�liz de fuego",
        id => '660',
        sip_media_type => '001',
        magnetic_media => 0,
        hold_queue => [],
    },
);
=cut

sub priority_sort {
    defined $a->{priority} or return -1;
    defined $b->{priority} or return 1;
    return $a->{priority} <=> $b->{priority};
}

sub new {
	my ($class, $item_id) = @_;
	my $type = ref($class) || $class;
	my $self;
    my $itemnumber = GetItemnumberFromBarcode($item_id);
	my $item = GetBiblioFromItemNumber($itemnumber);
	if (! $item) {
		syslog("LOG_DEBUG", "new ILS::Item('%s'): not found", $item_id);
		warn "new ILS::Item($item_id) : No item '$item_id'.";
		return undef;
	}
    $item->{itemnumber} = $itemnumber;
    $item->{'id'} = $item->{'barcode'};
	# check if its on issue and if so get the borrower
	my $issue = GetItemIssue($item->{'itemnumber'});
	my $borrower = GetMember($issue->{'borrowernumber'},'borrowernumber');
	$item->{patron} = $borrower->{'cardnumber'};
	my @reserves = (@{ GetReservesFromBiblionumber($item->{biblionumber}) });
	$item->{hold_queue} = [ sort priority_sort @reserves ];
	$item->{hold_shelf}    = [( grep {   defined $_->{found}  and $_->{found} eq 'W' } @{$item->{hold_queue}} )];
	$item->{pending_queue} = [( grep {(! defined $_->{found}) or ($_->{found} ne 'W')} @{$item->{hold_queue}} )];
	$self = $item;
	bless $self, $type;

    syslog("LOG_DEBUG", "new ILS::Item('%s'): found with title '%s'",
	   $item_id, $self->{title});

    return $self;
}

sub magnetic {
    my $self = shift;
    return $self->{magnetic_media};
}
sub sip_media_type {
    my $self = shift;
    return $self->{sip_media_type};
}
sub sip_item_properties {
    my $self = shift;
    return $self->{sip_item_properties};
}

sub status_update {     # FIXME: this looks unimplemented
    my ($self, $props) = @_;
    my $status = new ILS::Transaction;
    $self->{sip_item_properties} = $props;
    $status->{ok} = 1;
    return $status;
}
    
sub id {
    my $self = shift;
    return $self->{id};
}
sub title_id {
    my $self = shift;
    return $self->{title};
}
sub permanent_location {
    my $self = shift;
    return $self->{permanent_location} || '';
}
sub current_location {
    my $self = shift;
    return $self->{current_location} || '';
}

sub sip_circulation_status {
    my $self = shift;
    if ($self->{patron}) {
		return '04';    # charged
    } elsif (scalar @{$self->{hold_queue}}) {
		return '08';    # waiting on hold shelf
    } else {
		return '03';    # available
    }                   # FIXME: 01-13 enumerated in spec.
}

sub sip_security_marker {
    return '02';	# FIXME? 00-other; 01-None; 02-Tattle-Tape Security Strip (3M); 03-Whisper Tape (3M)
}
sub sip_fee_type {
    return '01';    # FIXME? 01-09 enumerated in spec.  We just use O1-other/unknown.
}

sub fee {
    my $self = shift;
    return $self->{fee} || 0;
}
sub fee_currency {
    my $self = shift;
    return $self->{currency} || 'USD';
}
sub owner {
    my $self = shift;
    return 'CPL';	# FIXME: UWOLS was hardcoded 
}
sub hold_queue {
    my $self = shift;
	(defined $self->{hold_queue}) or return [];
    return $self->{hold_queue};
}
sub pending_queue {
    my $self = shift;
	(defined $self->{pending_queue}) or return [];
    return $self->{pending_queue};
}
sub hold_shelf {
    my $self = shift;
	(defined $self->{hold_shelf}) or return [];
    return $self->{hold_shelf};
}

sub hold_queue_position {
	my ($self, $patron_id) = @_;
	($self->{hold_queue}) or return 0;
	my $i = 0;
	foreach (@{$self->{hold_queue}}) {
		$i++;
		$_->{patron_id} or next;
		if ($self->barcode_is_borrowernumber($patron_id, $_->{borrowernumber})) {
			return $i;  # maybe should return $_->{priority}
		}
	}
    return 0;
}

sub due_date {
    my $self = shift;
    return $self->{due_date} || 0;
}
sub recall_date {
    my $self = shift;
    return $self->{recall_date} || 0;
}
sub hold_pickup_date {
    my $self = shift;
    return $self->{hold_pickup_date} || 0;
}
sub screen_msg {
    my $self = shift;
    return $self->{screen_msg} || '';
}
sub print_line {
	my $self = shift;
	return $self->{print_line} || '';
}

# This is a partial check of "availability".  It is not supposed to check everything here.
# An item is available for a patron if it is:
# 1) checked out to the same patron 
#    AND no pending (i.e. non-W) hold queue
# OR
# 2) not checked out
#    AND (not on hold_shelf OR is on hold_shelf for patron)
#
# What this means is we are consciously allowing the patron to checkout (but not renew) an item that DOES
# have non-W holds on it, but has not been "picked" from the stacks.  That is to say, the
# patron has retrieved the item before the librarian.
#
# We don't check if the patron is at the front of the pending queue in the first case, because
# they should not be able to place a hold on an item they already have.

sub available {
	my ($self, $for_patron) = @_;
	my $count  = (defined $self->{pending_queue}) ? scalar @{$self->{pending_queue}} : 0;
	my $count2 = (defined $self->{hold_shelf}   ) ? scalar @{$self->{hold_shelf}   } : 0;
	$debug and print STDERR "availability check: pending_queue size $count, hold_shelf size $count2\n";
    if (defined($self->{patron_id})) {
	 	($self->{patron_id} eq $for_patron) or return 0;
		return ($count ? 0 : 1);
	} else {	# not checked out
        ($count2) and return $self->barcode_is_borrowernumber($for_patron, $self->{hold_shelf}[0]->{borrowernumber});
	}
	return 0;
}

sub _barcode_to_borrowernumber ($) {
    my $known = shift;
    (defined($known)) or return undef;
    my $member = GetMember($known,'cardnumber') or return undef;
    return $member->{borrowernumber};
}
sub barcode_is_borrowernumber ($$$) {    # because hold_queue only has borrowernumber...
    my $self = shift;   # not really used
    my $barcode = shift;
    my $number  = shift or return undef;    # can't be zero
    (defined($barcode)) or return undef;    # might be 0 or 000 or 000000
    my $converted = _barcode_to_borrowernumber($barcode) or return undef;
    return ($number eq $converted); # even though both *should* be numbers, eq is safer.
}
sub fill_reserve ($$) {
    my $self = shift;
    my $hold = shift or return undef;
    foreach (qw(biblionumber borrowernumber reservedate)) {
        $hold->{$_} or return undef;
    }
    return ModReserveFill($hold);
}
1;
__END__

