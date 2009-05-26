</title>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<meta name="generator" content="Koha <!-- TMPL_VAR NAME="Version" -->" /> <!-- leave this for stats -->
<link rel="shortcut icon" href="<!-- TMPL_VAR NAME="themelang" -->/includes/favicon.ico" type="image/x-icon" />
<!-- TMPL_IF name="opacstylesheet" --><link rel="stylesheet" type="text/css" href="<!-- TMPL_VAR NAME="opacstylesheet" -->" /><!-- TMPL_ELSE -->
<!-- TMPL_IF name="opaclayoutstylesheet" --><link rel="stylesheet" type="text/css" href="<!-- TMPL_VAR NAME="themelang" -->/css/<!-- TMPL_VAR NAME="opaclayoutstylesheet" -->" /><!-- TMPL_ELSE --><link rel="stylesheet" type="text/css" href="<!-- TMPL_VAR NAME="themelang" -->/css/opac.css" /><!-- /TMPL_IF --><!-- /TMPL_IF -->
<!-- TMPL_IF name="opaccolorstylesheet" --><link rel="stylesheet" type="text/css" href="<!-- TMPL_VAR NAME="themelang" -->/css/<!-- TMPL_VAR NAME="opaccolorstylesheet" -->" /><!-- /TMPL_IF -->
<link rel="stylesheet" type="text/css" media="print" href="<!-- TMPL_VAR NAME="themelang" -->/css/print.css" />
<link rel="stylesheet" type="text/css" href="<!-- TMPL_VAR NAME="themelang" -->/lib/jquery/plugins/ui.tabs.css" />
<!-- TMPL_IF NAME="OPACUserCSS" --><style type="text/css"><!-- TMPL_VAR NAME="OPACUserCSS" --></style><!-- /TMPL_IF -->
<!-- yui js --> 
<script type="text/javascript" src="<!-- TMPL_VAR NAME="yuipath" -->/utilities/utilities.js"></script> 
<script type="text/javascript" src="<!-- TMPL_VAR NAME="yuipath" -->/container/container-min.js"></script> 
<script type="text/javascript" src="<!-- TMPL_VAR NAME="yuipath" -->/menu/menu-min.js"></script> 
<script type="text/javascript" src="<!-- TMPL_VAR name="themelang" -->/lib/jquery/jquery.js"></script>
<script type="text/javascript" src="<!-- TMPL_VAR name="themelang" -->/lib/jquery/plugins/ui.tabs.js"></script>
<script type="text/javascript" src="<!-- TMPL_VAR name="themelang" -->/lib/jquery/plugins/jquery.dimensions-min.js"></script>
<script type="text/javascript" src="<!-- TMPL_VAR name="themelang" -->/lib/jquery/plugins/jquery.hoverIntent.minified.js"></script>
<script type="text/javascript" src="<!-- TMPL_VAR name="themelang" -->/lib/jquery/plugins/jquery.dropshadow-min.js"></script>
<!-- TMPL_IF NAME="AmazonContent" --><script type="text/javascript" language="javascript" src="<!-- TMPL_VAR NAME="themelang" -->/js/amazonimages.js"></script><!-- /TMPL_IF -->
<script type="text/javascript" language="javascript" src="<!-- TMPL_VAR NAME="themelang" -->/js/script.js"></script>
<script type="text/javascript" language="javascript"
<!-- TMPL_IF NAME="opacbookbag" -->src="<!-- TMPL_VAR NAME="themelang" -->/js/basket.js"><!-- TMPL_ELSE -->>var readCookie;<!-- /TMPL_IF --></script>
<!-- TMPL_IF NAME="TagsEnabled" --><script type="text/javascript" language="javascript" src="<!-- TMPL_VAR NAME="themelang" -->/js/tags.js"></script><!-- /TMPL_IF -->
<!-- TMPL_IF NAME="GoogleJackets" -->
<script type="text/javascript" language="javascript" src="<!-- TMPL_VAR NAME="themelang" -->/js/google-jackets.js"></script>
<!-- /TMPL_IF -->
<script type="text/javascript" language="javascript">
	//<![CDATA[
    function _(s) { return s } // dummy function for gettext
    <!-- TMPL_IF NAME="opacbookbag" -->var MSG_BASKET_EMPTY = _("Votre panier est actuellement vide");
    var MSG_RECORD_IN_BASKET = _("Ce document est déjà dans mon panier");
    var MSG_RECORD_ADDED = _("Ce document a été ajouté à mon panier");
    var MSG_NRECORDS_ADDED = _("document(s) ajouté(s) à mon panier");
    var MSG_NRECORDS_IN_BASKET = _("Déjà dans mon panier");
    var MSG_NO_RECORD_SELECTED = _("Aucun document sélectionné");
    var MSG_NO_RECORD_ADDED = _("Aucun document ajouté dans votre panier");
    var MSG_CONFIRM_DEL_BASKET = _("Etes-vous sûr de vouloir vider votre panier ?");
    var MSG_CONFIRM_DEL_RECORDS = _("Etes-vous sûr de vouloir enlever les documents sélectionnés ?");<!-- /TMPL_IF -->
	<!-- TMPL_IF NAME="AmazonContent" -->$(window).load(function() {
		 	verify_images();
		 });<!-- /TMPL_IF -->
	<!-- TMPL_IF NAME="opacuserjs" --><!-- TMPL_VAR NAME="opacuserjs" --><!-- /TMPL_IF -->
	//]]>
</script>
<link rel="unapi-server" type="application/xml" title="unAPI" href="/cgi-bin/koha/unapi" />
