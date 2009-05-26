
<h1 id="logo"><a href="/cgi-bin/koha/mainpage.pl"><!-- TMPL_VAR NAME="LibraryName" --></a></h1><!-- Begin Suggestions Resident Search Box -->
<!-- TMPL_IF NAME="CAN_user_circulate" --><!-- TMPL_IF NAME="CircAutocompl" --><script type="text/javascript">
//<![CDATA[
YAHOO.util.Event.onContentReady("header_search", function() {
    new function() {
        // Define a custom formatter function
        this.fnCustomFormatter = function(oResultItem, sQuery) {
            var name        = oResultItem[0];
            var cardnumber  = oResultItem[1];
            var address     = oResultItem[2];
            var city        = oResultItem[3];
            var zip         = oResultItem[4];
            var aMarkup = [
                "<div class=\"sample-result\">",
                name,
                " (",
                cardnumber,
                ")<small> -- ",
                address,
                ", ",
                city,
                "</small>",
                "</div>"];
            return (aMarkup.join(""));
        };

        // Instantiate one XHR DataSource and define schema as an array:
        //     ["Record Delimiter",
        //     "Field Delimiter"]
        this.oACDS = new YAHOO.widget.DS_XHR("/cgi-bin/koha/circ/ysearch.pl", ["\n", "\t"]);
        this.oACDS.responseType = YAHOO.widget.DS_XHR.TYPE_FLAT;
        this.oACDS.maxCacheEntries = 60;
        this.oACDS.queryMatchSubset = true;
    
        // Instantiate first AutoComplete
        var myInput = document.getElementById('findborrower');
        var myContainer = document.getElementById('yborrowercontainer');
        this.oAutoComp = new YAHOO.widget.AutoComplete(myInput,myContainer,this.oACDS);
        //this.oAutoComp.delimChar = ";";
        //this.oAutoComp.queryDelay = 1;
        this.oAutoComp.formatResult = this.fnCustomFormatter;
}
});
 //]]>
 </script>  <!-- /TMPL_IF --><!-- /TMPL_IF -->
<div id="header_search">
	<div id="suggestions_search" class="residentsearch">
	<p class="tip">Rechercher suggestions</p>
	<form action="/cgi-bin/koha/acqui/newordersuggestion.pl" method="get">
	<label for="searchtitle">Titre :</label> <input type="text" id="searchtitle" name="title" size="10" value="<!-- TMPL_VAR NAME="title"-->" />
    <label for="searchauthor">Auteur : </label> <input type="text" id="searchauthor" name="author" size="10" value="<!-- TMPL_VAR NAME="author" -->" />
    <label for="searchpublishercode">Editeur : </label> <input type="text" id="searchpublishercode" name="publishercode" size="10" value="<!-- TMPL_VAR NAME="publishercode"-->" />
    <input type="submit" class="submit" value="Rechercher">
        </form>
	</div>
<!-- TMPL_IF NAME="CAN_user_circulate" -->
<div id="circ_search" class="residentsearch" style="display:none;">
	<p class="tip">Entrer le n° de carte d'adhérent ou une partie du nom : </p>
    <form action="/cgi-bin/koha/circ/circulation.pl" method="post">
    <!-- TMPL_IF NAME="CircAutocompl" -->
    <div class="autocomplete">
            <div id="borrowerautocomplete" class="autocomplete">
                <input autocomplete="off" id="findborrower" name="findborrower" class="focus" type="text" />
                <div id="yborrowercontainer"></div>
                <input id="ysearchsubmit" type="submit" class="submit" value="Valider">
                <input name="branch" value="<!-- TMPL_VAR name="branch" -->" type="hidden" />
                <input name="printer" value="" type="hidden" />
            </div>
        </div>
	<!-- TMPL_ELSE -->
            <input id="findborrower" name="findborrower" size="40" class="focus" type="text" />
            <input name="branch" value="<!-- TMPL_VAR name="branch" -->" type="hidden" />
            <input name="printer" value="" type="hidden" />
            <input value="Valider" class="submit" type="submit">
	<!-- /TMPL_IF -->
    </form>
</div>
	<!-- /TMPL_IF -->
	<!-- TMPL_IF NAME="CAN_user_catalogue" -->
	<div id="catalog_search" class="residentsearch" style="display:none;">
	<p class="tip">Entrer les termes de recherche :</p>
		<form action="/cgi-bin/koha/catalogue/search.pl"  method="get" id="cat-search-block">
			 <input type="text" name="q" id="search-form" size="40" value="" title="Détermine les serveurs Z3950 que vous voulez que Koha interroge." class="form-text">
				<input type="submit" value="Valider" class="submit">
		</form>
	</div>
	<!-- /TMPL_IF -->
			<ul>
			<li><a href="/cgi-bin/koha/acqui/newordersuggestion.pl?booksellerid=<!-- TMPL_VAR NAME="supplierid" -->&amp;basketno=<!-- TMPL_VAR NAME="basketno" -->#suggestions_search">Recherche suggestions</a></li>
			<!-- TMPL_IF NAME="CAN_user_circulate" --><li><a href="/cgi-bin/koha/circ/circulation.pl#circ_search">Prêt</a></li><!-- /TMPL_IF -->
			<!-- TMPL_IF NAME="CAN_user_catalogue" --><li><a href="/cgi-bin/koha/catalogue/search.pl#catalog_search">Recherche catalogue</a></li><!-- /TMPL_IF -->
			</ul>	
</div>
<!-- End Suggestions Resident Search Box -->
