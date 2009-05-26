<option value="relevance">Rilevanza</option>
<optgroup label="Popularity"><!-- TMPL_IF NAME="popularity_dsc" -->
<option value="popularity_dsc" selected="selected">Popolarità (dal più al meno popolare)</option><!-- TMPL_ELSE -->
<option value="popularity_dsc">Popolarità (dal più al meno popolare)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="popularity_asc" -->
<option value="popularity_asc" selected="selected">Popolarità (dal meno al più popolare)</option><!-- TMPL_ELSE -->
<option value="popularity_asc">Popolarità (dal meno al più popolare)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Author"><!-- TMPL_IF NAME="author_az" -->
<option value="author_az" selected="selected">Autore (A-Z)</option><!-- TMPL_ELSE -->
<option value="author_az">Autore (A-Z)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="author_za" -->
<option value="author_za" selected="selected">Autore (Z-A)</option><!-- TMPL_ELSE -->
<option value="author_za">Autore (Z-A)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Call Number"><!-- TMPL_IF NAME="call_number_asc" -->
<option value="call_number_asc" selected="selected">Segnatura (Non-fiction 0-9 a Fcition A-Z)</option><!-- TMPL_ELSE -->
<option value="call_number_asc">Segnatura (Non-fiction 0-9 a Fcition A-Z)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="call_number_dsc" -->
<option value="call_number_dsc" selected="selected">Segnatura (Fiction Z-A a Non-fiction 9-0)</option><!-- TMPL_ELSE -->
<option value="call_number_dsc">Segnatura (Fiction Z-A a Non-fiction 9-0)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Dates"><!-- TMPL_IF NAME="pubdate_dsc" -->
<option value="pubdate_dsc" selected="selected">Data di pubblicazione/copyright: dalla più recente alla meno recente</option><!-- TMPL_ELSE -->
<option value="pubdate_dsc">Data di pubblicazione/copyright: dalla più recente alla meno recente</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="pubdate_asc" -->
<option value="pubdate_asc" selected="selected">Data di pubblicazione/copyright: dalla meno recente alla più recente</option><!-- TMPL_ELSE -->
<option value="pubdate_asc">Data di pubblicazione/copyright: dalla meno recente alla più recente</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_dsc" selected="selected">Data di acquisizione: dal più recente al più vecchio</option><!-- TMPL_ELSE -->
<option value="acqdate_dsc">Data di acquisizione: dal più recente al più vecchio</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_asc" selected="selected">Data di acquisizione: dal più vecchio al più recente</option><!-- TMPL_ELSE -->
<option value="acqdate_asc">Data di acquisizione: dal più vecchio al più recente</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Title"><!-- TMPL_IF NAME="title_az" -->
<option value="title_az" selected="selected">Titolo (A-Z)</option><!-- TMPL_ELSE -->
<option value="title_az">Titolo (A-Z)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="title_za" -->
<option value="title_za" selected="selected">Titolo (Z-A)</option><!-- TMPL_ELSE -->
<option value="title_za">Titolo (Z-A)</option><!-- /TMPL_IF -->
</optgroup>

