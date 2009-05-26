<div style="margin-top: 1em;">
<h3>Réglages actuels</h3>
<table>
<tr><th>Format :</th><td><!-- TMPL_IF NAME="active_layout_name" --><!-- TMPL_VAR NAME="active_layout_name" --><!-- TMPL_ELSE --><span class="error">Pas de modèle défini : <a href="/cgi-bin/koha/labels/label-home.pl">Sélectionner un modèle</a></span><!-- /TMPL_IF --> </td></tr>
<tr><th>Modèles : </th><td><!-- TMPL_IF NAME="active_template_name" --><!-- TMPL_VAR NAME="active_template_name" --><!-- TMPL_ELSE --><span class="error">Pas de modèle défini <a href="/cgi-bin/koha/labels/label-templates.pl">Sélectionner un modèle d'étiquette</a></span><!-- /TMPL_IF --> </td></tr>
<tr><th>Tâche : </th><td><!-- TMPL_IF NAME="batch_id" --><!-- TMPL_VAR NAME="batch_id" --><!-- TMPL_ELSE --><span class="error"><a href="/cgi-bin/koha/labels/label-manager.pl?op=add_batch&amp;type=<!-- TMPL_VAR NAME="batch_type" -->">Créer un nouveau traitement par lot</a></span><!-- /TMPL_IF --> </td></tr>
</table>
</div>
