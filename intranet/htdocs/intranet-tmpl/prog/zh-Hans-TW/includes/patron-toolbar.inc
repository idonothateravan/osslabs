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
			{ text: _("成人讀者"),  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;category_type=A" },
			{ text: _("兒童讀者"),  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;category_type=C" },
			{ text: _("專家讀者"),  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;category_type=P" },
			{ text: _("機構"),  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;category_type=I" },
			{ text: _("館員"),  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;category_type=S" },
			{ text: _("Statistical"),  url: "/cgi-bin/koha/members/memberentry.pl?op=add&amp;category_type=X" },
<!--/TMPL_IF-->
		] 
	
	    new YAHOO.widget.Button({
	        type: "menu",
	        label: _("新增"),
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
				<option value="A">成人讀者</option>
				<option value="C">兒童讀者</option>
				<option value="P">專家讀者</option>
				<option value="I">機構</option>
				<option value="S">館員</option>
				<option value="X">Statistical</option>
			<!--/TMPL_IF-->
			</select>
			<input type="submit" class="submit" value="前往">
		</form>
	</li>
</ul>
</div>
