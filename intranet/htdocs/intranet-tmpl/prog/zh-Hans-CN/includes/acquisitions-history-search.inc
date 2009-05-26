
<h1 id="logo"><a href="/cgi-bin/koha/mainpage.pl"><!-- TMPL_VAR NAME="LibraryName" --></a></h1>
<!-- Begin Acquisitions Resident Search Box -->
<div id="header_search">
<div id="supplier_search" class="residentsearch" style="display:none;">
	<p class="tip">Search vendors:</p>
        <form name="findsupplier" action="/cgi-bin/koha/acqui/booksellers.pl" method="post">
           <input type="text" size="25" name="supplier" id="supplier" class="focus" />
            <input type="submit" class="submit" value="送出"></form>
</div>
	<div id="orders_search" class="residentsearch">
	<p class="tip">查询订单：</p>
	
		<form action="/cgi-bin/koha/acqui/histsearch.pl" method="post">
		<label for="title">题名： </label><input type="text" id="title" name="title" size="15" value="<!-- TMPL_VAR name="title"-->" /> <label for="searchsupplier">供货商：</label> <input type="text" id="searchsupplier" name="name" size="15" value="<!-- TMPL_VAR name="name" -->" />
	<input value="送出" class="submit" type="submit"> <a href="/cgi-bin/koha/acqui/histsearch.pl">高级查询</a>
	</form>
	</div>	
			<ul>
			<li><a href="/cgi-bin/koha/acqui/booksellers.pl#supplier_search">Vendor Search</a></li>
			<li class="ui-tabs-selected"><a href="/cgi-bin/koha/acqui/histsearch.pl#orders_search">订单查询</a></li>
			</ul>	
</div>
<!-- End Acquisitions Resident Search Box -->
