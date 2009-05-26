<option value="relevance">Bedeutung</option>

<optgroup label="Popularity">
	
	<!-- TMPL_IF NAME="popularity_dsc" -->
<option value="popularity_dsc" selected="selected">Popularität (am wenigsten bis am meisten)</option>
<!-- TMPL_ELSE -->
	<option value="popularity_dsc">Popularität (am wenigsten bis am meisten)</option>
 <!-- /TMPL_IF -->
<!-- TMPL_IF NAME="popularity_asc" -->
<option value="popularity_asc" selected="selected">Popularität (am wenigsten bis am meisten)</option>
<!-- TMPL_ELSE -->
	<option value="popularity_asc">Popularität (am wenigsten bis am meisten)</option>
 <!-- /TMPL_IF -->

</optgroup>

<optgroup label="Author">
	
	<!-- TMPL_IF NAME="author_az" -->
<option value="author_az" selected="selected">Verfasser (A-Z)</option>	
<!-- TMPL_ELSE -->
<option value="author_az">Verfasser (A-Z)</option>
 <!-- /TMPL_IF -->
<!-- TMPL_IF NAME="author_za" -->
<option value="author_za" selected="selected">Verfasser (Z-A)</option>
<!-- TMPL_ELSE -->
<option value="author_za">Verfasser (Z-A)</option>
 <!-- /TMPL_IF -->

</optgroup>

<optgroup label="Call Number">
	
	<!-- TMPL_IF NAME="call_number_asc" -->
<option value="call_number_asc" selected="selected">Signatur (Sachbücher 0-9 bis Belletristik A-z)</option>
<!-- TMPL_ELSE -->
	<option value="call_number_asc">Signatur (Sachbücher 0-9 bis Belletristik A-z)</option>
<!-- /TMPL_IF -->

<!-- TMPL_IF NAME="call_number_dsc" -->
<option value="call_number_dsc" selected="selected">Signatur (Belletristik Z-A bis Sachbücher 9-0)</option>
<!-- TMPL_ELSE -->
	<option value="call_number_dsc">Signatur (Belletristik Z-A bis Sachbücher 9-0)</option>
<!-- /TMPL_IF -->

</optgroup>

<optgroup label="Dates">
	<!-- TMPL_IF NAME="pubdate_dsc" -->
<option value="pubdate_dsc" selected="selected" >Publikations-/Copyright-Datum: Jüngste zu älteste</option>
	<!-- TMPL_ELSE -->
<option value="pubdate_dsc">Publikations-/Copyright-Datum: Jüngste zu älteste</option>
<!-- /TMPL_IF -->

<!-- TMPL_IF NAME="pubdate_asc" -->
<option value="pubdate_asc" selected="selected" >Publikations-/Copyright-Datum: Älteste zu jüngste</option>
<!-- TMPL_ELSE -->
<option value="pubdate_asc">Publikations-/Copyright-Datum: Älteste zu jüngste</option>
<!-- /TMPL_IF -->

<!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_dsc" selected="selected">Erwerbungsdatum: Neueste bis älteste</option>
<!-- TMPL_ELSE -->
<option value="acqdate_dsc">Erwerbungsdatum: Neueste bis älteste</option>
 <!-- /TMPL_IF -->

 <!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_asc" selected="selected">Erwerbungsdatum: Älteste bis neueste</option>
<!-- TMPL_ELSE -->
<option value="acqdate_asc">Erwerbungsdatum: Älteste bis neueste</option>
 <!-- /TMPL_IF -->
</optgroup>

<optgroup label="Title">
	<!-- TMPL_IF NAME="title_az" -->
<option value="title_az" selected="selected">Titel (A-Z)</option>
	<!-- TMPL_ELSE -->
<option value="title_az">Titel (A-Z)</option>
	 <!-- /TMPL_IF -->
	<!-- TMPL_IF NAME="title_za" -->
<option value="title_za" selected="selected">Titel (Z-A)</option>	
	<!-- TMPL_ELSE -->
<option value="title_za">Titel (Z-A)</option>
<!-- /TMPL_IF -->
</optgroup>
