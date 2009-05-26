<script type="text/javascript">//<![CDATA[
	$(document).ready(function() {
		var path = location.pathname.substring(1);
		$('#navmenulist a[@href$="/' + path + '"]').css('font-weight','bold');
	});
//]]>
</script>
<div id="navmenu"><ul id="navmenulist">
	<li><a href="/cgi-bin/koha/tools/tools-home.pl">工具</a></li>
    <!-- TMPL_IF NAME="CAN_user_tools_edit_news" -->
	<li><a href="/cgi-bin/koha/tools/koha-news.pl">公告</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_label_creator" -->
	<li><a href="/cgi-bin/koha/labels/label-home.pl">書標和條碼標籤</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_edit_calendar" -->
	<li><a href="/cgi-bin/koha/tools/holidays.pl">行事曆</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_edit_notices" -->
	<li><a href="/cgi-bin/koha/tools/letter.pl">通知</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_edit_notice_status_triggers" -->
	<li><a href="/cgi-bin/koha/tools/overduerules.pl">通知/狀況 觸發</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_moderate_comments" -->
	<li><a href="/cgi-bin/koha/reviews/reviewswaiting.pl">管理 OPAC 書評</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_moderate_comments" --><!-- FIXME: Update here when Tag specific permission is created. --><li><a href="/cgi-bin/koha/tags/review.pl">Moderate patron tags</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_view_system_logs" -->
	<li><a href="/cgi-bin/koha/tools/viewlog.pl">瀏覽記錄</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_inventory" -->
	<li><a href="/cgi-bin/koha/tools/inventory.pl">財產清單/館藏清單</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_stage_marc_import" -->
	<li><a href="/cgi-bin/koha/tools/stage-marc-import.pl">機讀格式（MARC）匯入</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_manage_staged_marc" -->
	<li><a href="/cgi-bin/koha/tools/manage-marc-import.pl">機讀格式（MARC）匯入【批次管理】</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_export_catalog" -->
	<li><a href="/cgi-bin/koha/tools/export.pl">匯出書目/館藏記錄</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_import_patrons" -->
	<li><a href="/cgi-bin/koha/tools/import_borrowers.pl">匯入讀者</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_delete_anonymize_patrons" -->
	<li><a href="/cgi-bin/koha/tools/cleanborrowers.pl">Patrons (anonymize, bulk-delete)</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_batch_upload_patron_images" -->
	<li><a href="/cgi-bin/koha/tools/picture-upload.pl">上傳讀者圖片</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools_schedule_tasks" -->
	<li><a href="/cgi-bin/koha/tools/scheduler.pl">定期工作清單</a></li>
    <!-- /TMPL_IF -->
</ul></div>
