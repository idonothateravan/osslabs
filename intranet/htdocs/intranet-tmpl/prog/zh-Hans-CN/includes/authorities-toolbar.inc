<div id="toolbar">
<script type="text/javascript">
	//<![CDATA[

	// prepare DOM for YUI Toolbar

	 $(document).ready(function() {
	    $("#newmenuc").empty();
	    $("#delAuthc").empty();
	    yuiToolbar();
	 });

	// YUI Toolbar Functions

	function yuiToolbar() {   
	
		var newmenu = [
			<!-- TMPL_LOOP name="authtypesloop" -->{ text: "<!-- TMPL_VAR name="authtypetext" -->", url: "/cgi-bin/koha/authorities/authorities.pl?authtypecode=<!-- TMPL_VAR name="value" -->"},
<!-- /TMPL_LOOP -->
		]

	    new YAHOO.widget.Button({
	        type: "menu",
	        label: _("新增权威记录"),
	        name: "newmenubutton",
	        menu: newmenu,
	        container: "newmenuc"
	    });  
		
		var editButton = new YAHOO.widget.Button("editAuth");
		
		var delAuthButton = new YAHOO.widget.Button({
          id: "delAuth", 
          type: "button", 
          label: _("删除"), 
          container: "delAuthc",
		  onclick: {fn: confirm_deletion }
      });
	}

	//]]>
	</script>
  <form name="f2" method="post" action="authorities.pl">	
  
<!-- TMPL_IF NAME="authid" -->  <a id="editAuth" href="authorities.pl?authid=<!-- TMPL_VAR NAME="authid" -->">编辑</a>
    
    <!-- TMPL_UNLESS name="count" -->
    <span id="delAuthc"><a id="delAuth" href="javascript:confirm_deletion()">删除</a></span>
    <!-- /TMPL_UNLESS --><!-- TMPL_ELSE -->&nbsp;<!-- /TMPL_IF -->
  
  <span id="newmenuc">
	<label for="add_authtypecode">新增： </label>
        <select id="add_authtypecode" name="authtypecode">
<!-- TMPL_LOOP name="authtypesloop" -->
  <!-- TMPL_IF name="selected" -->
        <option value="<!-- TMPL_VAR name="value" -->" selected="selected"><!-- TMPL_VAR name="authtypetext" --></option>
  <!-- TMPL_ELSE -->
        <option value="<!-- TMPL_VAR name="value" -->"><!-- TMPL_VAR name="authtypetext" --></option>
  <!-- /TMPL_IF -->
<!-- /TMPL_LOOP -->
        </select>
      <input type="submit" value="新增" class="button">
  </span></form>
</div>
