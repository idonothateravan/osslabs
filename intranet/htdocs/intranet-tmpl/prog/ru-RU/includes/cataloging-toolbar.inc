

<div id="toolbar">
<script type="text/javascript">
	//<![CDATA[

	// prepare DOM for YUI Toolbar

	 $(document).ready(function() {
	    $("#newmenuc").empty();
	    yuiToolbar();
	 });

	// YUI Toolbar Functions

	function yuiToolbar() {   
	
    <!-- TMPL_IF NAME="NOTMARC" -->
	    new YAHOO.widget.Button("newrecord");
	<!-- TMPL_ELSE -->
	
		var newmenu = [
			{ text: _("Структура по умолчанию"), url: "/cgi-bin/koha/cataloguing/addbiblio.pl?frameworkcode=" },
			<!-- TMPL_LOOP NAME="frameworkcodeloop" -->{ text: "<!-- TMPL_VAR name="frameworktext" -->", url: "/cgi-bin/koha/cataloguing/addbiblio.pl?frameworkcode=<!-- TMPL_VAR name="value" -->"},
<!-- /TMPL_LOOP -->
		]

	    new YAHOO.widget.Button({
	        type: "menu",
	        label: _("Новая запись"),
	        name: "newmenubutton",
	        menu: newmenu,
	        container: "newmenuc"
	    });  
	}

			<!-- /TMPL_IF -->
	//]]>
	</script>
	
  <div id="newmenuc">
    <!-- TMPL_IF NAME="NOTMARC" -->
		<a id="newrecord" href="/cgi-bin/koha/cataloging/addbiblio.pl">Новая запись</a>
	<!-- TMPL_ELSE -->
		<form name="f" action="addbiblio.pl" method="post">
		<label for="frameworkcode">New Record with framework:</label>
			<select name="frameworkcode" id="frameworkcode">
				<option value="">По умолчанию</option>
				<!-- TMPL_LOOP NAME="frameworkcodeloop" -->
					<option value="<!-- TMPL_VAR NAME="value" -->">
						<!-- TMPL_VAR NAME="frameworktext" -->
					</option>
				<!-- /TMPL_LOOP -->
			</select>
			<input type="submit" value="Add Record Without Search" />
		</form>
    <!-- /TMPL_IF -->  
  </div>
</div>
