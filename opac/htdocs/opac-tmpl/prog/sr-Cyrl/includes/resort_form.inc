<option value="relevance">Relevantnost</option>
<optgroup label="Popularity"><!-- TMPL_IF NAME="popularity_dsc" -->
<option value="popularity_dsc" selected="selected">Popularnost (vise ka manje)</option><!-- TMPL_ELSE -->
<option value="popularity_dsc">Popularnost (vise ka manje)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="popularity_asc" -->
<option value="popularity_asc" selected="selected">Popularnost (manje ka vise)</option><!-- TMPL_ELSE -->
<option value="popularity_asc">Popularnost (manje ka vise)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Author"><!-- TMPL_IF NAME="author_az" -->
<option value="author_az" selected="selected">Autor (A-Z)</option><!-- TMPL_ELSE -->
<option value="author_az">Autor (A-Z)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="author_za" -->
<option value="author_za" selected="selected">Autor (Z-A)</option><!-- TMPL_ELSE -->
<option value="author_za">Autor (Z-A)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Call Number"><!-- TMPL_IF NAME="call_number_asc" -->
<option value="call_number_asc" selected="selected">Signatura (Dokumentarno 9-0 do Knjizevnost Z-A)</option><!-- TMPL_ELSE -->
<option value="call_number_asc">Signatura (Dokumentarno 9-0 do Knjizevnost Z-A)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="call_number_dsc" -->
<option value="call_number_dsc" selected="selected">Signatura (Knjizevnost Z-A do Dokumentarno 9-0)</option><!-- TMPL_ELSE -->
<option value="call_number_dsc">Signatura (Knjizevnost Z-A do Dokumentarno 9-0)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Dates"><!-- TMPL_IF NAME="pubdate_dsc" -->
<option value="pubdate_dsc" selected="selected">Datum izdavanja/autorskog prava: najnoviji ka najstarijem</option><!-- TMPL_ELSE -->
<option value="pubdate_dsc">Datum izdavanja/autorskog prava: najnoviji ka najstarijem</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="pubdate_asc" -->
<option value="pubdate_asc" selected="selected">Datum izdavanja/autorskog prava: od najstarijeg ka najnovijem</option><!-- TMPL_ELSE -->
<option value="pubdate_asc">Datum izdavanja/autorskog prava: od najstarijeg ka najnovijem</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_dsc" selected="selected">Datum nabavke: od najnovijeg do najstarijeg</option><!-- TMPL_ELSE -->
<option value="acqdate_dsc">Datum nabavke: od najnovijeg do najstarijeg</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_asc" selected="selected">Datum nabavke: od najstarijeg do najnovijeg</option><!-- TMPL_ELSE -->
<option value="acqdate_asc">Datum nabavke: od najstarijeg do najnovijeg</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Title"><!-- TMPL_IF NAME="title_az" -->
<option value="title_az" selected="selected">Naslov (A-Z)</option><!-- TMPL_ELSE -->
<option value="title_az">Naslov (A-Z)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="title_za" -->
<option value="title_za" selected="selected">Naslov (Z-A)</option><!-- TMPL_ELSE -->
<option value="title_za">Naslov (Z-A)</option><!-- /TMPL_IF -->
</optgroup>

