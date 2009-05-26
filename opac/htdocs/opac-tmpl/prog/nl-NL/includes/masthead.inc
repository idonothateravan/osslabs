<div id="header-wrapper"><div id="members">
  <!-- TMPL_IF NAME="opacuserlogin" -->
	<ul><!-- TMPL_IF NAME="loggedinusername" --><li><span class="members">Welkom, <a href="/cgi-bin/koha/opac-user.pl"><span class="loggedinusername"><!-- TMPL_LOOP NAME="USER_INFO" --><!-- TMPL_VAR NAME="title" --> <!-- TMPL_VAR NAME="firstname" --> <!-- TMPL_VAR NAME="surname" --><!-- /TMPL_LOOP --></span></a></span></li><li><a class="logout" id="logout" href="/cgi-bin/koha/opac-main.pl?logout.x=1">Uitloggen</a></li><!-- TMPL_ELSE --><li><a href="/cgi-bin/koha/opac-user.pl">Inloggen in uw rekening</a></li><!-- /TMPL_IF -->
	</ul>	
  <!-- /TMPL_IF -->
</div>
  <!-- TMPL_IF NAME="opacheader" -->
	<!-- TMPL_VAR NAME="opacheader" -->
  <!-- /TMPL_IF -->
<div id="opac-main-search" class="yui-g">
   <!-- TMPL_IF NAME="opacsmallimage" -->
   <h1 id="libraryname" style="background-image: url('<!-- TMPL_VAR NAME="opacsmallimage" -->');">
   <!-- TMPL_ELSE -->
   <h1 id="libraryname">
   <!-- /TMPL_IF --><a href="/cgi-bin/koha/opac-main.pl"><!-- TMPL_IF NAME="LibraryName" --><!-- TMPL_VAR NAME="LibraryName" --><!-- TMPL_ELSE -->Koha Online cataloog<!-- /TMPL_IF --></a></h1>

<div id="fluid">
<div id="fluid-offset">
<!-- TMPL_UNLESS NAME="advsearch" --><form name="searchform" method="get" action="/cgi-bin/koha/opac-search.pl" id="searchform">
	<label for="masthead_search" class="left"> Zoek <!-- TMPL_IF name="mylibraryfirst" --> <!-- TMPL_IF name="loggedinusername" -->(enkel in <!-- TMPL_VAR name="LoginBranchcode" -->)<!-- /TMPL_IF --><!-- /TMPL_IF --></label>
	<select name="idx" id="masthead_search" class="left" style="max-width:9em;width:9em;">
	<!-- TMPL_IF NAME="ms_kw" -->
        <option selected="selected" value="">Bibliotheekcataloog</option>
		<!-- TMPL_ELSE -->
        <option value="">Bibliotheekcataloog</option>
		<!-- /TMPL_IF -->
		<!-- TMPL_IF NAME="ms_ti" -->
        <option selected="selected" value="ti">Titel</option>
		<!-- TMPL_ELSE -->
        <option value="ti">Titel</option>
		<!-- /TMPL_IF -->
		<!-- TMPL_IF NAME="ms_au" -->
        <option selected="selected" value="au">Auteur</option>
		<!-- TMPL_ELSE -->
        <option value="au">Auteur</option>
		<!-- /TMPL_IF -->
		<!-- TMPL_IF NAME="ms_su" -->
        <option selected="selected" value="su">Onderwerp</option>
		<!-- TMPL_ELSE -->
        <option value="su">Onderwerp</option>
		<!-- /TMPL_IF -->
		<!-- TMPL_IF NAME="ms_nb" -->
		<option selected="selected" value="nb">ISBN</option>
		<!-- TMPL_ELSE -->
		<option value="nb">ISBN</option>
		<!-- /TMPL_IF -->
		<!-- TMPL_IF NAME="ms_se" -->
        <option selected="selected" value="se">Series</option>
		<!-- TMPL_ELSE -->
        <option value="se">Series</option>
		<!-- /TMPL_IF -->
		<!-- TMPL_IF NAME="ms_callnum" -->
        <option selected="selected" value="callnum">Standplaatsnummer</option>
		<!-- TMPL_ELSE -->
        <option value="callnum">Standplaatsnummer</option>
		<!-- /TMPL_IF --></select>
