<!-- TMPL_IF NAME="subscriptionid" -->
<ul>
<li><a href="serials-collection.pl?subscriptionid=<!-- TMPL_VAR name="subscriptionid" -->">Periodikasamling</a></li>
	<!-- TMPL_IF NAME="routing" --><li><a href="routing.pl?subscriptionid=<!-- TMPL_VAR NAME="subscriptionid" -->">Rediger mottakerliste</a></li><!-- TMPL_ELSE -->
	<li><a href="routing.pl?subscriptionid=<!-- TMPL_VAR NAME="subscriptionid" -->&amp;op=new">Opprett mottakerliste</a></li><!-- /TMPL_IF -->
</ul>
<!-- /TMPL_IF -->

<ul>
	<li><a href="/cgi-bin/koha/serials/claims.pl">Purringer</a></li>
	<li><a href="/cgi-bin/koha/serials/checkexpiration.pl">Sjekk utløpsdatoen</a></li>
</ul>