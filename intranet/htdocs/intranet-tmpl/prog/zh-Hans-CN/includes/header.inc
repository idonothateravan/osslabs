<div id="header" class="clearfix">

<div id="toplevelnav">
<ul id="toplevelmenu">
	<!-- TMPL_IF NAME="CAN_user_circulate" --><li><a href="/cgi-bin/koha/circ/circulation-home.pl">出纳</a></li><!-- /TMPL_IF -->
	 <!-- TMPL_IF NAME="CAN_user_borrowers" --><li><a href="/cgi-bin/koha/members/members-home.pl">读者</a></li><!-- /TMPL_IF -->
	<!-- TMPL_IF NAME="CAN_user_catalogue" --><li><a href="/cgi-bin/koha/catalogue/search.pl">查询</a></li><!-- /TMPL_IF -->
	<!-- TMPL_VAR name="IntranetNav" -->
	<li class="more"><a id="showmore" href="/cgi-bin/koha/mainpage.pl">更多</a><div id="moremenu"><div class="bd"><ul>
	<li><a href="/cgi-bin/koha/virtualshelves/shelves.pl">虚拟书架</a></li>
	<!-- TMPL_IF NAME="CAN_user_editcatalogue" --><li><a href="/cgi-bin/koha/cataloguing/addbooks.pl">编目</a></li>
	<!-- TMPL_IF NAME="CAN_user_acquisition" -->
	<li><a href="/cgi-bin/koha/acqui/acqui-home.pl">采购</a></li>
	<!-- /TMPL_IF -->
	<li><a href="/cgi-bin/koha/authorities/authorities-home.pl">权威记录</a></li>
	<!-- TMPL_IF NAME="CAN_user_serials" -->
	<li><a href="/cgi-bin/koha/serials/serials-home.pl">期刊</a></li><!-- /TMPL_IF -->
	<!-- /TMPL_IF -->
	<!-- TMPL_IF NAME="CAN_user_reports" --><li><a href="/cgi-bin/koha/reports/reports-home.pl">报表</a></li><!-- /TMPL_IF -->
	<!-- TMPL_IF NAME="CAN_user_tools" --><li><a href="/cgi-bin/koha/tools/tools-home.pl">工具</a></li><!-- /TMPL_IF -->
	<!-- TMPL_IF NAME="CAN_user_parameters" --><li><a href="/cgi-bin/koha/admin/admin-home.pl">管理</a></li><!-- /TMPL_IF -->
	<li><a href="/cgi-bin/koha/about.pl">关于 Koha</a></li></ul></div></div></li>
</ul>
</div>
<div id="login">
  <!-- TMPL_IF NAME="AutoLocation" --><strong><!-- TMPL_VAR NAME="LoginBranchname" --></strong>
  <!-- TMPL_ELSE -->
       <strong><!-- TMPL_VAR NAME="LoginBranchname" --></strong>
       <!-- TMPL_IF NAME="IndependantBranches" -->
          <!-- TMPL_IF NAME="CAN_user_management" --> （<a href="/cgi-bin/koha/circ/selectbranchprinter.pl">设定</a>）<!-- /TMPL_IF -->
           <!-- TMPL_ELSE -->
             （<a href="/cgi-bin/koha/circ/selectbranchprinter.pl">设定</a>）
           <!-- /TMPL_IF -->
         | <!-- /TMPL_IF -->
  <!-- TMPL_IF NAME="loggedinusername" --><span class="loggedinusername"><!-- TMPL_VAR NAME="loggedinusername" --></span> （<a href="/cgi-bin/koha/mainpage.pl?logout.x=1">注销</a>） |
  <!-- TMPL_ELSE -->你没有登入 |
  <!-- /TMPL_IF -->
  <a href="/cgi-bin/koha/help.pl" id="helper" onclick="window.open('/cgi-bin/koha/help.pl','Koha_Help','width=600,height=600,toolbar=false,scrollbars=yes'); return false;">[?]</a></div></div>	
