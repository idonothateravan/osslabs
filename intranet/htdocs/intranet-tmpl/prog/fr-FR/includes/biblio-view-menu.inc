<div id="menu">
<ul>
    <!-- TMPL_IF NAME="detailview" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF -->
    <a href="/cgi-bin/koha/catalogue/detail.pl?biblionumber=<!-- TMPL_IF NAME="object" --><!-- TMPL_VAR NAME="object" --><!-- TMPL_ELSE --><!-- TMPL_VAR NAME="biblionumber" --><!-- /TMPL_IF -->">Normal</a></li>
<!-- TMPL_IF NAME="marcview" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF -->
<a href="/cgi-bin/koha/catalogue/MARCdetail.pl?biblionumber=<!-- TMPL_IF NAME="object" --><!-- TMPL_VAR NAME="object" --><!-- TMPL_ELSE --><!-- TMPL_VAR NAME="biblionumber" --><!-- /TMPL_IF -->">MARC</a></li>
    <!-- TMPL_IF NAME="isbdview" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF -->
    <a href="/cgi-bin/koha/catalogue/ISBDdetail.pl?biblionumber=<!-- TMPL_IF NAME="object" --><!-- TMPL_VAR NAME="object" --><!-- TMPL_ELSE --><!-- TMPL_VAR NAME="biblionumber" --><!-- /TMPL_IF -->">ISBD</a></li>
    <!-- TMPL_IF NAME="moredetailview" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF -->
    <a href="/cgi-bin/koha/catalogue/moredetail.pl?biblionumber=<!-- TMPL_IF NAME="object" --><!-- TMPL_VAR NAME="object" --><!-- TMPL_ELSE --><!-- TMPL_VAR NAME="biblionumber" --><!-- /TMPL_IF -->">Documents</a></li>
    <!-- TMPL_IF NAME="CAN_user_reserveforothers" -->
    <!-- TMPL_IF NAME="holdsview" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a href="/cgi-bin/koha/reserve/request.pl?biblionumber=<!-- TMPL_IF NAME="object" --><!-- TMPL_VAR NAME="object" --><!-- TMPL_ELSE --><!-- TMPL_VAR NAME="biblionumber" --><!-- /TMPL_IF -->">Réservations</a></li>
    <!-- /TMPL_IF -->

    <!-- TMPL_IF name="subscriptionsnumber" --><li><a href="/cgi-bin/koha/serials/serials-home.pl?searched=1&amp;title_filter=<!-- TMPL_VAR NAME="subscriptiontitle" -->">Abonnement(s)</a></li><!-- /TMPL_IF -->
</ul>
<ul>
<!-- TMPL_IF NAME="issuehistoryview" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF -->
<a href="/cgi-bin/koha/catalogue/issuehistory.pl?biblionumber=<!-- TMPL_IF NAME="object" --><!-- TMPL_VAR NAME="object" --><!-- TMPL_ELSE --><!-- TMPL_IF NAME="object" --><!-- TMPL_VAR NAME="object" --><!-- TMPL_ELSE --><!-- TMPL_VAR NAME="biblionumber" --><!-- /TMPL_IF --><!-- /TMPL_IF -->&amp;title=<!-- TMPL_VAR NAME="title"-->&amp;author=<!-- TMPL_VAR NAME="author"-->" >Historique de prêt</a></li>
<!-- TMPL_IF NAME="CAN_user_parameters"--><!-- TMPL_IF NAME="logview" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a href="/cgi-bin/koha/tools/viewlog.pl?do_it=1&amp;module=CATALOGUING&amp;action=MODIFY&amp;object=<!-- TMPL_VAR NAME="biblionumber"-->">Log des modifications</a> </li><!-- /TMPL_IF -->
</ul>
</div>

