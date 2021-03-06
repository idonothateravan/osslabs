<h1 id="logo"><a href="/cgi-bin/koha/mainpage.pl"><!-- TMPL_VAR NAME="LibraryName" --></a></h1>
<!-- Begin Authorities Resident Search Box -->
<div id="header_search" class="residentsearch">
    <div id="authority_search" class="residentsearch">
    <p class="tip">輸入權威記錄標題（$a）：</p>
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
            <option value="contains">包含</option>
            <option value="start">開始</option>
            <option value="is">是精確的</option>
        </select>
        <input id="value_anywhere" type="text" name="value" value="<!-- TMPL_VAR NAME="value" -->" />
        <select name="orderby">
            <option value="">沒有</option>
            <option value="HeadingAsc" selected="selected">標題 A-Z</option>
            <option value="HeadingDsc">標題 Z-A</option>
         </select>
         <input type="submit" class="submit" value="送出">
    </form>
    </div>
    <div id="main_heading" class="residentsearch" style="display:none;">
    <p class="tip">輸入權威記錄標題：</p>
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
            <option value="contains">包含</option>
            <option value="start">開始</option>
            <option value="is">是精確的</option>
        </select>
        <input id="value_mainentry" type="text" name="value" value="<!-- TMPL_VAR NAME="value" -->" />
        <select name="orderby">
            <option value="">沒有</option>
            <option value="HeadingAsc" selected="selected">標題 A-Z</option>
            <option value="HeadingDsc">標題 Z-A</option>
        </select>
        <input type="submit" class="submit" value="送出">
    </form>
    </div>
    <div id="all_headings" class="residentsearch" style="display:none;">
    <p class="tip">輸入任何權威記錄欄位：</p>
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
            <option value="contains">包含</option>
            <option value="start">開始</option>
            <option value="is">是精確的</option>
        </select>
        <input id="value_mainmainentry" type="text" name="value" value="<!-- TMPL_VAR NAME="value" -->" />
        <select name="orderby">
            <option value="">沒有</option>
            <option value="HeadingAsc" selected="selected">標題 A-Z</option>
            <option value="HeadingDsc">標題 Z-A</option>
        </select>
        <input type="submit" class="submit" value="送出">
    </form>
    </div>
    <ul>
        <li><a href="/cgi-bin/koha/authorities/authorities-home.pl#authority_search">查詢權威記錄</a></li>
        <li><a href="/cgi-bin/koha/authorities/authorities-home.pl#main_heading">查詢主要標題</a></li>
        <li><a href="/cgi-bin/koha/authorities/authorities-home.pl#all_headings">查詢所有標題</a></li>
    </ul>
</div>
<!-- End Authorities Resident Search Box -->
