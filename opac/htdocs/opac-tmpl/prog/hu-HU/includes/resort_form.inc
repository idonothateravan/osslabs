<option value="relevance">Relevance</option>
<optgroup label="Popularity"><!-- TMPL_IF NAME="popularity_dsc" -->
<option value="popularity_dsc" selected="selected">Népszerűség (nagytól a kisebb fele)</option><!-- TMPL_ELSE -->
<option value="popularity_dsc">Népszerűség (nagytól a kisebb fele)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="popularity_asc" -->
<option value="popularity_asc" selected="selected">Népszerűség (kisebbtől a nagyobb fele)</option><!-- TMPL_ELSE -->
<option value="popularity_asc">Népszerűség (kisebbtől a nagyobb fele)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Author"><!-- TMPL_IF NAME="author_az" -->
<option value="author_az" selected="selected">Author (A-Z)</option><!-- TMPL_ELSE -->
<option value="author_az">Author (A-Z)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="author_za" -->
<option value="author_za" selected="selected">Author (Z-A)</option><!-- TMPL_ELSE -->
<option value="author_za">Author (Z-A)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Call Number"><!-- TMPL_IF NAME="call_number_asc" -->
<option value="call_number_asc" selected="selected">Helyrajzi szám (Prózairodalom 0-9, Regény A-Zs)</option><!-- TMPL_ELSE -->
<option value="call_number_asc">Helyrajzi szám (Prózairodalom 0-9, Regény A-Zs)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="call_number_dsc" -->
<option value="call_number_dsc" selected="selected">Helyrajzi szám (Regény Zs-A, Prózairodalom 9-0)</option><!-- TMPL_ELSE -->
<option value="call_number_dsc">Helyrajzi szám (Regény Zs-A, Prózairodalom 9-0)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Dates"><!-- TMPL_IF NAME="pubdate_dsc" -->
<option value="pubdate_dsc" selected="selected">Publikáció/Szerzői jog dátuma: Legújabbtól a legrégebbiig</option><!-- TMPL_ELSE -->
<option value="pubdate_dsc">Publikáció/Szerzői jog dátuma: Legújabbtól a legrégebbiig</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="pubdate_asc" -->
<option value="pubdate_asc" selected="selected">Publikáció/Szerzői jog dátuma: Legrégebbitől a legújabbakig</option><!-- TMPL_ELSE -->
<option value="pubdate_asc">Publikáció/Szerzői jog dátuma: Legrégebbitől a legújabbakig</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_dsc" selected="selected">Beszerzési dátum: A legújabbtól a legrégebbiig</option><!-- TMPL_ELSE -->
<option value="acqdate_dsc">Beszerzési dátum: A legújabbtól a legrégebbiig</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_asc" selected="selected">Beszerzési dátum: A legrégebbitől a legújabbig</option><!-- TMPL_ELSE -->
<option value="acqdate_asc">Beszerzési dátum: A legrégebbitől a legújabbig</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Title"><!-- TMPL_IF NAME="title_az" -->
<option value="title_az" selected="selected">Title (A-Z)</option><!-- TMPL_ELSE -->
<option value="title_az">Title (A-Z)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="title_za" -->
<option value="title_za" selected="selected">Title (Z-A)</option><!-- TMPL_ELSE -->
<option value="title_za">Title (Z-A)</option><!-- /TMPL_IF -->
</optgroup>

