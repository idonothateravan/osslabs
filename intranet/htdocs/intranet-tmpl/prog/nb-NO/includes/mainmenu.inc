	<div class="yui-b">

    <ul id="navigation">
    <!-- TMPL_IF NAME="CAN_user_circulate" -->
   <li> <a href="/cgi-bin/koha/circ/circulation.pl">Fjernlån</a><ul>
       <li>
       <form method="post" action="/cgi-bin/koha/circ/circulation.pl">
        <label for="navfindborrower">Lån ut til:</label>
            <input id="navfindborrower" name="findborrower" type="text" size="10" />
            <input type="hidden" name="branch" value="<!-- TMPL_VAR name="branch" -->" />
            <input type="hidden" name="printer" value="<!-- TMPL_VAR name="printer" -->" />
            <input type="submit" class="submit" value="OK" />
       </form>
       </li>
       <li><a accesskey="r" href="/cgi-bin/koha/circ/returns.pl">Lever tilbake</a></li>
        <li><a href="/cgi-bin/koha/circ/branchtransfers.pl">Transfers</a></li>
     </ul></li>
     <!-- /TMPL_IF -->

    <!-- TMPL_IF NAME="CAN_user_borrowers" -->
    <li><a href="/cgi-bin/koha/members/members-home.pl">Patrons</a><ul>
        <li><form action="/cgi-bin/koha/members/member.pl" method="post">
           <label for="navmember">Search:&nbsp;</label>
           <input id="navmember" type="text" size="10" name="member" />
           <input type="submit" value="OK" class="submit" />
            </form>
        </li>
    </ul></li>
    
    <!-- /TMPL_IF -->
                <!-- TMPL_IF NAME="CAN_user_catalogue" -->
                <li><a href="/cgi-bin/koha/catalogue/search.pl">Samling</a><ul>
                    <li>
                        <form name="searchform" method="get" action="/cgi-bin/koha/catalogue/search.pl" id="searchform">
                        <input type="hidden" name="idx" value="" />
                        <label for="navkeyword">
                            Search:&nbsp;
                        </label><input type="text" id="navkeyword" name="q" size="10" accesskey="s" />
                        <input type="submit" value=" OK " class="submit" />
                        </form>
                     </li>
                    <li><a href="/cgi-bin/koha/virtualshelves/shelves.pl">Lister</a></li>
                </ul></li>
                
                <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_editcatalogue" -->
    <li><a href="/cgi-bin/koha/cataloguing/addbooks.pl">Katalogisering</a><ul>
        <li><a href="/cgi-bin/koha/cataloguing/addbiblio.pl">Legg til MARC-post</a></li>
        <li><a href="/cgi-bin/koha/authorities/authorities-home.pl">Kilder</a></li>
        <li><a href="/cgi-bin/koha/serials/serials-home.pl">Periodika</a></li>
    </ul></li>
    
    <li><a href="/cgi-bin/koha/acqui/acqui-home.pl">Innkjøp</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_reports" -->
          <li><a href="/cgi-bin/koha/reports/reports-home.pl">Rapporter</a></li>
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_parameters" -->
   <li> <a href="/cgi-bin/koha/admin/admin-home.pl">Koha administration</a><ul>
            <li><a href="/cgi-bin/koha/admin/systempreferences.pl">System preferences</a></li>
        </ul></li>
        
    <!-- /TMPL_IF -->
    <!-- TMPL_IF NAME="CAN_user_tools" -->
    <li><a href="/cgi-bin/koha/tools/tools-home.pl">Verktøy</a></li>
    <!-- /TMPL_IF -->
    <li><a href="/cgi-bin/koha/about.pl">Om Koha</a></li>
	</ul>
    <!-- TMPL_IF NAME="IntranetNav" -->
        <!-- TMPL_VAR NAME="IntranetNav" -->
    <!-- /TMPL_IF -->
	
</div>
</div>
