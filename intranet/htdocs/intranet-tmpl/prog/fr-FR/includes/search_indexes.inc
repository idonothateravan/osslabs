<select name="idx">
<!-- TMPL_IF NAME="selected" --><option value="kw" selected="selected">Tous les mots</option><!-- TMPL_ELSE --><option value="kw">Tous les mots</option><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="selected" --><option value="au,wrdl" selected="selected">Auteur</option><!-- TMPL_ELSE --><option value="au">Auteur</option><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="selected" --><option value="au,phr" selected="selected">&nbsp;&nbsp;&nbsp;&nbsp; Auteur (expression)</option><!-- TMPL_ELSE --><option value="au,phr">&nbsp;&nbsp;&nbsp;&nbsp; Auteur (expression)</option><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="selected" --><option value="cpn,wrdl" selected="selected">&nbsp;&nbsp;&nbsp;&nbsp; Nom de marque</option><!-- TMPL_ELSE --><option value="cpn">&nbsp;&nbsp;&nbsp;&nbsp; Nom de marque</option><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="selected" --><option value="cfn,wrdl" selected="selected">&nbsp;&nbsp;&nbsp;&nbsp; Nom de congrès</option><!-- TMPL_ELSE --><option value="cfn">&nbsp;&nbsp;&nbsp;&nbsp; Nom de congrès</option><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="selected" --><option value="cpn,phr" selected="selected">&nbsp;&nbsp;&nbsp;&nbsp; Collectivité auteur (expression)</option><!-- TMPL_ELSE --><option value="cpn,phr">&nbsp;&nbsp;&nbsp;&nbsp; Collectivité auteur (expression)</option><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="selected" --><option value="cfn,phr" selected="selected">&nbsp;&nbsp;&nbsp;&nbsp; Nom de congrès (expression)</option><!-- TMPL_ELSE --><option value="cfn,phr">&nbsp;&nbsp;&nbsp;&nbsp; Nom de congrès (expression)</option><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="selected" --><option value="pn" selected="selected"> &nbsp;&nbsp;&nbsp;&nbsp; Nom de personne</option><!-- TMPL_ELSE --><option value="pn"> &nbsp;&nbsp;&nbsp;&nbsp; Nom de personne</option><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="selected" --><option value="pn,phr" selected="selected">&nbsp;&nbsp;&nbsp;&nbsp; Nom de personne (expression)</option><!-- TMPL_ELSE --><option value="pn,phr">&nbsp;&nbsp;&nbsp;&nbsp; Nom de personne (expression)</option><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="selected" --><option value="ln" selected="selected">Langue</option><!-- TMPL_ELSE --><option value="ln">Langue</option><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="selected" --><option value="nt" selected="selected">Notes</option><!-- TMPL_ELSE --><option value="nt">Notes</option><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="selected" --><option value="pb" selected="selected">Editeur</option><!-- TMPL_ELSE --><option value="pb">Editeur</option><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="selected" --><option value="pl" selected="selected">Lieu de publication</option><!-- TMPL_ELSE --><option value="pl">Lieu de publication</option><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="selected" --><option value="yr" selected="selected">Date de publication (aaaa)</option><!-- TMPL_ELSE --><option value="yr">Date de publication (aaaa)</option><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="selected" --><option value="acqdate" selected="selected">Date d'acquisition (aaaa-mm-jj)</option><!-- TMPL_ELSE --><option value="acqdate">Date d'acquisition (aaaa-mm-jj)</option><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="selected" --><option value="sn" selected="selected">Numéro normalisé</option><!-- TMPL_ELSE --><option value="sn">Numéro normalisé</option><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="selected" --><option value="nb" selected="selected">&nbsp;&nbsp;&nbsp;&nbsp; ISBN</option><!-- TMPL_ELSE --><option value="nb">&nbsp;&nbsp;&nbsp;&nbsp; ISBN</option><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="selected" --><option value="ns" selected="selected">&nbsp;&nbsp;&nbsp;&nbsp; ISSN</option><!-- TMPL_ELSE --><option value="ns">&nbsp;&nbsp;&nbsp;&nbsp; ISSN</option><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="selected" --><option value="lcn,phr" selected="selected">&nbsp;&nbsp;&nbsp;&nbsp; Cote</option><!-- TMPL_ELSE --><option value="lcn,phr">&nbsp;&nbsp;&nbsp;&nbsp; Cote</option><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="selected" --><option value="su" selected="selected">Sujet</option><!-- TMPL_ELSE --><option value="su">Sujet</option><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="selected" --><option value="su,phr" selected="selected">&nbsp;&nbsp;&nbsp;&nbsp; Sujet (expression)</option><!-- TMPL_ELSE --><option value="su,phr">&nbsp;&nbsp;&nbsp;&nbsp; Sujet (expression)</option><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="selected" --><option value="ti" selected="selected">Titre</option><!-- TMPL_ELSE --><option value="ti">Titre</option><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="selected" --><option value="ti,phr" selected="selected">&nbsp;&nbsp;&nbsp;&nbsp;Titre (expression)</option><!-- TMPL_ELSE --><option value="ti,phr">&nbsp;&nbsp;&nbsp;&nbsp;Titre (expression)</option><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="selected" --><option value="se" selected="selected">&nbsp;&nbsp;&nbsp;&nbsp; Titre de collection</option><!-- TMPL_ELSE --><option value="se">&nbsp;&nbsp;&nbsp;&nbsp; Titre de collection</option><!-- /TMPL_IF -->

<!-- TMPL_IF NAME="selected" --><option value="bc" selected="selected">code-barres</option><!-- TMPL_ELSE --><option value="bc">code-barres</option>
<!-- /TMPL_IF -->
</select>
