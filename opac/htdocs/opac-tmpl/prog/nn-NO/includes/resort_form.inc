<option value="relevance">Relevans</option>
<optgroup label="Popularity"><!-- TMPL_IF NAME="popularity_dsc" -->
<option value="popularity_dsc" selected="selected">Popularitet (høgast til lågast)</option><!-- TMPL_ELSE -->
<option value="popularity_dsc">Popularitet (høgast til lågast)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="popularity_asc" -->
<option value="popularity_asc" selected="selected">Popularitet (lågast til høgast)</option><!-- TMPL_ELSE -->
<option value="popularity_asc">Popularitet (lågast til høgast)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Author"><!-- TMPL_IF NAME="author_az" -->
<option value="author_az" selected="selected">Forfattar (A-Å)</option><!-- TMPL_ELSE -->
<option value="author_az">Forfattar (A-Å)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="author_za" -->
<option value="author_za" selected="selected">Forfattar (Å-A)</option><!-- TMPL_ELSE -->
<option value="author_za">Forfattar (Å-A)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Call Number"><!-- TMPL_IF NAME="call_number_asc" -->
<option value="call_number_asc" selected="selected">Hylleplass  (faglitteratur 0&ndash;9, skjønnlitteratur A&ndash;Å)</option><!-- TMPL_ELSE -->
<option value="call_number_asc">Hylleplass  (faglitteratur 0&ndash;9, skjønnlitteratur A&ndash;Å)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="call_number_dsc" -->
<option value="call_number_dsc" selected="selected">Hylleplass (skjønnlitteratur Å&ndash;A, faglitteratur 9&ndash;0)</option><!-- TMPL_ELSE -->
<option value="call_number_dsc">Hylleplass (skjønnlitteratur Å&ndash;A, faglitteratur 9&ndash;0)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Dates"><!-- TMPL_IF NAME="pubdate_dsc" -->
<option value="pubdate_dsc" selected="selected">Publiserings-/opphavsrettsdato: Nyaste til eldste</option><!-- TMPL_ELSE -->
<option value="pubdate_dsc">Publiserings-/opphavsrettsdato: Nyaste til eldste</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="pubdate_asc" -->
<option value="pubdate_asc" selected="selected">Publiserings-/opphavsrettsdato: Eldste til nyaste</option><!-- TMPL_ELSE -->
<option value="pubdate_asc">Publiserings-/opphavsrettsdato: Eldste til nyaste</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_dsc" selected="selected">Innkjøpsdato: Nyaste til eldste</option><!-- TMPL_ELSE -->
<option value="acqdate_dsc">Innkjøpsdato: Nyaste til eldste</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_asc" selected="selected">Innkjøpsdato: Eldste til nyaste</option><!-- TMPL_ELSE -->
<option value="acqdate_asc">Innkjøpsdato: Eldste til nyaste</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Title"><!-- TMPL_IF NAME="title_az" -->
<option value="title_az" selected="selected">Tittel (A-Å)</option><!-- TMPL_ELSE -->
<option value="title_az">Tittel (A-Å)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="title_za" -->
<option value="title_za" selected="selected">Tittel (Å-A)</option><!-- TMPL_ELSE -->
<option value="title_za">Tittel (Å-A)</option><!-- /TMPL_IF -->
</optgroup>

