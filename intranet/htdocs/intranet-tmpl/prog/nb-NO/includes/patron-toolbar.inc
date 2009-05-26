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
			{ text: _("Voksen låner"),  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;category_type=A" },
			{ text: _("Barnelåner"),  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;category_type=C" },
			{ text: _("Yrkesansatt låner"),  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;category_type=P" },
			{ text: _("Organisation"),  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;category_type=I" },
			{ text: _("Staff"),  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;category_type=S" },
			{ text: _("Statistical"),  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;category_type=X" },
<!--/TMPL_IF-->
		] 
	
	    new YAHOO.widget.Button({
	        type: "menu",
	        label: _("Ny"),
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
				<option value="A">Voksen låner</option>
				<option value="C">Barnelåner</option>
				<option value="P">Yrkesansatt låner</option>
				<option value="I">Organisation</option>
				<option value="S">Staff</option>
				<option value="X">Statistical</option>
			<!--/TMPL_IF-->
			</select>
			<input type="submit" class="submit" value="Gå til">
		</form>
	</li>
</ul>
</div>
