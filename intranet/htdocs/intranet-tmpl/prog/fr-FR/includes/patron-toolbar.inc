<div id="toolbar">
	<script type="text/javascript">
	//<![CDATA[

	// prepare DOM for YUI Toolbar

	 $(document).ready(function() {
<!--TMPL_IF Name="AddPatronLists_categorycode"-->
<!--TMPL_ELSE-->
	 	$("#addchild").parent().remove();
		$("#addprofessional").parent().remove();
		$("#addorganisation").parent().remove();
		$("#addstaff").parent().remove();
		$("#addstatistical").parent().remove();
<!--/TMPL_IF-->
	    $("#newmenuc").empty();
	    yuiToolbar();
	 });

	// YUI Toolbar Functions

	function yuiToolbar() {

		var newmenu = [
<!--TMPL_IF Name="AddPatronLists_categorycode"-->
<!--TMPL_LOOP Name="categories"-->{ text: "<!--TMPL_VAR Name="description"-->",  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;categorycode=<!--TMPL_VAR Name="categorycode"-->" },<!--/TMPL_LOOP-->
<!--TMPL_ELSE-->
			{ text: _("Adhérent adulte"),  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;category_type=A" },
			{ text: _("Adhérent enfant"),  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;category_type=C" },
			{ text: _("Adhérent professionnel"),  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;category_type=P" },
			{ text: _("Collectivité"),  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;category_type=I" },
			{ text: _("Bibliothécaire"),  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;category_type=S" },
			{ text: _("Statistiques"),  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;category_type=X" },
<!--/TMPL_IF-->
		] 
	
	    new YAHOO.widget.Button({
	        type: "menu",
	        label: _("Ajouter"),
	        name: "newmenubutton",
	        menu: newmenu,
	        container: "newmenuc"
	    });
	
	}

	//]]>
	</script>
	<ul class="toolbar">
	<li id="newmenuc">
		<form action="/cgi-bin/koha/members/memberentry.pl" method="get">
			<input type="hidden" name="op" value="add" />
			<label for="categorycode">Nouvel adhérent : </label><select name="categorycode" id="categorycode">
			<!--TMPL_IF Name="AddPatronLists_categorycode"-->
				<!--TMPL_LOOP Name="categories"--><option value="<!--TMPL_VAR Name="categorycode"-->"><!--TMPL_VAR Name="description"--></option><!--/TMPL_LOOP-->
			<!-- TMPL_ELSE -->
				<option value="A">Adhérent adulte</option>
				<option value="C">Adhérent enfant</option>
				<option value="P">Adhérent professionnel</option>
				<option value="I">Collectivité</option>
				<option value="S">Bibliothécaire</option>
				<option value="X">Statistiques</option>
			<!--/TMPL_IF-->
			</select>
			<input type="submit" class="submit" value="Valider">
		</form>
	</li>
</ul>
</div>
