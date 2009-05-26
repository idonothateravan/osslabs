<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
    "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<title>KOHA : INTRANET : Katalog</title>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />

<script language="JavaScript">
<!-- Hide from old browsers
function openWindow(targeturl, windowname) {
newwin =
window.open(targeturl,windowname,"height=480,width=640,scrollbars,resizable")
}
// end hiding -->
</script>

<script language="JavaScript" type="text/javascript">
function Help() {
	newin=window.open("/cgi-bin/koha/help.pl","Koha Help",'width=600,height=600,toolbar=false,scrollbars=yes');
}
</script>

<link rel="stylesheet" type="text/css" href="<!-- TMPL_VAR name="themelang" -->/css/staff.css" />
<style type="text/css">
.catalogue {
	background-color:#ad11ad;
	color:#FFFFFF;
	background-image:none;
	text-decoration: normal;
	}
a.catalogue:hover {
	background-color: #ad11ad;
	color: #FFFFFF;
	text-decoration: none;
	}
</style>
</head>

<body>
<!-- MENUS -->
<div id="menubar">
	<span class="koha">KOHA</span>
	<span class="koha"><a class="home" href="/cgi-bin/koha/mainpage.pl">Koha</a></span>
	<a href="/cgi-bin/koha/acqui/acqui-home.pl">Erwerbung</a> <a href="/cgi-bin/koha/catalogue/search.pl">Katalogisierung</a> <a  href="/cgi-bin/koha/circ/circulation.pl">Ausleihe</a> <a class="members" href="/cgi-bin/koha/members/members-home.pl">Benutzer</a> <a class="authority" href="/cgi-bin/koha/authorities/authorities-home.pl">Normdaten</a> <a class="reports" href="/cgi-bin/koha/reports-home.pl">Berichte</a> <a class="parameters" href="/cgi-bin/koha/admin-home.pl">Parameter</a> <a class="about" href="/cgi-bin/koha/about.pl">Über</a> <a href="/cgi-bin/koha/help.pl" onclick="Help(); return false;">Hilfe</a>
</div>
<div id="submenu">
	<span class="koha">Optionen &gt;&gt;&nbsp;&nbsp;</span>
	<a href="/cgi-bin/koha/catalogue/search.pl" class="submenu2">Suche</a> <a href="/cgi-bin/koha/virtualshelves/shelves.pl" class="submenu">Listen</a> <a href="/cgi-bin/koha/cataloguing/addbiblio.pl" class="submenu2">Titel hinzufügen</a> <a href="/cgi-bin/koha/maint/catmaintain.pl" class="submenu">Katalogpflege</a>
</div>
<!-- TMPL_IF NAME="loggedinusername" -->
    <p align="left">Angemeldet als: <!-- TMPL_VAR NAME="loggedinusername" --> [<a href="/cgi-bin/koha/mainpage.pl?logout.x=1">Abmelden</a>]</p>
<!-- TMPL_ELSE -->
    <p align="left"><a href="/cgi-bin/koha/opac-user.pl">Anmelden</a> in Koha</p>
<!-- /TMPL_IF -->
