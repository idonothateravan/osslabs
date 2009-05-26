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

use C4::Output;    # contains gettemplate
use C4::Auth;
use C4::Context;
use CGI;
use LWP::Simple;
use XML::Simple;
use Config;

my $query = new CGI;
my ( $template, $loggedinuser, $cookie ) = get_template_and_user(
    {
        template_name   => "about.tmpl",
        query           => $query,
        type            => "intranet",
        authnotrequired => 0,
        flagsrequired   => { catalogue => 1 },
        debug           => 1,
    }
);

my $kohaVersion   = C4::Context::KOHAVERSION;
my $osVersion     = `uname -a`;
my $perl_path = $^X;
if ($^O ne 'VMS') {
    $perl_path .= $Config{_exe} unless $perl_path =~ m/$Config{_exe}$/i;
}
my $perlVersion   = $];
my $mysqlVersion  = `mysql -V`;
my $apacheVersion = `httpd -v`;
$apacheVersion = `httpd2 -v` unless $apacheVersion;
$apacheVersion = (`/usr/sbin/apache2 -V`)[0] unless $apacheVersion;
my $zebraVersion = `zebraidx -V`;

$template->param(
    kohaVersion   => $kohaVersion,
    osVersion     => $osVersion,
    perlPath      => $perl_path,
    perlVersion   => $perlVersion,
    perlIncPath   => [ map { perlinc => $_ }, @INC ],
    mysqlVersion  => $mysqlVersion,
    apacheVersion => $apacheVersion,
    zebraVersion  => $zebraVersion,
);
my @component_names =
    qw/
Biblio::EndnoteStyle
CGI
CGI::Carp
CGI::Session
Class::Factory::Util
Class::Accessor
Compress::Zlib
DBD::mysql
DBI
Data::Dumper
Date::Calc
Data::ICal
Date::Manip
Digest::MD5
Email::Date
File::Temp
GD
GD::Barcode::UPCE
Getopt::Long
Getopt::Std
HTML::Template::Pro
HTTP::Cookies
HTTP::Request::Common
HTML::Scrubber
LWP::Simple
LWP::UserAgent
Lingua::Stem
List::Util
List::MoreUtils
Locale::Language
MARC::Crosswalk::DublinCore
MARC::Charset
MARC::File::XML
MARC::Record
MIME::Base64
MIME::Lite
MIME::QuotedPrint
Mail::Sendmail
Net::LDAP
Net::LDAP::Filter
Net::Z3950::ZOOM
PDF::API2
PDF::API2::Page
PDF::API2::Util
PDF::Reuse
PDF::Reuse::Barcode
POE
POSIX
Schedule::At
SMS::Send
Term::ANSIColor
Test
Test::Harness
Test::More
Text::CSV
Text::CSV_XS
Text::Iconv
Text::Wrap
Time::HiRes
Time::localtime
Unicode::Normalize
XML::Dumper
XML::LibXML
XML::LibXSLT
XML::SAX::ParserFactory
XML::Simple
XML::RSS
YAML::Syck
      /;

my @components = ();

my $counter=0;
foreach my $component ( sort @component_names ) {
    my $version;
    if ( eval "require $component" ) {
        $version = $component->VERSION;
        if ( $version eq '' ) {
            $version = 'unknown';
        }
    }
    else {
        $version = 'module is missing';
    }
    $counter++;
    $counter=0 if $counter >3;
    push(
        @components,
        {
            name    => $component,
            version => $version,
            counter => $counter,
        }
    );
}

$template->param( components => \@components );

output_html_with_http_headers $query, $cookie, $template->output;
