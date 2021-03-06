<div id="toolbar">
	
	<script type="text/javascript">
	//<![CDATA[
	
	function addToShelf() {	window.open('/cgi-bin/koha/virtualshelves/addbybiblionumber.pl?biblionumber=<!-- TMPL_VAR NAME="biblionumber" -->','Add_to_virtualshelf','width=500,height=400,toolbar=false,scrollbars=yes');
	}
	function printBiblio() {window.open('/cgi-bin/koha/catalogue/detailprint.pl?biblionumber=<!-- TMPL_VAR NAME="biblionumber" -->','Print_Biblio','width=700,height=500,toolbar=false,scrollbars=yes');
	}
function confirm_deletion() {
		var count = <!-- TMPL_VAR NAME="count" -->;
        var is_confirmed;
	if (count>0){
		    is_confirmed= alert(_('There are [ '+ count +' ] item(s) attached to this record \n You must delete all items before deleting this record.'));
		    } else{
		    is_confirmed= confirm(_('هل انت متأكد انك تريد حذف هذه التسجيلة؟. '));
	}

     if (is_confirmed) {
        if (count>0){
	// 	window.location="/cgi-bin/koha/catalogue/detail.pl?biblionumber=<!-- TMPL_VAR NAME="biblionumber" -->";
		} else {
			window.location="/cgi-bin/koha/cataloguing/addbiblio.pl?op=delete&amp;biblionumber=<!-- TMPL_VAR NAME="biblionumber" -->";
		}
	} else {
		return false;
	}
}

	// prepare DOM for YUI Toolbar

	 $(document).ready(function() {
	    $("#edititems").parent().remove();
	    $("#duplicatebiblio").parent().remove();
		$("#deletebiblio").parent().remove();
		$("#newitem").parent().remove();
	    $("#editmenuc").empty();
		$("#newmenuc").empty();
		$("#addtoshelfc").empty();
		$("#printbiblioc").empty();
		$("#export").remove();
		$("#addtoshelfc").before("<li id=\"savemenuc\"></li>");
	    yuiToolbar();
	 });

	// YUI Toolbar Functions

	function yuiToolbar() {
		var newmenu = [
			{text: _("تسجيلة جديدة"), url: "/cgi-bin/koha/cataloguing/addbiblio.pl" },
			{text: _("New Item"), url: "/cgi-bin/koha/cataloguing/additem.pl?biblionumber=<!-- TMPL_VAR NAME="biblionumber" -->#additema" }
		];
	
	    var editmenu = [
	        { text: _("تعديل تسجيلة"), url: "/cgi-bin/koha/cataloguing/addbiblio.pl?biblionumber=<!-- TMPL_VAR NAME="biblionumber" -->&amp;frameworkcode=&amp;op=" },
	        { text: _("تعديل مواد"), url: "/cgi-bin/koha/cataloguing/additem.pl?biblionumber=<!-- TMPL_VAR NAME="biblionumber" -->" },
	        { text: _("Edit as New (Duplicate)"), url: "/cgi-bin/koha/cataloguing/addbiblio.pl?biblionumber=<!-- TMPL_VAR NAME="biblionumber" -->&amp;frameworkcode=&amp;op=duplicate" },
			{ text: _("Delete Record"), onclick: {fn: confirm_deletion }<!-- TMPL_IF NAME="count" -->,id:'disabled'<!-- /TMPL_IF --> }
	    ];
		
		var savemenu = [
		{ text: _("MODS (XML)"), url: "/cgi-bin/koha/catalogue/export.pl?format=mods&op=export&bib=<!-- TMPL_VAR NAME="biblionumber" -->" },
		{ text: _("دبلن كور (XML)"), url: "/cgi-bin/koha/catalogue/export.pl?format=dc&op=export&bib=<!-- TMPL_VAR NAME="biblionumber" -->" },
		{ text: _("MARCXML"), url: "/cgi-bin/koha/catalogue/export.pl?format=marcxml&op=export&bib=<!-- TMPL_VAR NAME="biblionumber" -->" },
		{ text: _("مارك (non-Unicode/MARC-8)"), url: "/cgi-bin/koha/catalogue/export.pl?format=marc8&op=export&bib=<!-- TMPL_VAR NAME="biblionumber" -->" },
		{ text: _("مارك (يونيكود/UTF-8)"), url: "/cgi-bin/koha/catalogue/export.pl?format=utf8&op=export&bib=<!-- TMPL_VAR NAME="biblionumber" -->" },
		];

	    new YAHOO.widget.Button({
	        type: "menu",
	        label: _("إحفظ"),
	        name: "savemenubutton",
	        menu: savemenu,
	        container: "savemenuc"
	    });
	    
		new YAHOO.widget.Button({
	        type: "menu",
	        label: _("تعديل"),
	        name: "editmenubutton",
	        menu: editmenu,
	        container: "editmenuc",
	    });
	    
		new YAHOO.widget.Button({
	        type: "menu",
	        label: _("جديد"),
	        name: "newmenubutton",
	        menu: newmenu,
	        container: "newmenuc",
	    });
		
		var addtoshelfButton = new YAHOO.widget.Button({
                                            id: "addtoshelf", 
                                            type: "button", 
                                            label: _("Add to List"), 
                                            container: "addtoshelfc",
											onclick: {fn: addToShelf }
                                        });
										
		var printbiblioButton = new YAHOO.widget.Button({
                                            id: "printbiblio", 
                                            type: "button", 
                                            label: _("إطبع"), 
                                            container: "printbiblioc",
											onclick: {fn: printBiblio }
                                        });

	    var newbiblioButton = new YAHOO.widget.Button("newbiblio");
	    var placeholdButton = new YAHOO.widget.Button("placehold");
		
	}

	//]]>
	</script>
	
