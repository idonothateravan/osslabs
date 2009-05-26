#!/usr/bin/perl


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
use CGI;
use C4::Context;

use C4::Search;
use C4::Output;

=head1

plugin_parameters : other parameters added when the plugin is called by the dopop function

=cut

sub plugin_parameters {
    my ( $dbh, $record, $tagslib, $i, $tabloop ) = @_;
    return "";
}

sub plugin_javascript {
    my ( $dbh, $record, $tagslib, $field_number, $tabloop ) = @_;
    my $function_name = $field_number;
    my $res           = "
<script>
function Focus$function_name(subfield_managed) {
return 1;
}

function Blur$function_name(subfield_managed) {
	var leader_length = document.getElementById(\"$field_number\").value.length;
    if (leader_length != 24 && leader_length !=0) {
        alert(_('leader has an incorrect size: ' + leader_length + ' instead of 24 chars'));
    }
    return 1;
}

function Clic$function_name(i) {
	defaultvalue=document.getElementById(\"$field_number\").value;
	newin=window.open(\"../cataloguing/plugin_launcher.pl?plugin_name=unimarc_leader.pl&index=$field_number&result=\"+defaultvalue,\"unimarc field 100\",'width=1000,height=600,toolbar=false,scrollbars=yes');

}
</script>
";

    return ( $function_name, $res );
}

sub plugin {
    my ($input) = @_;
    my $index   = $input->param('index');
    my $result  = $input->param('result');
    my $dbh     = C4::Context->dbh;

    my ( $template, $loggedinuser, $cookie ) = get_template_and_user(
        {
            template_name   => "cataloguing/value_builder/unimarc_leader.tmpl",
            query           => $input,
            type            => "intranet",
            authnotrequired => 0,
            flagsrequired   => { editcatalogue => 1 },
            debug           => 1,
        }
    );
    $result = "     nam         3       " unless $result;
    my $f5  = substr( $result, 5,  1 );
    my $f6  = substr( $result, 6,  1 );
    my $f7  = substr( $result, 7,  1 );
    my $f8  = substr( $result, 8,  1 );
    my $f9  = substr( $result, 9,  1 );
    my $f17 = substr( $result, 17, 1 );
    my $f18 = substr( $result, 18, 1 );
    my $f19 = substr( $result, 19, 1 );

    $template->param(
        index     => $index,
        "f5$f5"   => 1,
        "f6$f6"   => 1,
        "f7$f7"   => 1,
        "f8$f8"   => 1,
        "f9$f9"   => 1,
        "f17$f17" => 1,
        "f18$f18" => 1,
        "f19$f19" => 1,
    );
    output_html_with_http_headers $input, $cookie, $template->output;
}

1;
