<option value="relevance">Relevans</option>
<optgroup label="Popularity"><!-- TMPL_IF NAME="popularity_dsc" -->
<option value="popularity_dsc" selected="selected">Popularitet (højeste til laveste)</option><!-- TMPL_ELSE -->
<option value="popularity_dsc">Popularitet (højeste til laveste)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="popularity_asc" -->
<option value="popularity_asc" selected="selected">Popularitet (lavest til højeste)</option><!-- TMPL_ELSE -->
<option value="popularity_asc">Popularitet (lavest til højeste)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Author"><!-- TMPL_IF NAME="author_az" -->
<option value="author_az" selected="selected">Forfatter (A-Å)</option><!-- TMPL_ELSE -->
<option value="author_az">Forfatter (A-Å)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="author_za" -->
<option value="author_za" selected="selected">Forfatter (Å-A)</option><!-- TMPL_ELSE -->
<option value="author_za">Forfatter (Å-A)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Call Number"><!-- TMPL_IF NAME="call_number_asc" -->
<option value="call_number_asc" selected="selected">Hyldeplads  (prosa 0&ndash;9, skønlitteratur A&ndash;Å)</option><!-- TMPL_ELSE -->
<option value="call_number_asc">Hyldeplads  (prosa 0&ndash;9, skønlitteratur A&ndash;Å)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="call_number_dsc" -->
<option value="call_number_dsc" selected="selected">Hyldeplads (skønlitteratur Å&ndash;A, prosa 9&ndash;0)</option><!-- TMPL_ELSE -->
<option value="call_number_dsc">Hyldeplads (skønlitteratur Å&ndash;A, prosa 9&ndash;0)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Dates"><!-- TMPL_IF NAME="pubdate_dsc" -->
<option value="pubdate_dsc" selected="selected">Udgivelse/Ophavsretsdato: Nyeste til ældste</option><!-- TMPL_ELSE -->
<option value="pubdate_dsc">Udgivelse/Ophavsretsdato: Nyeste til ældste</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="pubdate_asc" -->
<option value="pubdate_asc" selected="selected">Udgivelse/Ophavsretsdato: Ældste til nyeste</option><!-- TMPL_ELSE -->
<option value="pubdate_asc">Udgivelse/Ophavsretsdato: Ældste til nyeste</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_dsc" selected="selected">Indkøbsdato: Nyeste til ældste</option><!-- TMPL_ELSE -->
<option value="acqdate_dsc">Indkøbsdato: Nyeste til ældste</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_asc" selected="selected">Indkøbsdato: Ældste til nyeste</option><!-- TMPL_ELSE -->
<option value="acqdate_asc">Indkøbsdato: Ældste til nyeste</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Title"><!-- TMPL_IF NAME="title_az" -->
<option value="title_az" selected="selected">Titel (A-Å)</option><!-- TMPL_ELSE -->
<option value="title_az">Titel (A-Å)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="title_za" -->
<option value="title_za" selected="selected">Titel (Å-A)</option><!-- TMPL_ELSE -->
<option value="title_za">Titel (Å-A)</option><!-- /TMPL_IF -->
</optgroup>

