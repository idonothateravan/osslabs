<option value="relevance">Relevance</option>
<optgroup label="Popularity"><!-- TMPL_IF NAME="popularity_dsc" -->
<option value="popularity_dsc" selected="selected">Popularidade (Do Mais para o Menos)</option><!-- TMPL_ELSE -->
<option value="popularity_dsc">Popularidade (Do Mais para o Menos)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="popularity_asc" -->
<option value="popularity_asc" selected="selected">Popularidade (Do Menos para o Mais)</option><!-- TMPL_ELSE -->
<option value="popularity_asc">Popularidade (Do Menos para o Mais)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Author"><!-- TMPL_IF NAME="author_az" -->
<option value="author_az" selected="selected">Author (A-Z)</option><!-- TMPL_ELSE -->
<option value="author_az">Author (A-Z)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="author_za" -->
<option value="author_za" selected="selected">Author (Z-A)</option><!-- TMPL_ELSE -->
<option value="author_za">Author (Z-A)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Call Number"><!-- TMPL_IF NAME="call_number_asc" -->
<option value="call_number_asc" selected="selected">Cota (Não-ficção 0-9 a Ficção A-Z)</option><!-- TMPL_ELSE -->
<option value="call_number_asc">Cota (Não-ficção 0-9 a Ficção A-Z)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="call_number_dsc" -->
<option value="call_number_dsc" selected="selected">Cota (Ficção Z-A a Não-ficção 9-0)</option><!-- TMPL_ELSE -->
<option value="call_number_dsc">Cota (Ficção Z-A a Não-ficção 9-0)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Dates"><!-- TMPL_IF NAME="pubdate_dsc" -->
<option value="pubdate_dsc" selected="selected">Date de Publicação/Direitos de Autor: Do mais Recente para o mais Antigo</option><!-- TMPL_ELSE -->
<option value="pubdate_dsc">Date de Publicação/Direitos de Autor: Do mais Recente para o mais Antigo</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="pubdate_asc" -->
<option value="pubdate_asc" selected="selected">Data de Publicação/Direitos de Autor: Do mais Antigo para o mais Recente</option><!-- TMPL_ELSE -->
<option value="pubdate_asc">Data de Publicação/Direitos de Autor: Do mais Antigo para o mais Recente</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_dsc" selected="selected">Acquisition Date: Newest to Oldest</option><!-- TMPL_ELSE -->
<option value="acqdate_dsc">Acquisition Date: Newest to Oldest</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_asc" selected="selected">Data de Aquisição: Do mais antigo para o mais recente</option><!-- TMPL_ELSE -->
<option value="acqdate_asc">Data de Aquisição: Do mais antigo para o mais recente</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Title"><!-- TMPL_IF NAME="title_az" -->
<option value="title_az" selected="selected">Title (A-Z)</option><!-- TMPL_ELSE -->
<option value="title_az">Title (A-Z)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="title_za" -->
<option value="title_za" selected="selected">Title (Z-A)</option><!-- TMPL_ELSE -->
<option value="title_za">Title (Z-A)</option><!-- /TMPL_IF -->
</optgroup>

