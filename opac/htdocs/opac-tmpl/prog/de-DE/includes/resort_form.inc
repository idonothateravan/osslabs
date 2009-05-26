<option value="relevance">Relevanz</option>
<optgroup label="Popularity"><!-- TMPL_IF NAME="popularity_dsc" -->
<option value="popularity_dsc" selected="selected">Popularität (viel -> wenig)</option><!-- TMPL_ELSE -->
<option value="popularity_dsc">Popularität (viel -> wenig)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="popularity_asc" -->
<option value="popularity_asc" selected="selected">Popularität (wenig -> viel)</option><!-- TMPL_ELSE -->
<option value="popularity_asc">Popularität (wenig -> viel)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Author"><!-- TMPL_IF NAME="author_az" -->
<option value="author_az" selected="selected">Verfasser (A-Z)</option><!-- TMPL_ELSE -->
<option value="author_az">Verfasser (A-Z)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="author_za" -->
<option value="author_za" selected="selected">Verfasser (Z-A)</option><!-- TMPL_ELSE -->
<option value="author_za">Verfasser (Z-A)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Call Number"><!-- TMPL_IF NAME="call_number_asc" -->
<option value="call_number_asc" selected="selected">Signatur (Nicht-Belletristik 0-9 bis Belletristik A-Z)</option><!-- TMPL_ELSE -->
<option value="call_number_asc">Signatur (Nicht-Belletristik 0-9 bis Belletristik A-Z)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="call_number_dsc" -->
<option value="call_number_dsc" selected="selected">Signatur (Belletristik Z-A bis Nicht-Belletristik 9-0)</option><!-- TMPL_ELSE -->
<option value="call_number_dsc">Signatur (Belletristik Z-A bis Nicht-Belletristik 9-0)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Dates"><!-- TMPL_IF NAME="pubdate_dsc" -->
<option value="pubdate_dsc" selected="selected">Publikations-/Copyrightdatum: (neuestes -> ältestes)</option><!-- TMPL_ELSE -->
<option value="pubdate_dsc">Publikations-/Copyrightdatum: (neuestes -> ältestes)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="pubdate_asc" -->
<option value="pubdate_asc" selected="selected">Publikations-/Copyrightdatum: (ältestes -> neuestes)</option><!-- TMPL_ELSE -->
<option value="pubdate_asc">Publikations-/Copyrightdatum: (ältestes -> neuestes)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_dsc" selected="selected">Erwerbsdatum: Neueste bis älteste</option><!-- TMPL_ELSE -->
<option value="acqdate_dsc">Erwerbsdatum: Neueste bis älteste</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_asc" selected="selected">Erwerbsdatum: Älteste bis neueste</option><!-- TMPL_ELSE -->
<option value="acqdate_asc">Erwerbsdatum: Älteste bis neueste</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Title"><!-- TMPL_IF NAME="title_az" -->
<option value="title_az" selected="selected">Titel (A-Z)</option><!-- TMPL_ELSE -->
<option value="title_az">Titel (A-Z)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="title_za" -->
<option value="title_za" selected="selected">Titel (Z-A)</option><!-- TMPL_ELSE -->
<option value="title_za">Titel (Z-A)</option><!-- /TMPL_IF -->
</optgroup>

