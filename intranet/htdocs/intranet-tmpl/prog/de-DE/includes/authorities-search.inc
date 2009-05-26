<h1 id="logo"><a href="/cgi-bin/koha/mainpage.pl"><!-- TMPL_VAR NAME="LibraryName" --></a></h1>
<!-- Begin Authorities Resident Search Box -->
<div id="header_search" class="residentsearch">
    <div id="authority_search" class="residentsearch">
    <p class="tip">Geben Sie die Normdateneintragung ($a) ein:</p>
    <form name="f" action="/cgi-bin/koha/authorities/authorities-home.pl" method="get">
        <input type="hidden" name="op" value="do_search" />
        <input type="hidden" name="type" value="intranet" />
        <input type="hidden" name="nbstatements" value="<!-- TMPL_VAR NAME="nbstatements" -->" />
        <select id="authtypecode" name="authtypecode">
        <!-- TMPL_LOOP NAME="authtypesloop" -->
            <!-- TMPL_IF name="selected" -->
            <option value="<!-- TMPL_VAR NAME="value" -->" selected="selected"><!-- TMPL_VAR NAME="authtypetext" --></option>
            <!-- TMPL_ELSE -->
            <option value="<!-- TMPL_VAR NAME="value" -->"><!-- TMPL_VAR NAME="authtypetext" --></option>
            <!-- /TMPL_IF -->
        <!-- /TMPL_LOOP -->
        </select>
        <input type="hidden" name="marclist" value="mainmainentry" />
        <select name="operator">
            <option value="contains">enthält</option>
            <option value="start">beginnt mit</option>
            <option value="is">ist exakt</option>
        </select>
        <input id="value_anywhere" type="text" name="value" value="<!-- TMPL_VAR NAME="value" -->" />
        <select name="orderby">
            <option value="">Keine</option>
            <option value="HeadingAsc" selected="selected">Ansetzungsformen A-Z</option>
            <option value="HeadingDsc">Ansetzungsformen Z-A</option>
         </select>
         <input type="submit" class="submit" value="Bestätigen">
    </form>
    </div>
    <div id="main_heading" class="residentsearch" style="display:none;">
    <p class="tip">Geben Sie die Normdateneintragung ein: </p>
    <form name="f" action="/cgi-bin/koha/authorities/authorities-home.pl" method="get">
        <input type="hidden" name="op" value="do_search" />
        <input type="hidden" name="type" value="intranet" />
        <input type="hidden" name="nbstatements" value="<!-- TMPL_VAR NAME="nbstatements" -->" />
        <select id="authtypecode" name="authtypecode">
        <!-- TMPL_LOOP NAME="authtypesloop" -->
            <!-- TMPL_IF name="selected" -->
            <option value="<!-- TMPL_VAR NAME="value" -->" selected="selected"><!-- TMPL_VAR NAME="authtypetext" --></option>
            <!-- TMPL_ELSE -->
            <option value="<!-- TMPL_VAR NAME="value" -->"><!-- TMPL_VAR NAME="authtypetext" --></option>
            <!-- /TMPL_IF -->
        <!-- /TMPL_LOOP -->
        </select>
        <input type="hidden" name="marclist" value="mainentry" />
        <input type="hidden" name="and_or" value="and" />
        <input type="hidden" name="excluding" value="" />
        <select name="operator">
            <option value="contains">enthält</option>
            <option value="start">beginnt mit</option>
            <option value="is">ist exakt</option>
        </select>
        <input id="value_mainentry" type="text" name="value" value="<!-- TMPL_VAR NAME="value" -->" />
        <select name="orderby">
            <option value="">Keine</option>
            <option value="HeadingAsc" selected="selected">Ansetzungsformen A-Z</option>
            <option value="HeadingDsc">Ansetzungsformen Z-A</option>
        </select>
        <input type="submit" class="submit" value="Bestätigen">
    </form>
    </div>
    <div id="all_headings" class="residentsearch" style="display:none;">
    <p class="tip">Geben Sie irgend ein Normdatenfeld ein:</p>
    <form name="f" action="/cgi-bin/koha/authorities/authorities-home.pl" method="get">
        <input type="hidden" name="op" value="do_search" />
        <input type="hidden" name="type" value="intranet" />
        <input type="hidden" name="nbstatements" value="<!-- TMPL_VAR NAME="nbstatements" -->" />
        <select id="authtypecode" name="authtypecode">
        <!-- TMPL_LOOP NAME="authtypesloop" -->
            <!-- TMPL_IF name="selected" -->
            <option value="<!-- TMPL_VAR NAME="value" -->" selected="selected"><!-- TMPL_VAR NAME="authtypetext" --></option>
            <!-- TMPL_ELSE -->
            <option value="<!-- TMPL_VAR NAME="value" -->"><!-- TMPL_VAR NAME="authtypetext" --></option>
            <!-- /TMPL_IF -->
        <!-- /TMPL_LOOP -->
        </select>
        <input type="hidden" name="marclist" value="" />
        <input type="hidden" name="and_or" value="and" />
        <input type="hidden" name="excluding" value="" />
        <select name="operator">
            <option value="contains">enthält</option>
            <option value="start">beginnt mit</option>
            <option value="is">ist exakt</option>
        </select>
        <input id="value_mainmainentry" type="text" name="value" value="<!-- TMPL_VAR NAME="value" -->" />
        <select name="orderby">
            <option value="">Keine</option>
            <option value="HeadingAsc" selected="selected">Ansetzungsformen A-Z</option>
            <option value="HeadingDsc">Ansetzungsformen Z-A</option>
        </select>
        <input type="submit" class="submit" value="Bestätigen">
    </form>
    </div>
    <ul>
        <li><a href="/cgi-bin/koha/authorities/authorities-home.pl#authority_search">Normdatensuche</a></li>
        <li><a href="/cgi-bin/koha/authorities/authorities-home.pl#main_heading">Haupteintragungssuche</a></li>
        <li><a href="/cgi-bin/koha/authorities/authorities-home.pl#all_headings">Alle Ordnungsworte suchen</a></li>
    </ul>
</div>
<!-- End Authorities Resident Search Box -->
