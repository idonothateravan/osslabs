
<h1 id="logo"><a href="/cgi-bin/koha/mainpage.pl"><!-- TMPL_VAR NAME="LibraryName" --></a></h1><!-- Begin Serials Resident Search Box -->
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
</script><!-- /TMPL_IF --><!-- /TMPL_IF -->
<div id="header_search">
	<div id="subscription_search" class="residentsearch">
	<p class="tip">Search Subscriptions:</p>
 <form action="/cgi-bin/koha/serials/serials-home.pl" method="get"><!-- TMPL_IF NAME="routing" --><input type="hidden" name="routing" value="<!-- TMPL_VAR NAME="routing" -->" /><!-- /TMPL_IF --><input type="hidden" name="searched" value="1" /> <label for="ISSN_filter">ISSN:</label> <input type="text" size="10" maxlength="11" name="ISSN_filter" id="ISSN_filter" value="<!-- TMPL_VAR name="ISSN_filter" -->" /> <label for="title_filter">Заглавие:</label> <input type="text" size="20" maxlength="40" name="title_filter" id="title_filter" value="<!-- TMPL_VAR name="title_filter" -->" /><input type="submit" value="Искать" class="submit">
</form>
	</div>
<!-- TMPL_IF NAME="CAN_user_circulate" -->
<div id="circ_search" class="residentsearch" style="display:none;">
	<p class="tip">Enter patron card number or partial name:</p>
    <form action="/cgi-bin/koha/circ/circulation.pl" method="post">
    <!-- TMPL_IF NAME="CircAutocompl" -->
    <div class="autocomplete">
            <div id="borrowerautocomplete" class="autocomplete">
                <input autocomplete="off" id="findborrower" name="findborrower" class="focus" type="text" />
                <div id="yborrowercontainer"></div>
                <input id="ysearchsubmit" type="submit" class="submit" value="Утвердить">
                <input name="branch" value="<!-- TMPL_VAR name="branch" -->" type="hidden" />
                <input name="printer" value="" type="hidden" />
            </div>
        </div>
	<!-- TMPL_ELSE -->
            <input id="findborrower" name="findborrower" size="40" class="focus" type="text" />
            <input name="branch" value="<!-- TMPL_VAR name="branch" -->" type="hidden" />
            <input name="printer" value="" type="hidden" />
            <input value="Утвердить" class="submit" type="submit">
	<!-- /TMPL_IF -->
    </form>
</div>
	<!-- /TMPL_IF -->
	<!-- TMPL_IF NAME="CAN_user_catalogue" -->
	<div id="catalog_search" class="residentsearch" style="display:none;">
	<p class="tip">Enter search keywords:</p>
		<form action="/cgi-bin/koha/catalogue/search.pl"  method="get" id="cat-search-block">
			 <input type="text" name="q" id="search-form" size="40" value="" title="Enter the terms you wish to search for." class="form-text" />
				<input type="submit" value="Утвердить" class="submit">
		</form>
	</div>
	<!-- /TMPL_IF -->
			<ul>
			<li><a href="/cgi-bin/koha/serials/serials-home.pl#subscription_search">Search Subscriptions</a></li>
			<!-- TMPL_IF NAME="CAN_user_circulate" --><li><a href="/cgi-bin/koha/circ/circulation.pl#circ_search">Check Out</a></li><!-- /TMPL_IF -->
			<!-- TMPL_IF NAME="CAN_user_catalogue" --><li><a href="/cgi-bin/koha/catalogue/search.pl#catalog_search">Search the Catalog</a></li><!-- /TMPL_IF -->
			</ul>	
</div>
<!-- End Serials Resident Search Box -->
