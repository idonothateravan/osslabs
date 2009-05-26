<!-- TMPL_IF NAME="loggedinusername" -->
<div id="menu">
<ul>
  <!-- TMPL_IF NAME="userview" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a href="/cgi-bin/koha/opac-user.pl">moj sazetak</a></li>
  <!-- TMPL_IF NAME="accountview" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a href="/cgi-bin/koha/opac-account.pl">moji racuni</a></li>
  <!-- TMPL_IF NAME="userupdateview" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a href="/cgi-bin/koha/opac-userupdate.pl">moji licni detalji</a></li>
  <!-- TMPL_IF NAME="TagsEnabled" -->
    <!-- TMPL_IF NAME="tagsview" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a href="/cgi-bin/koha/opac-tags.pl">my tags</a></li>
  <!-- /TMPL_IF -->
  <!-- TMPL_IF NAME="OpacPasswordChange" -->
    <!-- TMPL_IF NAME="passwdview" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a href="/cgi-bin/koha/opac-passwd.pl">promena sifre</a></li>
  <!-- /TMPL_IF -->
  <!-- TMPL_IF NAME="opacreadinghistory" -->
  <!-- TMPL_IF NAME="readingrecview" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a href="/cgi-bin/koha/opac-readingrecord.pl">moja prosla zaduzenja</a></li>
  <!-- /TMPL_IF -->
  <!-- TMPL_IF name="suggestion" -->
    <!-- TMPL_UNLESS NAME="AnonSuggestions" -->
      <!-- TMPL_IF NAME="suggestionsview" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a href="/cgi-bin/koha/opac-suggestions.pl">moji predlozi za nabavku</a></li>
    <!-- /TMPL_UNLESS -->
  <!-- /TMPL_IF -->
  <!-- TMPL_IF NAME="EnhancedMessagingPreferences" -->
    <!-- TMPL_IF NAME="messagingview" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a href="/cgi-bin/koha/opac-messaging.pl">my messaging</a></li>
  <!-- /TMPL_IF -->
  <!-- TMPL_IF NAME="virtualshelves" --> 
  <!-- TMPL_IF NAME="listsview" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a href="/cgi-bin/koha/opac-shelves.pl?display=privateshelves">my lists</a></li>
  <!-- /TMPL_IF -->

</ul>
</div>
<!-- /TMPL_IF -->

