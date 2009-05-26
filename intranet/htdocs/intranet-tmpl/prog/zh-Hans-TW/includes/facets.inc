<!-- TMPL_IF NAME="opacfacets" -->
<!-- TMPL_IF NAME="facets_loop" -->
<div id="search-facets">
<h4>重新查詢</h4>
<ul>
	<li>可取得<ul><li><!-- TMPL_IF NAME="available" -->只顯示 <strong>可取得</strong> 館藏。<a href="/cgi-bin/koha/catalogue/search.pl?<!-- TMPL_VAR NAME="query_cgi" --><!-- TMPL_VAR NAME="limit_cgi_not_availablity" --><!-- TMPL_IF NAME="sort_by" -->&sort_by=<!-- TMPL_VAR NAME="sort_by" --><!-- /TMPL_IF -->">顯示所有館藏</a><!-- TMPL_ELSE -->限制條件 <a href="/cgi-bin/koha/catalogue/search.pl?<!-- TMPL_VAR NAME="query_cgi" --><!-- TMPL_VAR NAME="limit_cgi" --><!-- TMPL_IF NAME="sort_by" -->&sort_by=<!-- TMPL_VAR NAME="sort_by" --><!-- /TMPL_IF -->&amp;limit=available">目前可以借閱館藏。</a><!-- /TMPL_IF --></li></ul>
	<!-- TMPL_IF NAME="related" --> <li>（相關查詢： <!-- TMPL_LOOP NAME="related" --><!-- TMPL_VAR NAME="related_search" --><!-- /TMPL_LOOP -->)</li><!-- /TMPL_IF -->
	</li>

	<!-- TMPL_LOOP NAME="facets_loop" -->
	<li id="<!-- TMPL_VAR NAME="type_id" -->">
<!-- TMPL_VAR NAME="type_label" -->
<!-- TMPL_IF NAME="type_label_Authors" -->作者<!-- /TMPL_IF -->
<!-- TMPL_IF NAME="type_label_Titles" -->題名<!-- /TMPL_IF -->
<!-- TMPL_IF NAME="type_label_Topics" -->Topics<!-- /TMPL_IF -->
<!-- TMPL_IF NAME="type_label_Places" -->Places<!-- /TMPL_IF -->
<!-- TMPL_IF NAME="type_label_Series" -->期刊<!-- /TMPL_IF -->
<!-- TMPL_IF NAME="type_label_Libraries" -->圖書館<!-- /TMPL_IF -->
<ul>
        <!-- TMPL_LOOP NAME="facets" --><li><a href="/cgi-bin/koha/catalogue/search.pl?<!-- TMPL_VAR NAME="query_cgi" --><!-- TMPL_VAR NAME="limit_cgi" --><!-- TMPL_IF NAME="sort_by" -->&sort_by=<!-- TMPL_VAR NAME="sort_by" --><!-- /TMPL_IF -->&amp;limit=<!-- TMPL_VAR NAME="type_link_value" -->:<!-- TMPL_VAR NAME="facet_link_value" -->" title="<!-- TMPL_VAR NAME="facet_title_value" -->"><!-- TMPL_VAR NAME="facet_label_value" --></a> <!-- (<!-- TMPL_VAR NAME="facet_count" -->) --></li><!-- /TMPL_LOOP --><!-- TMPL_IF NAME="expandable" -->
        <li class="showmore"><a href="/cgi-bin/koha/catalogue/search.pl?<!-- TMPL_VAR NAME="query_cgi" -->&amp;expand=<!-- TMPL_VAR NAME="expand" -->#<!-- TMPL_VAR NAME="type_id" -->">顯示更多</a></li>
<!-- /TMPL_IF -->
</ul></li>
<!-- /TMPL_LOOP -->
</ul>
</div>
<!-- /TMPL_IF -->
<!-- /TMPL_IF -->
