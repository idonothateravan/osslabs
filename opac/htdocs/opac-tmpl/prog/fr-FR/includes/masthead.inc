<div id="header-wrapper"><div id="members">
  <!-- TMPL_IF NAME="opacuserlogin" -->
	<ul><!-- TMPL_IF NAME="loggedinusername" --><li><span class="members">Bienvenu, <a href="/cgi-bin/koha/opac-user.pl"><span class="loggedinusername"><!-- TMPL_LOOP NAME="USER_INFO" --><!-- TMPL_VAR NAME="title" --> <!-- TMPL_VAR NAME="firstname" --> <!-- TMPL_VAR NAME="surname" --><!-- /TMPL_LOOP --></span></a></span></li><li><a class="logout" id="logout" href="/cgi-bin/koha/opac-main.pl?logout.x=1">Déconnexion</a></li><!-- TMPL_ELSE --><li><a href="/cgi-bin/koha/opac-user.pl">Connectez-vous</a></li><!-- /TMPL_IF -->
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
   <!-- /TMPL_IF --><a href="/cgi-bin/koha/opac-main.pl"><!-- TMPL_IF NAME="LibraryName" --><!-- TMPL_VAR NAME="LibraryName" --><!-- TMPL_ELSE -->Catalogue Koha en ligne<!-- /TMPL_IF --></a></h1>

<div id="fluid">
<div id="fluid-offset">
<!-- TMPL_UNLESS NAME="advsearch" --><form name="searchform" method="get" action="/cgi-bin/koha/opac-search.pl" id="searchform">
	<label for="masthead_search" class="left"> Rechercher <!-- TMPL_IF name="mylibraryfirst" --> <!-- TMPL_IF name="loggedinusername" -->(<!-- TMPL_VAR name="LoginBranchcode" --> seulement)<!-- /TMPL_IF --><!-- /TMPL_IF --></label>
	<select name="idx" id="masthead_search" class="left" style="max-width:9em;width:9em;">
	<!-- TMPL_IF NAME="ms_kw" -->
        <option selected="selected" value="">Tous les mots</option>
		<!-- TMPL_ELSE -->
        <option value="">Tous les mots</option>
		<!-- /TMPL_IF -->
		<!-- TMPL_IF NAME="ms_ti" -->
        <option selected="selected" value="ti">Titre</option>
		<!-- TMPL_ELSE -->
        <option value="ti">Titre</option>
		<!-- /TMPL_IF -->
		<!-- TMPL_IF NAME="ms_au" -->
        <option selected="selected" value="au">Auteur</option>
		<!-- TMPL_ELSE -->
        <option value="au">Auteur</option>
		<!-- /TMPL_IF -->
		<!-- TMPL_IF NAME="ms_su" -->
        <option selected="selected" value="su">Sujet</option>
		<!-- TMPL_ELSE -->
        <option value="su">Sujet</option>
		<!-- /TMPL_IF -->
		<!-- TMPL_IF NAME="ms_nb" -->
		<option selected="selected" value="nb">ISBN</option>
		<!-- TMPL_ELSE -->
		<option value="nb">ISBN</option>
		<!-- /TMPL_IF -->
		<!-- TMPL_IF NAME="ms_se" -->
        <option selected="selected" value="se">Collections</option>
		<!-- TMPL_ELSE -->
        <option value="se">Collections</option>
		<!-- /TMPL_IF -->
		<!-- TMPL_IF NAME="ms_callnum" -->
        <option selected="selected" value="callnum">Cote</option>
		<!-- TMPL_ELSE -->
        <option value="callnum">Cote</option>
		<!-- /TMPL_IF --></select>
<!-- TMPL_IF NAME="ms_value" -->
        <input type="text" name="q" value="<!-- TMPL_VAR NAME="ms_value" -->" class="left" style="width: 35%; font-size: 111%;" />
<!-- TMPL_ELSE -->
        <input type="text" name="q" class="left" style="width: 35%; font-size: 111%;" />
<!-- /TMPL_IF -->
        <!-- TMPL_IF name="mylibraryfirst" --><!-- TMPL_IF name="loggedinusername" -->
            <input name="limit" value="<!-- TMPL_VAR name="LoginBranchcode" -->" type="hidden" />
        <!-- /TMPL_IF --><!-- /TMPL_IF -->
        <input type="submit" value="Allez" id="searchsubmit" class="left">
		<!-- TMPL_IF EXPR="opacbookbag || virtualshelves" -->

