<div style="margin-top: 1em;">
<h3>使用设定</h3>
<table>
<tr><th>配置：</th><td><!-- TMPL_IF NAME="active_layout_name" --><!-- TMPL_VAR NAME="active_layout_name" --><!-- TMPL_ELSE --><span class="error">没有设定配置：<a href="/cgi-bin/koha/labels/label-home.pl">选择一个卷标配置</a></span><!-- /TMPL_IF --> </td></tr>
<tr><th>模版： </th><td><!-- TMPL_IF NAME="active_template_name" --><!-- TMPL_VAR NAME="active_template_name" --><!-- TMPL_ELSE --><span class="error">没有设定样版：<a href="/cgi-bin/koha/labels/label-templates.pl">选择标签样版</a></span><!-- /TMPL_IF --> </td></tr>
<tr><th>批次： </th><td><!-- TMPL_IF NAME="batch_id" --><!-- TMPL_VAR NAME="batch_id" --><!-- TMPL_ELSE --><span class="error"><a href="/cgi-bin/koha/labels/label-manager.pl?op=add_batch&amp;type=<!-- TMPL_VAR NAME="batch_type" -->">Create a new batch</a></span><!-- /TMPL_IF --> </td></tr>
</table>
</div>
