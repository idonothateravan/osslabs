<option value="relevance">Σχετικότητα</option>
<optgroup label="Popularity"><!-- TMPL_IF NAME="popularity_dsc" -->
<option value="popularity_dsc" selected="selected">Δημοτικότητα (Περισσότερο προς Λιγότερο)</option><!-- TMPL_ELSE -->
<option value="popularity_dsc">Δημοτικότητα (Περισσότερο προς Λιγότερο)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="popularity_asc" -->
<option value="popularity_asc" selected="selected">Δημοτικότητα (Λιγότερο προς Περισσότερο)</option><!-- TMPL_ELSE -->
<option value="popularity_asc">Δημοτικότητα (Λιγότερο προς Περισσότερο)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Author"><!-- TMPL_IF NAME="author_az" -->
<option value="author_az" selected="selected">Συγγραφέας (Α-Ω)</option><!-- TMPL_ELSE -->
<option value="author_az">Συγγραφέας (Α-Ω)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="author_za" -->
<option value="author_za" selected="selected">Συγγραφέας (Ω-Α)</option><!-- TMPL_ELSE -->
<option value="author_za">Συγγραφέας (Ω-Α)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Call Number"><!-- TMPL_IF NAME="call_number_asc" -->
<option value="call_number_asc" selected="selected">Ταξινομικός Αριθμός (Μη Λογοτεχνικά 0-9 έως Λογοτεχνικά Α-Ω)</option><!-- TMPL_ELSE -->
<option value="call_number_asc">Ταξινομικός Αριθμός (Μη Λογοτεχνικά 0-9 έως Λογοτεχνικά Α-Ω)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="call_number_dsc" -->
<option value="call_number_dsc" selected="selected">Ταξινομικός Αριθμός (Λογοτεχνικά Ω-Α έως Μη Λογοτεχνικά 9-0)</option><!-- TMPL_ELSE -->
<option value="call_number_dsc">Ταξινομικός Αριθμός (Λογοτεχνικά Ω-Α έως Μη Λογοτεχνικά 9-0)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Dates"><!-- TMPL_IF NAME="pubdate_dsc" -->
<option value="pubdate_dsc" selected="selected">Ημερομηνία Δημοσίευσης/Copyright: Από τα Νεότερα στα Παλαιότερα</option><!-- TMPL_ELSE -->
<option value="pubdate_dsc">Ημερομηνία Δημοσίευσης/Copyright: Από τα Νεότερα στα Παλαιότερα</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="pubdate_asc" -->
<option value="pubdate_asc" selected="selected">Ημερομηνία Δημοσίευσης/Copyright: Από τα Παλαιότερα στα Νεότερα</option><!-- TMPL_ELSE -->
<option value="pubdate_asc">Ημερομηνία Δημοσίευσης/Copyright: Από τα Παλαιότερα στα Νεότερα</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_dsc" selected="selected">Ημερομηνία Απόκτησης: Νεότερο προς Παλαιότερο</option><!-- TMPL_ELSE -->
<option value="acqdate_dsc">Ημερομηνία Απόκτησης: Νεότερο προς Παλαιότερο</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_asc" selected="selected">Ημερομηνία Απόκτησης: Παλαιότερο προς Νεότερο</option><!-- TMPL_ELSE -->
<option value="acqdate_asc">Ημερομηνία Απόκτησης: Παλαιότερο προς Νεότερο</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Title"><!-- TMPL_IF NAME="title_az" -->
<option value="title_az" selected="selected">Τίτλος (Α-Ω)</option><!-- TMPL_ELSE -->
<option value="title_az">Τίτλος (Α-Ω)</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="title_za" -->
<option value="title_za" selected="selected">Τίτλος (Ω-Α)</option><!-- TMPL_ELSE -->
<option value="title_za">Τίτλος (Ω-Α)</option><!-- /TMPL_IF -->
</optgroup>

