<div id="menu">
<ul>
<!-- TMPL_IF NAME="Admin" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="الادارة" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Admin">Admin</a></li>
<!-- TMPL_IF NAME="Acquisitions" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="التزويد" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Acquisitions">التزويد</a></li>
<!-- TMPL_IF NAME="EnhancedContent" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Enhanced content settings" href="/cgi-bin/koha/admin/systempreferences.pl?tab=EnhancedContent">Enhanced Content</a></li>
<!-- TMPL_IF NAME="Authorities" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Authority Control" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Authorities">إستناد</a></li>
<!-- TMPL_IF NAME="Cataloguing" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Cataloging" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Cataloguing">الفهرسة</a></li>
<!-- TMPL_IF NAME="Circulation" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="الاعارة" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Circulation">الاعارة</a></li>
<!-- TMPL_IF NAME="I18N/L10N" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Internationalization and Localization" href="/cgi-bin/koha/admin/systempreferences.pl?tab=I18N/L10N">I18N/L10N</a></li>
<!-- TMPL_IF NAME="Logs" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Transaction Logs" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Logs">Logs</a></li>
<!-- TMPL_IF NAME="OAI-PMH" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="OAI-PMH" href="/cgi-bin/koha/admin/systempreferences.pl?tab=OAI-PMH">OAI-PMH</a></li>
<!-- TMPL_IF NAME="OPAC" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Online Public Access Catalog" href="/cgi-bin/koha/admin/systempreferences.pl?tab=OPAC">OPAC</a></li>
<!-- TMPL_IF NAME="Patrons" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="مستخدمين" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Patrons">مستخدمين</a></li>
<!-- TMPL_IF NAME="Searching" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Searching" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Searching">Searching</a></li>
<!-- TMPL_IF NAME="StaffClient" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Staff Client" href="/cgi-bin/koha/admin/systempreferences.pl?tab=StaffClient">Staff Client</a></li>
<!-- TMPL_IF NAME="" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a href="/cgi-bin/koha/admin/systempreferences.pl">Local Use</a></li>
</ul>
</div>