<!-- TMPL_IF NAME="ms_value" -->
        <input type="text" name="q" value="<!-- TMPL_VAR NAME="ms_value" -->" class="left" style="width: 35%; font-size: 111%;" />
<!-- TMPL_ELSE -->
        <input type="text" name="q" class="left" style="width: 35%; font-size: 111%;" />
<!-- /TMPL_IF -->
        <!-- TMPL_IF name="mylibraryfirst" --><!-- TMPL_IF name="loggedinusername" -->
            <input name="limit" value="<!-- TMPL_VAR name="LoginBranchcode" -->" type="hidden" />
        <!-- /TMPL_IF --><!-- /TMPL_IF -->
        <input type="submit" value="Ga" id="searchsubmit" class="left">
		<!-- TMPL_IF EXPR="opacbookbag || virtualshelves" -->

<!-- TMPL_IF NAME="opacbookbag" --><span id="cmspan"></span><!-- /TMPL_IF -->

<!--TMPL_IF NAME="virtualshelves" --><a href="/cgi-bin/koha/opac-shelves.pl" id="listsmenulink" class=""><i></i><span><i></i><span></span>Lijsten </span></a><!-- /TMPL_IF -->

<!-- /TMPL_IF -->
    </form>

<div id="moresearches"><a href="/cgi-bin/koha/opac-search.pl">Geavanceerd zoeken</a><!-- TMPL_IF name="OpacBrowser" --> | <a href="/cgi-bin/koha/opac-browser.pl">Blader op hiërarchie</a><!-- /TMPL_IF --><!-- TMPL_IF name="OpacAuthorities" --> | <a href="/cgi-bin/koha/opac-authorities-home.pl">Blader op onderwerp</a><!-- /TMPL_IF --><!-- TMPL_IF NAME="TagsEnabled" --> | <a href="/cgi-bin/koha/opac-tags.pl">Gebruikers label</a><!-- /TMPL_IF --><!-- TMPL_IF name="OpacCloud" --> | <a href="/cgi-bin/koha/opac-tags_subject.pl">Label cluster</a><!-- /TMPL_IF --><!-- TMPL_IF name="OpacTopissue" --> | <a href="/cgi-bin/koha/opac-topissues.pl">Populairst</a><!-- /TMPL_IF --><!-- TMPL_IF NAME="suggestion" --><!-- TMPL_IF NAME="AnonSuggestions" --> | <a href="/cgi-bin/koha/opac-suggestions.pl">Aankoopsuggestie</a><!-- TMPL_ELSIF NAME="OPACViewOthersSuggestions" --> | <a href="/cgi-bin/koha/opac-suggestions.pl">Aankoopsuggestie</a><!-- /TMPL_IF --><!-- /TMPL_IF --></div>
<!-- TMPL_ELSE -->

<div id="moresearches"><!-- TMPL_IF name="OpacBrowser" --> | <a href="/cgi-bin/koha/opac-browser.pl">Blader op hiërarchie</a><!-- /TMPL_IF --><!-- TMPL_IF name="OpacAuthorities" --> | <a href="/cgi-bin/koha/opac-authorities-home.pl">Blader op onderwerp</a><!-- /TMPL_IF --> | <a href="/cgi-bin/koha/opac-tags.pl">Gebruikers label</a><!-- TMPL_IF name="OpacCloud" --> | <a href="/cgi-bin/koha/opac-tags_subject.pl">Label cluster</a><!-- /TMPL_IF --><!-- TMPL_IF name="OpacTopissue" --> | <a href="/cgi-bin/koha/opac-topissues.pl">Populairst</a><!-- /TMPL_IF --><!-- TMPL_IF NAME="suggestion" --><!-- TMPL_IF NAME="AnonSuggestions" --> | <a href="/cgi-bin/koha/opac-suggestions.pl">Aankoopsuggestie</a><!-- TMPL_ELSIF NAME="OPACViewOthersSuggestions" --> | <a href="/cgi-bin/koha/opac-suggestions.pl">Aankoopsuggestie</a><!-- /TMPL_IF --><!-- /TMPL_IF --></div>
<!-- /TMPL_UNLESS -->

