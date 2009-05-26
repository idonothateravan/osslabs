<div id="menu">
<ul>
<!-- TMPL_IF NAME="Admin" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Administration" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Admin">Admin</a></li>
<!-- TMPL_IF NAME="Acquisitions" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Acquisitions" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Acquisitions">Acquisitions</a></li>
<!-- TMPL_IF NAME="EnhancedContent" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Paramétrage des contenus enrichis" href="/cgi-bin/koha/admin/systempreferences.pl?tab=EnhancedContent">Contenu enrichi</a></li>
<!-- TMPL_IF NAME="Authorities" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Contrôle des autorités" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Authorities">Autorités</a></li>
<!-- TMPL_IF NAME="Cataloguing" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Catalogage" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Cataloguing">Catalogage</a></li>
<!-- TMPL_IF NAME="Circulation" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Circulation" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Circulation">Circulation</a></li>
<!-- TMPL_IF NAME="I18N/L10N" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Internationalisation et localisation" href="/cgi-bin/koha/admin/systempreferences.pl?tab=I18N/L10N">International</a></li>
<!-- TMPL_IF NAME="Logs" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Logs" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Logs">Logs</a></li>
<!-- TMPL_IF NAME="OAI-PMH" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="OAI-PMH" href="/cgi-bin/koha/admin/systempreferences.pl?tab=OAI-PMH">OAI-PMH</a></li>
<!-- TMPL_IF NAME="OPAC" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Catalogue Public en Ligne (OPAC)" href="/cgi-bin/koha/admin/systempreferences.pl?tab=OPAC">OPAC</a></li>
<!-- TMPL_IF NAME="Patrons" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Adhérents" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Patrons">Adhérents</a></li>
<!-- TMPL_IF NAME="Searching" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Recherche" href="/cgi-bin/koha/admin/systempreferences.pl?tab=Searching">Recherche</a></li>
<!-- TMPL_IF NAME="StaffClient" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a title="Interface bibliothécaire" href="/cgi-bin/koha/admin/systempreferences.pl?tab=StaffClient">Interface bibliothécaire</a></li>
<!-- TMPL_IF NAME="" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a href="/cgi-bin/koha/admin/systempreferences.pl">Usage Local</a></li>
</ul>
</div>
