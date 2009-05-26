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
			{ text: _("erwachsener Benutzer"),  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;category_type=A" },
			{ text: _("Kind"),  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;category_type=C" },
			{ text: _("Professioneller Benutzer"),  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;category_type=P" },
			{ text: _("Organisation"),  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;category_type=I" },
			{ text: _("Personal"),  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;category_type=S" },
			{ text: _("Statistisch"),  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;category_type=X" },
<!--/TMPL_IF-->
		] 
	
	    new YAHOO.widget.Button({
	        type: "menu",
	        label: _("neu"),
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
			<label for="categorycode">New Patron: </label><select name="categorycode" id="categorycode">
			<!--TMPL_IF Name="AddPatronLists_categorycode"-->
				<!--TMPL_LOOP Name="categories"--><option value="<!--TMPL_VAR Name="categorycode"-->"><!--TMPL_VAR Name="description"--></option><!--/TMPL_LOOP-->
			<!-- TMPL_ELSE -->
				<option value="A">erwachsener Benutzer</option>
				<option value="C">Kind</option>
				<option value="P">Professioneller Benutzer</option>
				<option value="I">Organisation</option>
				<option value="S">Personal</option>
				<option value="X">Statistisch</option>
			<!--/TMPL_IF-->
			</select>
			<input type="submit" class="submit" value="Suchen">
		</form>
	</li>
</ul>
</div>
