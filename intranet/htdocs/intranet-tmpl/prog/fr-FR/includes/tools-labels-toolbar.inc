<div id="toolbar">
	<script type="text/javascript">
	//<![CDATA[

	// prepare DOM for YUI Toolbar

	 $(document).ready(function() {
	    yuiToolbar();
	 });

	// YUI Toolbar Functions

	function yuiToolbar() {
	    new YAHOO.widget.Button("newlabel");
	    new YAHOO.widget.Button("newtemplate");
	    new YAHOO.widget.Button("newprofile");
	    new YAHOO.widget.Button("newlabelbatch");
	    new YAHOO.widget.Button("newpatroncardbatch");
	}

	//]]>
	</script>
	<ul class="toolbar">
	<li><a id="newlabel" href="/cgi-bin/koha/labels/label-edit-layout.pl">Ajouter format</a></li>
	<li><a id="newtemplate" href="/cgi-bin/koha/labels/label-create-template.pl?op=blank">Ajouter modèle d'étiquette</a></li>
	<li><a id="newprofile" href="/cgi-bin/koha/labels/label-create-profile.pl?op=blank">Ajouter Profil d'imprimante</a></li>
	<li><a id="newlabelbatch" href="/cgi-bin/koha/labels/label-manager.pl?op=add_batch&amp;type=labels">Tâches d'impression d'étiquettes</a></li>
	<li><a id="newpatroncardbatch" href="/cgi-bin/koha/labels/label-manager.pl?op=add_batch&amp;type=patroncards">Ajouter un lot de cartes adhérent</a></li>
</ul></div>
