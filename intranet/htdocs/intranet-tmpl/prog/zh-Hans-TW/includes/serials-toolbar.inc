<div id="toolbar"><script type="text/javascript">
	//<![CDATA[

	// prepare DOM for YUI Toolbar

	 $(document).ready(function() {
	    $("#editmenuc").empty();
	    $("#duplicate").parent().remove();
		$("#delete").parent().remove();
	 	$("#renewc").empty();
	    yuiToolbar();
	 });

	// YUI Toolbar Functions

	function yuiToolbar() {
	
    <!-- TMPL_IF NAME="subscriptionid" -->
	    var editmenu = [
	        { text: _("Edit Subscription"),  <!-- TMPL_IF NAME="cannotedit" -->disabled: true, <!-- /TMPL_IF --> url: "/cgi-bin/koha/serials/subscription-add.pl?op=mod&amp;subscriptionid=<!-- TMPL_VAR name="subscriptionid" -->" },
	        { text: _("Edit as New (Duplicate)"), <!-- TMPL_IF NAME="cannotedit" -->disabled: true, <!-- /TMPL_IF --> url: "/cgi-bin/koha/serials/subscription-add.pl?op=dup&amp;subscriptionid=<!-- TMPL_VAR name="subscriptionid" -->" },
			{ text: _("刪除訂閱"), <!-- TMPL_IF NAME="cannotedit" -->disabled: true, <!-- /TMPL_IF --> onclick: {fn: confirm_deletion }}
	    ];
	 <!-- /TMPL_IF -->
	    new YAHOO.widget.Button("newsubscription");
	    <!-- TMPL_IF NAME="subscriptionid" -->		
		new YAHOO.widget.Button({
              id: "renew", 
              type: "link", 
			  href: "#",
              label: _("續訂"), 
              container: "renewc",
onclick: {fn:function(){popup(<!--TMPL_VAR Name="subscriptionid"-->)}}
          });
	<!-- TMPL_IF NAME="subscriptionid" -->	  
	new YAHOO.widget.Button({
	        type: "menu",
	        label: _("編輯"),
	        name: "editmenubutton",
	        menu: editmenu,
	        container: "editmenuc",
			
	    });
		<!-- /TMPL_IF -->
	    new YAHOO.widget.Button("renew");
	    new YAHOO.widget.Button("receive");
		<!-- /TMPL_IF -->
	}

	//]]>
	</script>
<ul class="toolbar">
    <!-- TMPL_IF NAME="biblionumber_for_new_subscription" -->
	    <li><a id="newsubscription" href="/cgi-bin/koha/serials/subscription-add.pl?biblionumber_for_new_subscription=<!-- TMPL_VAR NAME="biblionumber_for_new_subscription" -->">新增訂閱</a></li>
    <!-- TMPL_ELSE -->
	    <li><a id="newsubscription" href="/cgi-bin/koha/serials/subscription-add.pl">新增訂閱</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="subscriptionid" -->
        <!-- TMPL_UNLESS name="cannotedit" -->
            <li id="editmenuc"><a id="edit" href="/cgi-bin/koha/serials/subscription-add.pl?op=mod&amp;subscriptionid=<!-- TMPL_VAR name="subscriptionid" -->">編輯</a></li>
        <!-- /TMPL_UNLESS -->
        <li><a id="duplicate" href="/cgi-bin/koha/serials/subscription-add.pl?op=dup&amp;subscriptionid=<!-- TMPL_VAR name="subscriptionid" -->">複本 </a></li>
        <!-- TMPL_UNLESS name="cannotedit" -->
            <li id="renewc"><a id="renew" href="#" onclick="popup(<!--TMPL_VAR Name="subscriptionid"-->)">續訂 </a></li>
            <li><a id="receive" href="/cgi-bin/koha/serials/serials-edit.pl?subscriptionid=<!-- TMPL_VAR name="subscriptionid" -->&amp;serstatus=1,3">收到</a></li>
            <li><a id="delete" href="javascript:confirm_deletion()">刪除</a></li>
        <!-- /TMPL_UNLESS -->
    <!-- /TMPL_IF -->
</ul>
</div>
