<div id="menu">
<ul>
<!-- TMPL_IF NAME="Admin" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Administration" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Admin">Admin</a></li>
<!-- TMPL_IF NAME="Acquisitions" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Erwerbungen" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Acquisitions">Erwerbungen</a></li>
<!-- TMPL_IF NAME="EnhancedContent" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Enhanced content settings" href="/cgi-bin/koha/admin/systempreferences.pl?tab=EnhancedContent">Enhanced Content</a></li>
<!-- TMPL_IF NAME="Authorities" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Kontrolle der Normdaten" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Authorities">Normdaten</a></li>
<!-- TMPL_IF NAME="Cataloguing" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Katalogisierung" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Cataloguing">Katalogisierung</a></li>
<!-- TMPL_IF NAME="Circulation" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Ausleihe" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Circulation">Ausleihe</a></li>
<!-- TMPL_IF NAME="I18N/L10N" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Internazionalisierung und lokale Anpassung" href="/cgi-bin/koha/admin/systempreferences.pl?tab=I18N/L10N">I18N/L10N</a></li>
<!-- TMPL_IF NAME="Logs" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Transaktionslogs" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Logs">Logs</a></li>
<!-- TMPL_IF NAME="OAI-PMH" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="OAI-PMH" href="/cgi-bin/koha/admin/systempreferences.pl?tab=OAI-PMH">OAI-PMH</a></li>
<!-- TMPL_IF NAME="OPAC" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Online Public Access Catalog" href="/cgi-bin/koha/admin/systempreferences.pl?tab=OPAC">OPAC</a></li>
<!-- TMPL_IF NAME="Patrons" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Benutzer" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Patrons">Benutzer</a></li>
<!-- TMPL_IF NAME="Searching" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Suche" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Searching">Suche</a></li>
<!-- TMPL_IF NAME="StaffClient" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Personal-Client" href="/cgi-bin/koha/admin/systempreferences.pl?tab=StaffClient">Personal-Client</a></li>
<!-- TMPL_IF NAME="" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a href="/cgi-bin/koha/admin/systempreferences.pl">Lokale Nutzung</a></li>
</ul>
</div>
