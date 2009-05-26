<!-- TMPL_IF NAME="subscriptionid" -->
<ul>
<li><a href="serials-collection.pl?subscriptionid=<!-- TMPL_VAR name="subscriptionid" -->">مجموعة الدورية</a></li>
	<!-- TMPL_IF NAME="routing" --><li><a href="routing.pl?subscriptionid=<!-- TMPL_VAR NAME="subscriptionid" -->">تعديل قائمة تمرير</a></li><!-- TMPL_ELSE -->
	<li><a href="routing.pl?subscriptionid=<!-- TMPL_VAR NAME="subscriptionid" -->&amp;op=new">إنشئ قائمة تمرير</a></li><!-- /TMPL_IF -->
</ul>
<!-- /TMPL_IF -->

<ul>
	<li><a href="/cgi-bin/koha/serials/claims.pl">إخطارات</a></li>
	<li><a href="/cgi-bin/koha/serials/checkexpiration.pl">إنتهاء الفحص</a></li>
</ul>