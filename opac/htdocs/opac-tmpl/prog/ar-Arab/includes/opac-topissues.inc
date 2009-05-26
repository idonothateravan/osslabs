<div id="search-facets">
<h4>حدد بحثك</h4>
<form method="get" action="/cgi-bin/koha/opac-topissues.pl">
		<fieldset>
          <ol>  <li><label for="limit">إظــهــار البداية </label> <select name="limit" id="limit" style="width: 10em;">
                            <!-- TMPL_IF EXPR="limit == 10" --><option value ="10" selected="selected"> 10عناوين </option><!-- TMPL_ELSE --><option value="10"> 10عناوين </option><!-- /TMPL_IF -->
                            <!-- TMPL_IF EXPR="limit == 15" --><option value ="15" selected="selected"> 15عنوان       </option><!-- TMPL_ELSE --><option value="15"> 15عنوان       </option><!-- /TMPL_IF -->
                            <!-- TMPL_IF EXPR="limit == 20" --><option value ="20" selected="selected"> 20عنوان</option><!-- TMPL_ELSE --><option value="20"> 20عنوان</option><!-- /TMPL_IF -->
                            <!-- TMPL_IF EXPR="limit == 30" --><option value ="30" selected="selected"> 30عنوان</option><!-- TMPL_ELSE --><option value="30"> 30عنوان</option><!-- /TMPL_IF -->
                            <!-- TMPL_IF EXPR="limit == 40" --><option value ="40" selected="selected">40عنوان</option><!-- TMPL_ELSE --><option value="40">40عنوان</option><!-- /TMPL_IF -->
                            <!-- TMPL_IF EXPR="limit == 50" --><option value ="50" selected="selected">50عنوان</option><!-- TMPL_ELSE --><option value="50">50عنوان</option><!-- /TMPL_IF -->
                            <!-- TMPL_IF EXPR="limit == 100" --><option value ="100" selected="selected"> 100عنوان </option><!-- TMPL_ELSE --><option value="100"> 100عنوان </option><!-- /TMPL_IF -->
                        </select>
						</li>
				<li>
               <label for="branch">من  </label>
                <select name="branch" id="branch" style="width: 10em;">
                <option value="">جميع الفروع</option>
                <!-- TMPL_LOOP name="branchloop" -->
                    <!-- TMPL_IF EXPR="branch eq branchname" --><option value="<!-- TMPL_VAR name="value" -->" selected="selected"><!-- TMPL_ELSE --><option value="<!-- TMPL_VAR name="value" -->"><!-- /TMPL_IF -->
                        <!-- TMPL_VAR name="branchname" -->
                    </option>
                <!-- /TMPL_LOOP -->
                </select>
            </li>
            <li><label for="itemtype">محدد إلى </label>
                    <select name="itemtype" id="itemtype" style="width: 10em;">
                        <option value="">كل أنواع العناصر</option>
                        <!-- TMPL_LOOP name="itemtypeloop" -->
                            <!-- TMPL_IF EXPR="itemtype eq description" --><option value="<!-- TMPL_VAR name="value" -->" selected="selected"><!-- TMPL_ELSE --><option value="<!-- TMPL_VAR name="value" -->"><!-- /TMPL_IF -->
                                <!-- TMPL_VAR name="description" -->
                            </option>
                        <!-- /TMPL_LOOP -->
                    </select></li>
			<li>
            <label for="timeLimit"> : حصلت في الماضي </label> <select name="timeLimit" id="timeLimit">
                <!-- TMPL_IF EXPR="timeLimit == 3" --><option value="3" selected="selected">3اشهر</option><!-- TMPL_ELSE --><option value="3">3اشهر</option><!-- /TMPL_IF -->
                 <!-- TMPL_IF EXPR="timeLimit == 6" --><option value="6" selected="selected">6اشهر</option><!-- TMPL_ELSE --><option value="6">6اشهر</option><!-- /TMPL_IF -->
                 <!-- TMPL_IF EXPR="timeLimit == 12" --><option value="12" selected="selected"> 12شهرا</option><!-- TMPL_ELSE --><option value="12"> 12شهرا</option><!-- /TMPL_IF -->
                 <!-- TMPL_IF EXPR="timeLimit == 999" --><option value="999" selected="selected">لا حدود</option><!-- TMPL_ELSE --><option value="999">لا حدود</option><!-- /TMPL_IF -->
				</select>
            </li></ol>
        <input type="hidden" name="do_it" value="1" />
		
    </fieldset><fieldset class="action"><input type="submit" value="سجّل"></fieldset>
    </form>
</div>