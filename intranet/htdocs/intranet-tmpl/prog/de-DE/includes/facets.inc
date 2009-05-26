<!-- TMPL_IF NAME="opacfacets" -->
<!-- TMPL_IF NAME="facets_loop" -->
<div id="search-facets">
<h4>Präzisieren Sie die Suche</h4>
<ul>
	<li>Verfügbarkeit<ul><li><!-- TMPL_IF NAME="available" -->Zeige nur <strong>zur Verfügung</strong> Exemplare. <a href="/cgi-bin/koha/catalogue/search.pl?<!-- TMPL_VAR NAME="query_cgi" --><!-- TMPL_VAR NAME="limit_cgi_not_availablity" --><!-- TMPL_IF NAME="sort_by" -->&sort_by=<!-- TMPL_VAR NAME="sort_by" --><!-- /TMPL_IF -->">Alle Exemplare anzeigen</a><!-- TMPL_ELSE -->Limitiere auf <a href="/cgi-bin/koha/catalogue/search.pl?<!-- TMPL_VAR NAME="query_cgi" --><!-- TMPL_VAR NAME="limit_cgi" --><!-- TMPL_IF NAME="sort_by" -->&sort_by=<!-- TMPL_VAR NAME="sort_by" --><!-- /TMPL_IF -->&amp;limit=available">aktuell erhältliche Exemplare.</a><!-- /TMPL_IF --></li></ul>
	<!-- TMPL_IF NAME="related" --> <li>(verbundene Suchen: <!-- TMPL_LOOP NAME="related" --><!-- TMPL_VAR NAME="related_search" --><!-- /TMPL_LOOP -->)</li><!-- /TMPL_IF -->
	</li>

	<!-- TMPL_LOOP NAME="facets_loop" -->
	<li id="<!-- TMPL_VAR NAME="type_id" -->">
<!-- TMPL_VAR NAME="type_label" -->
<!-- TMPL_IF NAME="type_label_Authors" -->Verfasser<!-- /TMPL_IF -->
<!-- TMPL_IF NAME="type_label_Titles" -->Titel<!-- /TMPL_IF -->
<!-- TMPL_IF NAME="type_label_Topics" -->Themen<!-- /TMPL_IF -->
<!-- TMPL_IF NAME="type_label_Places" -->Orte<!-- /TMPL_IF -->
<!-- TMPL_IF NAME="type_label_Series" -->Serien<!-- /TMPL_IF -->
<!-- TMPL_IF NAME="type_label_Libraries" -->Bibliotheken<!-- /TMPL_IF -->
<ul>
        <!-- TMPL_LOOP NAME="facets" --><li><a href="/cgi-bin/koha/catalogue/search.pl?<!-- TMPL_VAR NAME="query_cgi" --><!-- TMPL_VAR NAME="limit_cgi" --><!-- TMPL_IF NAME="sort_by" -->&sort_by=<!-- TMPL_VAR NAME="sort_by" --><!-- /TMPL_IF -->&amp;limit=<!-- TMPL_VAR NAME="type_link_value" -->:<!-- TMPL_VAR NAME="facet_link_value" -->" title="<!-- TMPL_VAR NAME="facet_title_value" -->"><!-- TMPL_VAR NAME="facet_label_value" --></a> <!-- (<!-- TMPL_VAR NAME="facet_count" -->) --></li><!-- /TMPL_LOOP --><!-- TMPL_IF NAME="expandable" -->
        <li class="showmore"><a href="/cgi-bin/koha/catalogue/search.pl?<!-- TMPL_VAR NAME="query_cgi" -->&amp;expand=<!-- TMPL_VAR NAME="expand" -->#<!-- TMPL_VAR NAME="type_id" -->">Mehr zeigen</a></li>
<!-- /TMPL_IF -->
</ul></li>
<!-- /TMPL_LOOP -->
</ul>
</div>
<!-- /TMPL_IF -->
<!-- /TMPL_IF -->
