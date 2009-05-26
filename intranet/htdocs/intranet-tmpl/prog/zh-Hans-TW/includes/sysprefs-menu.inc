<div id="menu">
<ul>
<!-- TMPL_IF NAME="Admin" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="管理" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Admin">管理</a></li>
<!-- TMPL_IF NAME="Acquisitions" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="採訪" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Acquisitions">採訪</a></li>
<!-- TMPL_IF NAME="EnhancedContent" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Enhanced content settings" href="/cgi-bin/koha/admin/systempreferences.pl?tab=EnhancedContent">Enhanced Content</a></li>
<!-- TMPL_IF NAME="Authorities" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="權威記錄控制" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Authorities">權威記錄</a></li>
<!-- TMPL_IF NAME="Cataloguing" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="編目" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Cataloguing">編目</a></li>
<!-- TMPL_IF NAME="Circulation" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="流通" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Circulation">流通</a></li>
<!-- TMPL_IF NAME="I18N/L10N" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="國際化和區域化" href="/cgi-bin/koha/admin/systempreferences.pl?tab=I18N/L10N">I18N/L10N</a></li>
<!-- TMPL_IF NAME="Logs" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="執行記錄" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Logs">記錄</a></li>
<!-- TMPL_IF NAME="OAI-PMH" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="OAI-PMH" href="/cgi-bin/koha/admin/systempreferences.pl?tab=OAI-PMH">OAI-PMH</a></li>
<!-- TMPL_IF NAME="OPAC" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="線上館藏目錄" href="/cgi-bin/koha/admin/systempreferences.pl?tab=OPAC">OPAC</a></li>
<!-- TMPL_IF NAME="Patrons" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="讀者" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Patrons">讀者</a></li>
<!-- TMPL_IF NAME="Searching" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="查詢" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Searching">查詢</a></li>
<!-- TMPL_IF NAME="StaffClient" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="館員程式" href="/cgi-bin/koha/admin/systempreferences.pl?tab=StaffClient">館員程式</a></li>
<!-- TMPL_IF NAME="" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a href="/cgi-bin/koha/admin/systempreferences.pl">Local Use</a></li>
</ul>
</div>
