<option value="relevance">Pertinence</option>

<optgroup label="Popularity">
	
	<!-- TMPL_IF NAME="popularity_dsc" -->
<option value="popularity_dsc" selected="selected">Popularité (plus à moins)</option>
<!-- TMPL_ELSE -->
	<option value="popularity_dsc">Popularité (plus à moins)</option>
 <!-- /TMPL_IF -->
<!-- TMPL_IF NAME="popularity_asc" -->
<option value="popularity_asc" selected="selected">Popularité (moins à plus)</option>
<!-- TMPL_ELSE -->
	<option value="popularity_asc">Popularité (moins à plus)</option>
 <!-- /TMPL_IF -->

</optgroup>

<optgroup label="Author">
	
	<!-- TMPL_IF NAME="author_az" -->
<option value="author_az" selected="selected">Auteur (A-Z)</option>	
<!-- TMPL_ELSE -->
<option value="author_az">Auteur (A-Z)</option>
 <!-- /TMPL_IF -->
<!-- TMPL_IF NAME="author_za" -->
<option value="author_za" selected="selected">Auteur (Z-A)</option>
<!-- TMPL_ELSE -->
<option value="author_za">Auteur (Z-A)</option>
 <!-- /TMPL_IF -->

</optgroup>

<optgroup label="Call Number">
	
	<!-- TMPL_IF NAME="call_number_asc" -->
<option value="call_number_asc" selected="selected">Cote (Non fiction 0-9 à Fiction A-Z)</option>
<!-- TMPL_ELSE -->
	<option value="call_number_asc">Cote (Non fiction 0-9 à Fiction A-Z)</option>
<!-- /TMPL_IF -->

<!-- TMPL_IF NAME="call_number_dsc" -->
<option value="call_number_dsc" selected="selected">Cote (Fiction Z-A à Non fiction 9-0)</option>
<!-- TMPL_ELSE -->
	<option value="call_number_dsc">Cote (Fiction Z-A à Non fiction 9-0)</option>
<!-- /TMPL_IF -->

</optgroup>

<optgroup label="Dates">
	<!-- TMPL_IF NAME="pubdate_dsc" -->
<option value="pubdate_dsc" selected="selected" >Date de publication/copyright : du plus récent au plus ancien</option>
	<!-- TMPL_ELSE -->
<option value="pubdate_dsc">Date de publication/copyright : du plus récent au plus ancien</option>
<!-- /TMPL_IF -->

<!-- TMPL_IF NAME="pubdate_asc" -->
<option value="pubdate_asc" selected="selected" >Date de publication/copyright : du plus ancien au plus récent</option>
<!-- TMPL_ELSE -->
<option value="pubdate_asc">Date de publication/copyright : du plus ancien au plus récent</option>
<!-- /TMPL_IF -->

<!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_dsc" selected="selected">Date d'acquisition: du plus récent au plus ancien</option>
<!-- TMPL_ELSE -->
<option value="acqdate_dsc">Date d'acquisition: du plus récent au plus ancien</option>
 <!-- /TMPL_IF -->

 <!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_asc" selected="selected">Date d'acquisition : du plus ancien au plus récent</option>
<!-- TMPL_ELSE -->
<option value="acqdate_asc">Date d'acquisition : du plus ancien au plus récent</option>
 <!-- /TMPL_IF -->
</optgroup>

<optgroup label="Title">
	<!-- TMPL_IF NAME="title_az" -->
<option value="title_az" selected="selected">Titre (A-Z)</option>
	<!-- TMPL_ELSE -->
<option value="title_az">Titre (A-Z)</option>
	 <!-- /TMPL_IF -->
	<!-- TMPL_IF NAME="title_za" -->
<option value="title_za" selected="selected">Titre (Z-A)</option>	
	<!-- TMPL_ELSE -->
<option value="title_za">Titre (Z-A)</option>
<!-- /TMPL_IF -->
</optgroup>
