<option value="relevance">Relevance</option>

<optgroup label="Popularity">
	
	<!-- TMPL_IF NAME="popularity_dsc" -->
<option value="popularity_dsc" selected="selected">Popularitet (størst til minst)</option>
<!-- TMPL_ELSE -->
	<option value="popularity_dsc">Popularitet (størst til minst)</option>
 <!-- /TMPL_IF -->
<!-- TMPL_IF NAME="popularity_asc" -->
<option value="popularity_asc" selected="selected">Popularitet (minst til størst)</option>
<!-- TMPL_ELSE -->
	<option value="popularity_asc">Popularitet (minst til størst)</option>
 <!-- /TMPL_IF -->

</optgroup>

<optgroup label="Author">
	
	<!-- TMPL_IF NAME="author_az" -->
<option value="author_az" selected="selected">Forfatter (A&ndash;Å)</option>	
<!-- TMPL_ELSE -->
<option value="author_az">Forfatter (A&ndash;Å)</option>
 <!-- /TMPL_IF -->
<!-- TMPL_IF NAME="author_za" -->
<option value="author_za" selected="selected">Forfatter (Å&ndash;A)</option>
<!-- TMPL_ELSE -->
<option value="author_za">Forfatter (Å&ndash;A)</option>
 <!-- /TMPL_IF -->

</optgroup>

<optgroup label="Call Number">
	
	<!-- TMPL_IF NAME="call_number_asc" -->
<option value="call_number_asc" selected="selected">Hyllesignatur (prosa 0-9, skjønnlitteratur A-Å)</option>
<!-- TMPL_ELSE -->
	<option value="call_number_asc">Hyllesignatur (prosa 0-9, skjønnlitteratur A-Å)</option>
<!-- /TMPL_IF -->

<!-- TMPL_IF NAME="call_number_dsc" -->
<option value="call_number_dsc" selected="selected">Hyllesignatur (skjønnlitteratur Å-A, prosa 9-0)</option>
<!-- TMPL_ELSE -->
	<option value="call_number_dsc">Hyllesignatur (skjønnlitteratur Å-A, prosa 9-0)</option>
<!-- /TMPL_IF -->

</optgroup>

<optgroup label="Dates">
	<!-- TMPL_IF NAME="pubdate_dsc" -->
<option value="pubdate_dsc" selected="selected" >Publisering/Opphavsrettsdato: Nyeste til eldste</option>
	<!-- TMPL_ELSE -->
<option value="pubdate_dsc">Publisering/Opphavsrettsdato: Nyeste til eldste</option>
<!-- /TMPL_IF -->

<!-- TMPL_IF NAME="pubdate_asc" -->
<option value="pubdate_asc" selected="selected" >Publisering/opphavsrettsdato: Eldste til nyeste</option>
<!-- TMPL_ELSE -->
<option value="pubdate_asc">Publisering/opphavsrettsdato: Eldste til nyeste</option>
<!-- /TMPL_IF -->

<!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_dsc" selected="selected">Innkjøpsdato: Nyeste til eldste</option>
<!-- TMPL_ELSE -->
<option value="acqdate_dsc">Innkjøpsdato: Nyeste til eldste</option>
 <!-- /TMPL_IF -->

 <!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_asc" selected="selected">Innkjøpsdato: Eldste til nyeste</option>
<!-- TMPL_ELSE -->
<option value="acqdate_asc">Innkjøpsdato: Eldste til nyeste</option>
 <!-- /TMPL_IF -->
</optgroup>

<optgroup label="Title">
	<!-- TMPL_IF NAME="title_az" -->
<option value="title_az" selected="selected">Tittel (A&ndash;Å)</option>
	<!-- TMPL_ELSE -->
<option value="title_az">Tittel (A&ndash;Å)</option>
	 <!-- /TMPL_IF -->
	<!-- TMPL_IF NAME="title_za" -->
<option value="title_za" selected="selected">Tittel (Å&ndash;A)</option>	
	<!-- TMPL_ELSE -->
<option value="title_za">Tittel (Å&ndash;A)</option>
<!-- /TMPL_IF -->
</optgroup>
