<!-- TMPL_IF NAME="subscriptionid" -->
<ul>
<li><a href="serials-collection.pl?subscriptionid=<!-- TMPL_VAR name="subscriptionid" -->">Reihe Sammlung</a></li>
	<!-- TMPL_IF NAME="routing" --><li><a href="routing.pl?subscriptionid=<!-- TMPL_VAR NAME="subscriptionid" -->">Routingliste bearbeiten</a></li><!-- TMPL_ELSE -->
	<li><a href="routing.pl?subscriptionid=<!-- TMPL_VAR NAME="subscriptionid" -->&amp;op=new">Routingliste erstellen</a></li><!-- /TMPL_IF -->
</ul>
<!-- /TMPL_IF -->

<ul>
	<li><a href="/cgi-bin/koha/serials/claims.pl">Reklamationen</a></li>
	<li><a href="/cgi-bin/koha/serials/checkexpiration.pl">Ablaufdatum überprüfen</a></li>
</ul>