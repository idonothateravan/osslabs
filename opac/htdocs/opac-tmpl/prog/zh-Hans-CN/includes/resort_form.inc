<option value="relevance">相关性</option>
<optgroup label="Popularity"><!-- TMPL_IF NAME="popularity_dsc" -->
<option value="popularity_dsc" selected="selected">热门程度（最热门到最不热门）</option><!-- TMPL_ELSE -->
<option value="popularity_dsc">热门程度（最热门到最不热门）</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="popularity_asc" -->
<option value="popularity_asc" selected="selected">热门程度（最不热门到最热门）</option><!-- TMPL_ELSE -->
<option value="popularity_asc">热门程度（最不热门到最热门）</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Author"><!-- TMPL_IF NAME="author_az" -->
<option value="author_az" selected="selected">作者（A-Z）</option><!-- TMPL_ELSE -->
<option value="author_az">作者（A-Z）</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="author_za" -->
<option value="author_za" selected="selected">作者（Z-A）</option><!-- TMPL_ELSE -->
<option value="author_za">作者（Z-A）</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Call Number"><!-- TMPL_IF NAME="call_number_asc" -->
<option value="call_number_asc" selected="selected">索书号（非小说 0-9 到小说 A-Z）</option><!-- TMPL_ELSE -->
<option value="call_number_asc">索书号（非小说 0-9 到小说 A-Z）</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="call_number_dsc" -->
<option value="call_number_dsc" selected="selected">索书号（小说 Z-A 到非小说 9-0）</option><!-- TMPL_ELSE -->
<option value="call_number_dsc">索书号（小说 Z-A 到非小说 9-0）</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Dates"><!-- TMPL_IF NAME="pubdate_dsc" -->
<option value="pubdate_dsc" selected="selected">出版/版权日期：最晚到最早</option><!-- TMPL_ELSE -->
<option value="pubdate_dsc">出版/版权日期：最晚到最早</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="pubdate_asc" -->
<option value="pubdate_asc" selected="selected">出版/版权日期：最早到最晚</option><!-- TMPL_ELSE -->
<option value="pubdate_asc">出版/版权日期：最早到最晚</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_dsc" selected="selected">采访时间：最新到最旧</option><!-- TMPL_ELSE -->
<option value="acqdate_dsc">采访时间：最新到最旧</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_asc" selected="selected">采访时间：最旧到最新</option><!-- TMPL_ELSE -->
<option value="acqdate_asc">采访时间：最旧到最新</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Title"><!-- TMPL_IF NAME="title_az" -->
<option value="title_az" selected="selected">题名（A-Z）</option><!-- TMPL_ELSE -->
<option value="title_az">题名（A-Z）</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="title_za" -->
<option value="title_za" selected="selected">题名（Z-A）</option><!-- TMPL_ELSE -->
<option value="title_za">题名（Z-A）</option><!-- /TMPL_IF -->
</optgroup>