<!-- TMPL_IF NAME="opacbookbag" --><span id="cmspan"></span><!-- /TMPL_IF -->

<!--TMPL_IF NAME="virtualshelves" --><a href="/cgi-bin/koha/opac-shelves.pl" id="listsmenulink" class=""><i></i><span><i></i><span></span>Listes </span></a><!-- /TMPL_IF -->

<!-- /TMPL_IF -->
    </form>

<div id="moresearches"><a href="/cgi-bin/koha/opac-search.pl">Recherche avancée</a><!-- TMPL_IF name="OpacBrowser" --> | <a href="/cgi-bin/koha/opac-browser.pl">Parcourir par hiérarchie</a><!-- /TMPL_IF --><!-- TMPL_IF name="OpacAuthorities" --> | <a href="/cgi-bin/koha/opac-authorities-home.pl">Feuilleter par sujets</a><!-- /TMPL_IF --><!-- TMPL_IF NAME="TagsEnabled" --> | <a href="/cgi-bin/koha/opac-tags.pl">Tags utilisateurs</a><!-- /TMPL_IF --><!-- TMPL_IF name="OpacCloud" --> | <a href="/cgi-bin/koha/opac-tags_subject.pl">Nuage de sujets</a><!-- /TMPL_IF --><!-- TMPL_IF name="OpacTopissue" --> | <a href="/cgi-bin/koha/opac-topissues.pl">Les plus populaires</a><!-- /TMPL_IF --><!-- TMPL_IF NAME="suggestion" --><!-- TMPL_IF NAME="AnonSuggestions" --> | <a href="/cgi-bin/koha/opac-suggestions.pl">suggestions d'achat</a><!-- TMPL_ELSIF NAME="OPACViewOthersSuggestions" --> | <a href="/cgi-bin/koha/opac-suggestions.pl">suggestions d'achat</a><!-- /TMPL_IF --><!-- /TMPL_IF --></div>
<!-- TMPL_ELSE -->

<div id="moresearches"><!-- TMPL_IF name="OpacBrowser" --> | <a href="/cgi-bin/koha/opac-browser.pl">Parcourir par hiérarchie</a><!-- /TMPL_IF --><!-- TMPL_IF name="OpacAuthorities" --> | <a href="/cgi-bin/koha/opac-authorities-home.pl">Feuilleter par sujets</a><!-- /TMPL_IF --> | <a href="/cgi-bin/koha/opac-tags.pl">Tags utilisateurs</a><!-- TMPL_IF name="OpacCloud" --> | <a href="/cgi-bin/koha/opac-tags_subject.pl">Nuage de sujets</a><!-- /TMPL_IF --><!-- TMPL_IF name="OpacTopissue" --> | <a href="/cgi-bin/koha/opac-topissues.pl">Les plus populaires</a><!-- /TMPL_IF --><!-- TMPL_IF NAME="suggestion" --><!-- TMPL_IF NAME="AnonSuggestions" --> | <a href="/cgi-bin/koha/opac-suggestions.pl">suggestions d'achat</a><!-- TMPL_ELSIF NAME="OPACViewOthersSuggestions" --> | <a href="/cgi-bin/koha/opac-suggestions.pl">suggestions d'achat</a><!-- /TMPL_IF --><!-- /TMPL_IF --></div>
<!-- /TMPL_UNLESS -->

</div>
</div>

<!-- TMPL_IF NAME="opacbookbag" --><div id="cartDetails">Votre panier est vide.</div><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="virtualshelves" -->
<div id="listsmenu" class="yuimenu" style="display: none">
    <div class="bd">
	<h4>Listes publiques</h4>
		<!-- TMPL_IF NAME="pubshelves" -->
			<ul class="first-of-type">
			<!-- TMPL_LOOP NAME="pubshelvesloop" -->
			<li class="yuimenuitem"><a href="/cgi-bin/koha/opac-shelves.pl?viewshelf=<!-- TMPL_VAR NAME="shelfnumber" -->"><!-- TMPL_VAR NAME="shelfname"  ESCAPE="html" --></a></li>
			<!-- /TMPL_LOOP -->
			</ul>   
		<!-- TMPL_ELSE -->
			Pas de liste publique
		<!-- /TMPL_IF -->
		<!-- TMPL_IF NAME="pubtotal" -->
			<ul class="second-of-type">
            <li class="yuimenuitem"><a class="yuimenuitemlabel" href="/cgi-bin/koha/opac-shelves.pl?display=publicshelves">Voir les <!--TMPL_VAR NAME="pubtotal" --> listes publiques</a></li>
			</ul>
		<!-- /TMPL_IF -->
