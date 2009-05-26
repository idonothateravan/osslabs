<!-- TMPL_IF NAME="borrowernumber" -->
<div id="menu">
<ul>	<!-- TMPL_IF NAME="circview" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a href="/cgi-bin/koha/circ/circulation.pl?borrowernumber=<!-- TMPL_VAR NAME="borrowernumber" -->">歸還</a></li>
	<!-- TMPL_IF NAME="detailview" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a href="/cgi-bin/koha/members/moremember.pl?borrowernumber=<!-- TMPL_VAR NAME="borrowernumber" -->">詳情</a></li>
	<!-- TMPL_IF NAME="CAN_user_updatecharges" -->
	<!-- TMPL_IF NAME="finesview" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a href="/cgi-bin/koha/members/boraccount.pl?borrowernumber=<!-- TMPL_VAR NAME="borrowernumber" -->">罰款</a></li>
	<!-- /TMPL_IF -->
	<!-- TMPL_IF NAME="intranetreadinghistory" --><!-- TMPL_IF NAME="readingrecordview" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a href="/cgi-bin/koha/members/readingrec.pl?borrowernumber=<!-- TMPL_VAR NAME="borrowernumber" -->">流通歷史</a></li><!-- /TMPL_IF -->
	<!-- TMPL_IF NAME="CAN_user_parameters"--><!-- TMPL_IF NAME="logview" --><li class="active"><!-- TMPL_ELSE --><li><!-- /TMPL_IF --><a href="/cgi-bin/koha/tools/viewlog.pl?do_it=1&amp;module=MEMBERS&amp;action=MODIFY&amp;object=<!-- TMPL_VAR NAME="borrowernumber" -->">修改記錄</a></li><!-- /TMPL_IF -->
</ul>
</div>
<!-- /TMPL_IF -->