<div style="margin-top: 1em;">
<h3>إعدادات النشاط</h3>
<table>
<tr><th>التخطيط:</th><td><!-- TMPL_IF NAME="active_layout_name" --><!-- TMPL_VAR NAME="active_layout_name" --><!-- TMPL_ELSE --><span class="error">لا تخطيط محدد: <a href="/cgi-bin/koha/labels/label-home.pl">Select a Label Layout</a></span><!-- /TMPL_IF --> </td></tr>
<tr><th>القالب: </th><td><!-- TMPL_IF NAME="active_template_name" --><!-- TMPL_VAR NAME="active_template_name" --><!-- TMPL_ELSE --><span class="error">لا توجد قوالب محددة: <a href="/cgi-bin/koha/labels/label-templates.pl">إختار قالب الملصق</a></span><!-- /TMPL_IF --> </td></tr>
<tr><th>دفعة: </th><td><!-- TMPL_IF NAME="batch_id" --><!-- TMPL_VAR NAME="batch_id" --><!-- TMPL_ELSE --><span class="error"><a href="/cgi-bin/koha/labels/label-manager.pl?op=add_batch&amp;type=<!-- TMPL_VAR NAME="batch_type" -->">Create a new batch</a></span><!-- /TMPL_IF --> </td></tr>
</table>
</div>