<!-- TMPL_IF NAME="opacuserlogin" -->
<!-- TMPL_IF NAME="loggedinusername" -->
<h4>Mes listes</h4>
		<!-- TMPL_IF NAME="barshelves" -->
			<ul class="first-of-type">
			<!-- TMPL_LOOP NAME="barshelvesloop" -->
			<li class="yuimenuitem"><a href="/cgi-bin/koha/opac-shelves.pl?viewshelf=<!-- TMPL_VAR NAME="shelfnumber" -->"><!-- TMPL_VAR NAME="shelfname"  ESCAPE="html" --></a></li>
			<!-- /TMPL_LOOP -->
			</ul>   
		<!-- TMPL_ELSE -->
			Pas de liste privée
		<!-- /TMPL_IF -->
		<!-- TMPL_IF NAME="bartotal" -->
			<ul class="second-of-type">
            <li class="yuimenuitem"><a class="yuimenuitemlabel" href="/cgi-bin/koha/opac-shelves.pl?display=privateshelves">Voir les <!--TMPL_VAR NAME="bartotal" --> de vos listes</a></li>
			</ul>
		<!-- /TMPL_IF -->
		<ul class="second-of-type">
        <li class="yuimenuitem"><a class="yuimenuitemlabel" href="/cgi-bin/koha/opac-shelves.pl">Gérer les listes</a></li>
        </ul>
		<!-- TMPL_ELSE --><ul class="first-of-type"><li><a href="/cgi-bin/koha/opac-user.pl">Identifiez-vous</a> pour créer vos listes personnelles</a></li></ul><!-- /TMPL_IF -->
<!-- /TMPL_IF -->
	  </div>
</div>
<!-- /TMPL_IF -->
</div>
</div>
<div id="breadcrumbs" class="yui-g"><!-- TMPL_IF NAME="searchdesc" --><p><!-- TMPL_IF name="total" --><strong>&ldquo;<!-- TMPL_VAR NAME="query_desc" --><!-- TMPL_VAR NAME="limit_desc" -->&rdquo; </strong>a renvoyé <!-- TMPL_VAR NAME="total" --> réponses. <!-- TMPL_IF NAME="related" --> (Recherches apparentées : <!-- TMPL_LOOP NAME="related" --><!-- TMPL_VAR NAME="related_search" --><!-- /TMPL_LOOP -->). <!-- /TMPL_IF -->
<a href="<!-- TMPL_VAR NAME="OPACBaseURL" -->/cgi-bin/koha/opac-search.pl?<!-- TMPL_VAR name="query_cgi" ESCAPE="HTML" --><!-- TMPL_VAR NAME="limit_cgi"  ESCAPE="HTML" -->&amp;format=rss2"><img src="/opac-tmpl/prog/images/feed-icon-16x16.png" alt="S'abonner à cette recherche" title="S'abonner à cette recherche" border="0"></a><!-- TMPL_ELSE --><!-- TMPL_IF NAME="searchdesc" -->
<strong>Pas de réponse !</strong>
<p>
    Aucune réponse ne correspond à votre recherche <span style="font-weight: bold;">&ldquo;<!-- TMPL_VAR NAME="query_desc" --><!-- TMPL_VAR NAME="limit_desc" -->&rdquo;</span> dans le catalogue de <!-- TMPL_VAR NAME="LibraryName" --> <a href="<!-- TMPL_VAR NAME="OPACBaseURL" -->/cgi-bin/koha/opac-search.pl?<!-- TMPL_VAR name="query_cgi" ESCAPE="HTML" --><!-- TMPL_VAR NAME="limit_cgi"  ESCAPE="HTML" -->&amp;format=rss2"><img src="/opac-tmpl/prog/images/feed-icon-16x16.png" alt="S'abonner à cette recherche" title="S'abonner à cette recherche" border="0"></a>
</p>
<!-- TMPL_ELSE --><strong> Pas de réponse !</strong>
<p>
    Vous n'avez précisé aucun critère de recherche.
</p>
</div><!-- /TMPL_IF -->
<!-- /TMPL_IF --></p><!-- /TMPL_IF --></div>
