<div id="toolbar"><script type="text/javascript">
	//<![CDATA[

	// prepare DOM for YUI Toolbar

	 $(document).ready(function() {
	    yuiToolbar();
	 });

	// YUI Toolbar Functions

	function yuiToolbar() {   
	
	    new YAHOO.widget.Button("newsupplier");
	    <!-- TMPL_IF NAME="id" -->new YAHOO.widget.Button("neworder");
	    new YAHOO.widget.Button("editsupplier");
	    new YAHOO.widget.Button("manageorders");
	    new YAHOO.widget.Button("receive");<!-- /TMPL_IF -->
	}

	//]]>
	</script>
	<ul class="toolbar">
		<li><a id="newsupplier" href="/cgi-bin/koha/acqui/supplier.pl?op=enter">Neuer Lieferant</a></li>
		<!-- TMPL_IF NAME="id" -->
		<li><a id="neworder" href="/cgi-bin/koha/acqui/basket.pl?supplierid=<!-- TMPL_VAR NAME="id" -->">neue Bestellung</a></li>
		<li><a id="editsupplier" href="/cgi-bin/koha/acqui/supplier.pl?supplierid=<!--TMPL_VAR Name="id"-->&amp;op=enter">Lieferant bearbeiten</a></li>
		<li><a id="manageorders" href="/cgi-bin/koha/acqui/booksellers.pl?supplierid=<!--TMPL_VAR Name="id"-->">Bestellungen managen</a></li>
		<li><a id="receive" href="/cgi-bin/koha/acqui/parcels.pl?supplierid=<!--TMPL_VAR Name="id"-->">Lieferung erhalten</a></li>
		<!-- /TMPL_IF -->
	</ul>
</div>
