<!-- TMPL_IF NAME="batch_is_labels" -->
<div id="toolbar">
	<script type="text/javascript">
	//<![CDATA[

        function Plugin(batch_id, batch_type) {
	        window.open("label-item-search.pl?batch_id="+batch_id+"&amp;type="+batch_type+"",'FindABibIndex','width=640,height=400,toolbar=no,scrollbars=yes');
return false;
        }

	// prepare DOM for YUI Toolbar

	 $(document).ready(function() {
	 	$("#additemsc").empty();
	    yuiToolbar();
	 });

	// YUI Toolbar Functions

	function yuiToolbar() {
		new YAHOO.widget.Button({
              id: "additems", 
              type: "link", 
			  href: "#",
              label: _("Exemplar(e) dem Stapel hinzufügen"), 
              container: "additemsc",
onclick: {fn:function(){Plugin(<!-- TMPL_VAR NAME="batch_id" -->,"<!-- TMPL_VAR NAME="batch_type" -->")}}
          });
		new YAHOO.widget.Button("deletebatch");
		new YAHOO.widget.Button("dedup");
		new YAHOO.widget.Button("generate");
	}

	//]]>
	</script>
	<ul class="toolbar">
	<li id="additemsc"><a id="additems" href="#">Exemplar(e) dem Stapel hinzufügen</a></li>
	<li><a id="deletebatch" href="/cgi-bin/koha/labels/label-manager.pl?op=delete_batch&amp;batch_id=<!-- TMPL_VAR NAME="batch_id" -->&amp;type=<!-- TMPL_VAR NAME="batch_type" -->">Aktuellen Stapel löschen</a></li>
				<!-- FIXME: should use POST to change server state, not GET -->
	<li><a id="dedup" href="/cgi-bin/koha/labels/label-manager.pl?op=deduplicate&amp;batch_id=<!-- TMPL_VAR NAME="batch_id" -->&amp;type=<!-- TMPL_VAR NAME="batch_type" -->">Dubletten entfernen</a></li>
	<li><a id="generate" href="/cgi-bin/koha/labels/label-print-pdf.pl?batch_id=<!-- TMPL_VAR NAME="batch_id" -->&amp;type=<!-- TMPL_VAR NAME="batch_type" -->">Generate labels for Batch</a></li>
</ul></div>
<!-- TMPL_ELSIF NAME="batch_is_patroncards" -->
<div id="toolbar">
	<script type="text/javascript">
	//<![CDATA[

        function Plugin(batch_id, batch_type) {
//	        window.open("label-item-search.pl?batch_id="+batch_id+"",'FindABibIndex','width=640,height=400,toolbar=no,scrollbars=yes');
	        window.open("pcard-member-search.pl?batch_id="+batch_id+"&amp;type="+batch_type+"",'FindAPatronIndex','width=640,height=400,toolbar=no,scrollbars=yes');
        }

	// prepare DOM for YUI Toolbar

	 $(document).ready(function() {
	 	$("#addpatronsc").empty();
	    yuiToolbar();
	 });

	// YUI Toolbar Functions

	function yuiToolbar() {
		new YAHOO.widget.Button({
            id: "addpatrons", 
            type: "link", 
            href: "#",
            label: _("Benutzer dem Stapel hinzufügen"), 
            container: "addpatronsc",
onclick: {fn:function(){Plugin(<!-- TMPL_VAR NAME="batch_id" -->,"<!-- TMPL_VAR NAME="batch_type" -->"); }}
        });
		new YAHOO.widget.Button("deletebatch");
		new YAHOO.widget.Button("dedup");
		new YAHOO.widget.Button("generate");
	}

	//]]>
	</script>
	<ul class="toolbar">
	<li id="addpatronsc"><a id="addpatrons" href="#">Benutzer dem Stapel hinzufügen</a></li>
	<li><a id="deletebatch" href="/cgi-bin/koha/labels/label-manager.pl?op=delete_batch&amp;batch_id=<!-- TMPL_VAR NAME="batch_id" -->&amp;type=<!-- TMPL_VAR NAME="batch_type" -->">Aktuellen Stapel löschen</a></li>
				<!-- FIXME: should use POST to change server state, not GET -->
	<li><a id="dedup" href="/cgi-bin/koha/labels/label-manager.pl?op=deduplicate&amp;batch_id=<!-- TMPL_VAR NAME="batch_id" -->&amp;type=<!-- TMPL_VAR NAME="batch_type" -->">Dubletten entfernen</a></li>
	<li><a id="generate" href="/cgi-bin/koha/labels/label-print-pdf.pl?batch_id=<!-- TMPL_VAR NAME="batch_id" -->&amp;type=<!-- TMPL_VAR NAME="batch_type" -->">Generate labels for Batch</a></li>
</ul></div>
<!-- /TMPL_IF -->
