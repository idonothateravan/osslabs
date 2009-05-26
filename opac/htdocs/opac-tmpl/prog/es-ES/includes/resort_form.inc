<option value="relevance">Relevance</option>
<optgroup label="Popularity"><!-- TMPL_IF NAME="popularity_dsc" -->
<option value="popularity_dsc" selected="selected">Popularidad (Mayor a Menor)</option><!-- TMPL_ELSE -->
<option value="popularity_dsc">Popularidad (Mayor a Menor)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="popularity_asc" -->
<option value="popularity_asc" selected="selected">Popularidad (Menor a Mayor)</option><!-- TMPL_ELSE -->
<option value="popularity_asc">Popularidad (Menor a Mayor)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Author"><!-- TMPL_IF NAME="author_az" -->
<option value="author_az" selected="selected">Author (A-Z)</option><!-- TMPL_ELSE -->
<option value="author_az">Author (A-Z)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="author_za" -->
<option value="author_za" selected="selected">Author (Z-A)</option><!-- TMPL_ELSE -->
<option value="author_za">Author (Z-A)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Call Number"><!-- TMPL_IF NAME="call_number_asc" -->
<option value="call_number_asc" selected="selected">N&uacute;mero (No-Ficci&oacute;n 9-0 a Ficci&oacute;n A-Z)</option><!-- TMPL_ELSE -->
<option value="call_number_asc">N&uacute;mero (No-Ficci&oacute;n 9-0 a Ficci&oacute;n A-Z)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="call_number_dsc" -->
<option value="call_number_dsc" selected="selected">N&uacute;mero (Ficci&oacute;n Z-A a No-Ficci&oacute;n 9-0)</option><!-- TMPL_ELSE -->
<option value="call_number_dsc">N&uacute;mero (Ficci&oacute;n Z-A a No-Ficci&oacute;n 9-0)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Dates"><!-- TMPL_IF NAME="pubdate_dsc" -->
<option value="pubdate_dsc" selected="selected">Publicaci&oacute;n/Fecha de Copyright: Nuevos a Antigüos</option><!-- TMPL_ELSE -->
<option value="pubdate_dsc">Publicaci&oacute;n/Fecha de Copyright: Nuevos a Antigüos</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="pubdate_asc" -->
<option value="pubdate_asc" selected="selected">Publicaci&oacute;n/Fecha de Copyright: Antigüos a Nuevos</option><!-- TMPL_ELSE -->
<option value="pubdate_asc">Publicaci&oacute;n/Fecha de Copyright: Antigüos a Nuevos</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_dsc" selected="selected">Fecha de adquisici&oacute;n: Nuevos primero</option><!-- TMPL_ELSE -->
<option value="acqdate_dsc">Fecha de adquisici&oacute;n: Nuevos primero</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_asc" selected="selected">Fecha de adquisici&oacute;n: Antigüos primero</option><!-- TMPL_ELSE -->
<option value="acqdate_asc">Fecha de adquisici&oacute;n: Antigüos primero</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Title"><!-- TMPL_IF NAME="title_az" -->
<option value="title_az" selected="selected">Title (A-Z)</option><!-- TMPL_ELSE -->
<option value="title_az">Title (A-Z)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="title_za" -->
<option value="title_za" selected="selected">Title (Z-A)</option><!-- TMPL_ELSE -->
<option value="title_za">Title (Z-A)</option><!-- /TMPL_IF -->
</optgroup>