</div>
</div>

<!-- TMPL_IF NAME="opacbookbag" --><div id="cartDetails">Uw winkelwagentje is leeg.</div><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="virtualshelves" -->
<div id="listsmenu" class="yuimenu" style="display: none">
    <div class="bd">
	<h4>Publieke Lijsten</h4>
		<!-- TMPL_IF NAME="pubshelves" -->
			<ul class="first-of-type">
			<!-- TMPL_LOOP NAME="pubshelvesloop" -->
			<li class="yuimenuitem"><a href="/cgi-bin/koha/opac-shelves.pl?viewshelf=<!-- TMPL_VAR NAME="shelfnumber" -->"><!-- TMPL_VAR NAME="shelfname"  ESCAPE="html" --></a></li>
			<!-- /TMPL_LOOP -->
			</ul>   
		<!-- TMPL_ELSE -->
			Geen publieke lijsten
		<!-- /TMPL_IF -->
		<!-- TMPL_IF NAME="pubtotal" -->
			<ul class="second-of-type">
            <li class="yuimenuitem"><a class="yuimenuitemlabel" href="/cgi-bin/koha/opac-shelves.pl?display=publicshelves">View all <!--TMPL_VAR NAME="pubtotal" --> public lists</a></li>
			</ul>
		<!-- /TMPL_IF -->
<!-- TMPL_IF NAME="opacuserlogin" -->
<!-- TMPL_IF NAME="loggedinusername" -->
<h4>Uw lijsten</h4>
		<!-- TMPL_IF NAME="barshelves" -->
			<ul class="first-of-type">
			<!-- TMPL_LOOP NAME="barshelvesloop" -->
			<li class="yuimenuitem"><a href="/cgi-bin/koha/opac-shelves.pl?viewshelf=<!-- TMPL_VAR NAME="shelfnumber" -->"><!-- TMPL_VAR NAME="shelfname"  ESCAPE="html" --></a></li>
			<!-- /TMPL_LOOP -->
			</ul>   
		<!-- TMPL_ELSE -->
			Geen private lijsten
		<!-- /TMPL_IF -->
		<!-- TMPL_IF NAME="bartotal" -->
			<ul class="second-of-type">
            <li class="yuimenuitem"><a class="yuimenuitemlabel" href="/cgi-bin/koha/opac-shelves.pl?display=privateshelves">View all <!--TMPL_VAR NAME="bartotal" --> of your lists</a></li>
			</ul>
		<!-- /TMPL_IF -->
		<ul class="second-of-type">
        <li class="yuimenuitem"><a class="yuimenuitemlabel" href="/cgi-bin/koha/opac-shelves.pl">Beheer lijsten</a></li>
        </ul>
		<!-- TMPL_ELSE --><ul class="first-of-type"><li><a href="/cgi-bin/koha/opac-user.pl">Inloggen om uw eigen lijsten te maken</a></li></ul><!-- /TMPL_IF -->
<!-- /TMPL_IF -->
	  </div>
</div>
<!-- /TMPL_IF -->
</div>
</div>
<div id="breadcrumbs" class="yui-g"><!-- TMPL_IF NAME="searchdesc" --><p><!-- TMPL_IF name="total" --><strong>&ldquo;<!-- TMPL_VAR NAME="query_desc" --><!-- TMPL_VAR NAME="limit_desc" -->&rdquo; </strong>