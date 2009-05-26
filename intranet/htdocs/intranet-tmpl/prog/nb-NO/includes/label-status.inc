<div style="margin-top: 1em;">
<h3>Gjeldende oppsett</h3>
<table>
<tr><th>Oppsett:</th><td><!-- TMPL_IF NAME="active_layout_name" --><!-- TMPL_VAR NAME="active_layout_name" --><!-- TMPL_ELSE --><span class="error">Intet oppsett angitt: <a href="/cgi-bin/koha/labels/label-home.pl">Velg et etikettoppsett</a></span><!-- /TMPL_IF --> </td></tr>
<tr><th>Mal: </th><td><!-- TMPL_IF NAME="active_template_name" --><!-- TMPL_VAR NAME="active_template_name" --><!-- TMPL_ELSE --><span class="error">Ingen mal angitt: <a href="/cgi-bin/koha/labels/label-templates.pl">Velg en etikettmal</a></span><!-- /TMPL_IF --> </td></tr>
<tr><th>Batch: </th><td><!-- TMPL_IF NAME="batch_id" --><!-- TMPL_VAR NAME="batch_id" --><!-- TMPL_ELSE --><span class="error"><a href="/cgi-bin/koha/labels/label-manager.pl?op=add_batch&amp;type=<!-- TMPL_VAR NAME="batch_type" -->">Create a new batch</a></span><!-- /TMPL_IF --> </td></tr>
</table>
</div>
