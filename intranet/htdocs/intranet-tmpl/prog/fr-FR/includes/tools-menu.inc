<script type="text/javascript">//<![CDATA[
	$(document).ready(function() {
		var path = location.pathname.substring(1);
		$('#navmenulist a[@href$="/' + path + '"]').css('font-weight','bold');
	});
//]]>
</script>
<div id="navmenu"><ul id="navmenulist">
	<li><a href="/cgi-bin/koha/tools/tools-home.pl">Accueil outils</a></li>
    <!-- TMPL_IF NAME="CAN_user_tools_edit_news" -->
	<li><a href="/cgi-bin/koha/tools/koha-news.pl">Nouvelles</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_label_creator" -->
	<li><a href="/cgi-bin/koha/labels/label-home.pl">Etiquettes (cote et code-barres)</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_edit_calendar" -->
	<li><a href="/cgi-bin/koha/tools/holidays.pl">Calendrier</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_edit_notices" -->
	<li><a href="/cgi-bin/koha/tools/letter.pl">Messages</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_edit_notice_status_triggers" -->
	<li><a href="/cgi-bin/koha/tools/overduerules.pl">Déclencheur de notification</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_moderate_comments" -->
	<li><a href="/cgi-bin/koha/reviews/reviewswaiting.pl">Modérer les commentaires OPAC</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_moderate_comments" --><!-- FIXME: Update here when Tag specific permission is created. --><li><a href="/cgi-bin/koha/tags/review.pl">Modérer les tags des lecteurs</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_view_system_logs" -->
	<li><a href="/cgi-bin/koha/tools/viewlog.pl">Visualiseur des logs</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_inventory" -->
	<li><a href="/cgi-bin/koha/tools/inventory.pl">Inventaire/récolement</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_stage_marc_import" -->
	<li><a href="/cgi-bin/koha/tools/stage-marc-import.pl">Importation MARC (Préparation)</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_manage_staged_marc" -->
	<li><a href="/cgi-bin/koha/tools/manage-marc-import.pl">Importation MARC (gestion des tâches)</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_export_catalog" -->
	<li><a href="/cgi-bin/koha/tools/export.pl">Export notices/exemplaires</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_import_patrons" -->
	<li><a href="/cgi-bin/koha/tools/import_borrowers.pl">Importation des données adhérents</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_delete_anonymize_patrons" -->
	<li><a href="/cgi-bin/koha/tools/cleanborrowers.pl">Adhérent (anonymiser et supprimer)</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_batch_upload_patron_images" -->
	<li><a href="/cgi-bin/koha/tools/picture-upload.pl">Chargement de photos d'adhérents</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_schedule_tasks" -->
	<li><a href="/cgi-bin/koha/tools/scheduler.pl">Planificateur de tâches</a></li>
    <!-- /TMPL_IF -->
</ul></div>
