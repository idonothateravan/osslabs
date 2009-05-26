<div id="header" class="clearfix">

<div id="toplevelnav">
<ul id="toplevelmenu">
	<!-- TMPL_IF NAME="CAN_user_circulate" --><li><a href="/cgi-bin/koha/circ/circulation-home.pl">Ausleihe</a></li><!-- /TMPL_IF -->
	 <!-- TMPL_IF NAME="CAN_user_borrowers" --><li><a href="/cgi-bin/koha/members/members-home.pl">Benutzer</a></li><!-- /TMPL_IF -->
	<!-- TMPL_IF NAME="CAN_user_catalogue" --><li><a href="/cgi-bin/koha/catalogue/search.pl">Suche</a></li><!-- /TMPL_IF -->
	<!-- TMPL_VAR name="IntranetNav" -->
	<li class="more"><a id="showmore" href="/cgi-bin/koha/mainpage.pl">mehr</a><div id="moremenu"><div class="bd"><ul>
	<li><a href="/cgi-bin/koha/virtualshelves/shelves.pl">Listen</a></li>
	<!-- TMPL_IF NAME="CAN_user_editcatalogue" --><li><a href="/cgi-bin/koha/cataloguing/addbooks.pl">Katalogisierung</a></li>
	<!-- TMPL_IF NAME="CAN_user_acquisition" -->
	<li><a href="/cgi-bin/koha/acqui/acqui-home.pl">Erwerbungen</a></li>
	<!-- /TMPL_IF -->
	<li><a href="/cgi-bin/koha/authorities/authorities-home.pl">Normdaten</a></li>
	<!-- TMPL_IF NAME="CAN_user_serials" -->
	<li><a href="/cgi-bin/koha/serials/serials-home.pl">Zeitschriften</a></li><!-- /TMPL_IF -->
	<!-- /TMPL_IF -->
	<!-- TMPL_IF NAME="CAN_user_reports" --><li><a href="/cgi-bin/koha/reports/reports-home.pl">Berichte</a></li><!-- /TMPL_IF -->
	<!-- TMPL_IF NAME="CAN_user_tools" --><li><a href="/cgi-bin/koha/tools/tools-home.pl">Werkzeuge</a></li><!-- /TMPL_IF -->
	<!-- TMPL_IF NAME="CAN_user_parameters" --><li><a href="/cgi-bin/koha/admin/admin-home.pl">Administration</a></li><!-- /TMPL_IF -->
	<li><a href="/cgi-bin/koha/about.pl">Über Koha</a></li></ul></div></div></li>
</ul>
</div>
<div id="login">
  <!-- TMPL_IF NAME="AutoLocation" --><strong><!-- TMPL_VAR NAME="LoginBranchname" --></strong>
  <!-- TMPL_ELSE -->
       <strong><!-- TMPL_VAR NAME="LoginBranchname" --></strong>
       <!-- TMPL_IF NAME="IndependantBranches" -->
          <!-- TMPL_IF NAME="CAN_user_management" --> (<a href="/cgi-bin/koha/circ/selectbranchprinter.pl">ändern</a>)<!-- /TMPL_IF -->
           <!-- TMPL_ELSE -->
             (<a href="/cgi-bin/koha/circ/selectbranchprinter.pl">ändern</a>)
           <!-- /TMPL_IF -->
         | <!-- /TMPL_IF -->
  <!-- TMPL_IF NAME="loggedinusername" --><span class="loggedinusername"><!-- TMPL_VAR NAME="loggedinusername" --></span> (<a href="/cgi-bin/koha/mainpage.pl?logout.x=1">Abmelden</a>) |
  <!-- TMPL_ELSE -->Sie sind nicht angemeldet |
  <!-- /TMPL_IF -->
  <a href="/cgi-bin/koha/help.pl" id="helper" onclick="window.open('/cgi-bin/koha/help.pl','Koha_Help','width=600,height=600,toolbar=false,scrollbars=yes'); return false;">[ ? ]</a></div></div>	
