<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
    "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<title>KOHA: INTRANET: Catalogue</title>
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
	<a href="/cgi-bin/koha/acqui/acqui-home.pl">Acquisitions</a>  <a href="/cgi-bin/koha/catalogue/search.pl">Catalogue</a>  <a  href="/cgi-bin/koha/circ/circulation.pl">Circulation</a>  <a class="members" href="/cgi-bin/koha/members/members-home.pl">Members</a>  <a class="authority" href="/cgi-bin/koha/authorities/authorities-home.pl">Authorities</a>  <a class="reports" href="/cgi-bin/koha/reports-home.pl">Reports</a>  <a class="parameters" href="/cgi-bin/koha/admin-home.pl">Parameters</a>  <a class="about" href="/cgi-bin/koha/about.pl">About</a>  <a href="/cgi-bin/koha/help.pl" onclick="Help(); return false;">Help</a>
</div>
<div id="submenu">
	<span class="koha">options &gt;&gt;&nbsp;&nbsp;</span>
	 <a href="/cgi-bin/koha/catalogue/search.pl" class="submenu2">Keres</a> <a href="/cgi-bin/koha/virtualshelves/shelves.pl" class="submenu">Listák</a> <a href="/cgi-bin/koha/cataloguing/addbiblio.pl" class="submenu2">Hozzáad rekordot</a> <a href="/cgi-bin/koha/maint/catmaintain.pl" class="submenu">Cat karbantartás</ a>  \t
</div>
<!-- TMPL_IF NAME="loggedinusername" -->
    <p align="left">Logged in as: <!-- TMPL_VAR NAME="loggedinusername" --> [<a href="/cgi-bin/koha/mainpage.pl?logout.x=1">Log Out</a>]</p>
<!-- TMPL_ELSE -->
    <p align="left"><a href="/cgi-bin/koha/opac-user.pl">Jelentkezz be</a> a Koha-ba</p>
<!-- /TMPL_IF -->
