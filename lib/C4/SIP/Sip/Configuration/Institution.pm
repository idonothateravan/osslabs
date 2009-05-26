#
#
#
#

package Sip::Configuration::Institution;

use strict;
use warnings;
use English;
# use Exporter;

sub new {
    my ($class, $obj) = @_;
    my $type = ref($class) || $class;

    if (ref($obj) eq "HASH") {
	# Just bless the object
	return bless $obj, $type;
    }

    return bless {}, $type;
}

sub name {
    my $self = shift;
    return $self->{name};
}

sub policy {
    my $self = shift;
    return $self->{policy};
}

sub parms {
    my $self = shift;
    return $self->{parms};
}

1;