<ul class="toolbar">
	<!-- TMPL_IF NAME="CAN_user_editcatalogue" -->
	<li id="newmenuc"><a id="newbiblio" href="/cgi-bin/koha/cataloguing/addbiblio.pl">تسجيلة جديدة</a></li>
	<li><a id="newitem" href="/cgi-bin/koha/cataloguing/additem.pl?biblionumber=<!-- TMPL_VAR NAME="biblionumber" -->">New Item</a></li>
	<li id="editmenuc"><a id="editbiblio" href="/cgi-bin/koha/cataloguing/addbiblio.pl?biblionumber=<!-- TMPL_VAR NAME="biblionumber" -->&amp;frameworkcode=<!--TMPL_VAR Name="current_framework" -->&amp;op=">تعديل تسجيلة</a></li>
	<li><a id="edititems" href="/cgi-bin/koha/cataloguing/additem.pl?biblionumber=<!-- TMPL_VAR NAME="biblionumber" -->">تعديل مواد</a></li>
	<li><a id="duplicatebiblio" href="/cgi-bin/koha/cataloguing/addbiblio.pl?biblionumber=<!-- TMPL_VAR NAME="biblionumber" -->&amp;frameworkcode=<!--TMPL_VAR Name="current_framework" -->&amp;op=duplicate">تسجيلة مكررة</a></li>
	<li><a id="deletebiblio" href="/cgi-bin/koha/cataloguing/addbiblio.pl?op=delete&amp;biblionumber=<!-- TMPL_VAR NAME="biblionumber" -->">حذف</a></li>
	<!-- /TMPL_IF -->	
	<li id="addtoshelfc"><a id="addtoshelf" href="/cgi-bin/koha/virtualshelves/addbybiblionumber.pl?biblionumber=<!-- TMPL_VAR NAME="biblionumber" -->">أضف للرف</a></li>
	<li id="printbiblioc"><a id="printbiblio" href="/cgi-bin/koha/catalogue/detailprint.pl?biblionumber=<!-- TMPL_VAR NAME="biblionumber" -->">إطبع</a></li>
	<!-- TMPL_IF NAME="CAN_user_reserveforothers" -->
        <!-- TMPL_UNLESS name="bi_notforloan" -->
	<!-- TMPL_UNLESS NAME="norequests" --><li><a id="placehold" href="/cgi-bin/koha/reserve/request.pl?biblionumber=<!-- TMPL_VAR NAME="biblionumber" -->">إحجز</a></li><!-- /TMPL_UNLESS --><!-- /TMPL_UNLESS -->
	<!-- /TMPL_IF -->
</ul></div>
