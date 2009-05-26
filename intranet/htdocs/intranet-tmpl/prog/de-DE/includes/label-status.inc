<div style="margin-top: 1em;">
<h3>Aktive Einstellungen</h3>
<table>
<tr><th>Layout:</th><td><!-- TMPL_IF NAME="active_layout_name" --><!-- TMPL_VAR NAME="active_layout_name" --><!-- TMPL_ELSE --><span class="error">Kein Layout gewählt: <a href="/cgi-bin/koha/labels/label-home.pl">Label-Layout auswählen</a></span><!-- /TMPL_IF --> </td></tr>
<tr><th>Tempalte: </th><td><!-- TMPL_IF NAME="active_template_name" --><!-- TMPL_VAR NAME="active_template_name" --><!-- TMPL_ELSE --><span class="error">Kein Template gewählt: <a href="/cgi-bin/koha/labels/label-templates.pl"> Label-template auswählen</a></span><!-- /TMPL_IF --> </td></tr>
<tr><th>Batch: </th><td><!-- TMPL_IF NAME="batch_id" --><!-- TMPL_VAR NAME="batch_id" --><!-- TMPL_ELSE --><span class="error"><a href="/cgi-bin/koha/labels/label-manager.pl?op=add_batch&amp;type=<!-- TMPL_VAR NAME="batch_type" -->">Neuen Stapel erstellen</a></span><!-- /TMPL_IF --> </td></tr>
</table>
</div>
