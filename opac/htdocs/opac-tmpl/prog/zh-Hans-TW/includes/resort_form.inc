<option value="relevance">相關性</option>
<optgroup label="Popularity"><!-- TMPL_IF NAME="popularity_dsc" -->
<option value="popularity_dsc" selected="selected">熱門程度（最熱門到最不熱門）</option><!-- TMPL_ELSE -->
<option value="popularity_dsc">熱門程度（最熱門到最不熱門）</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="popularity_asc" -->
<option value="popularity_asc" selected="selected">熱門程度（最不熱門到最熱門）</option><!-- TMPL_ELSE -->
<option value="popularity_asc">熱門程度（最不熱門到最熱門）</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Author"><!-- TMPL_IF NAME="author_az" -->
<option value="author_az" selected="selected">作者（A-Z）</option><!-- TMPL_ELSE -->
<option value="author_az">作者（A-Z）</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="author_za" -->
<option value="author_za" selected="selected">作者（Z-A）</option><!-- TMPL_ELSE -->
<option value="author_za">作者（Z-A）</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Call Number"><!-- TMPL_IF NAME="call_number_asc" -->
<option value="call_number_asc" selected="selected">索書號（非小說 Z-A 到小說 9-0）</option><!-- TMPL_ELSE -->
<option value="call_number_asc">索書號（非小說 Z-A 到小說 9-0）</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="call_number_dsc" -->
<option value="call_number_dsc" selected="selected">索書號（小說 Z-A 到非小說 9-0）</option><!-- TMPL_ELSE -->
<option value="call_number_dsc">索書號（小說 Z-A 到非小說 9-0）</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Dates"><!-- TMPL_IF NAME="pubdate_dsc" -->
<option value="pubdate_dsc" selected="selected">出版年：最新到最舊</option><!-- TMPL_ELSE -->
<option value="pubdate_dsc">出版年：最新到最舊</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="pubdate_asc" -->
<option value="pubdate_asc" selected="selected">出版年：最舊到最新</option><!-- TMPL_ELSE -->
<option value="pubdate_asc">出版年：最舊到最新</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_dsc" selected="selected">採訪時間：最新到最舊</option><!-- TMPL_ELSE -->
<option value="acqdate_dsc">採訪時間：最新到最舊</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_asc" selected="selected">採訪時間：最舊到最新</option><!-- TMPL_ELSE -->
<option value="acqdate_asc">採訪時間：最舊到最新</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Title"><!-- TMPL_IF NAME="title_az" -->
<option value="title_az" selected="selected">題名（A-Z）</option><!-- TMPL_ELSE -->
<option value="title_az">題名（A-Z）</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="title_za" -->
<option value="title_za" selected="selected">題名（Z-A）</option><!-- TMPL_ELSE -->
<option value="title_za">題名（Z-A）</option><!-- /TMPL_IF -->
</optgroup>

