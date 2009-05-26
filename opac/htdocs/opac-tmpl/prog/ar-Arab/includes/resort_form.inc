<option value="relevance">صلة</option>
<optgroup label="Popularity"><!-- TMPL_IF NAME="popularity_dsc" -->
<option value="popularity_dsc" selected="selected">شعبية(من الأكثر  إلى الاقل )</option><!-- TMPL_ELSE -->
<option value="popularity_dsc">شعبية(من الأكثر  إلى الاقل )</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="popularity_asc" -->
<option value="popularity_asc" selected="selected">شعبية(من الاقل إلى الأكثر)</option><!-- TMPL_ELSE -->
<option value="popularity_asc">شعبية(من الاقل إلى الأكثر)</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Author"><!-- TMPL_IF NAME="author_az" -->
<option value="author_az" selected="selected">المؤلف ترتيب تصاعدي</option><!-- TMPL_ELSE -->
<option value="author_az">المؤلف ترتيب تصاعدي</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="author_za" -->
<option value="author_za" selected="selected">المؤلف ترتيب تنازلي</option><!-- TMPL_ELSE -->
<option value="author_za">المؤلف ترتيب تنازلي</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Call Number"><!-- TMPL_IF NAME="call_number_asc" -->
<option value="call_number_asc" selected="selected">رقم الاتصال ترتيب تصاعدي </option><!-- TMPL_ELSE -->
<option value="call_number_asc">رقم الاتصال ترتيب تصاعدي </option><!-- /TMPL_IF --><!-- TMPL_IF NAME="call_number_dsc" -->
<option value="call_number_dsc" selected="selected">رقم الاتصال ترتيب تنازلي</option><!-- TMPL_ELSE -->
<option value="call_number_dsc">رقم الاتصال ترتيب تنازلي</option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Dates"><!-- TMPL_IF NAME="pubdate_dsc" -->
<option value="pubdate_dsc" selected="selected">تاريخ النشر / حقوق الطبع والنشر  : الاحدث الى الاقدم</option><!-- TMPL_ELSE -->
<option value="pubdate_dsc">تاريخ النشر / حقوق الطبع والنشر  : الاحدث الى الاقدم</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="pubdate_asc" -->
<option value="pubdate_asc" selected="selected">تاريخ النشر / حقوق الطبع والنشر  : الاقدم الى الاحدث</option><!-- TMPL_ELSE -->
<option value="pubdate_asc">تاريخ النشر / حقوق الطبع والنشر  : الاقدم الى الاحدث</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_dsc" selected="selected">تاريخ الاقتناء: من الاحدث الى الاقدم</option><!-- TMPL_ELSE -->
<option value="acqdate_dsc">تاريخ الاقتناء: من الاحدث الى الاقدم</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="acqdate_dsc" -->
<option value="acqdate_asc" selected="selected">تاريخ الاقتناء: من الاقدم الى الاحدث  </option><!-- TMPL_ELSE -->
<option value="acqdate_asc">تاريخ الاقتناء: من الاقدم الى الاحدث  </option><!-- /TMPL_IF -->
</optgroup>
<optgroup label="Title"><!-- TMPL_IF NAME="title_az" -->
<option value="title_az" selected="selected">العناوين بترتيب تــصاعدي</option><!-- TMPL_ELSE -->
<option value="title_az">العناوين بترتيب تــصاعدي</option><!-- /TMPL_IF --><!-- TMPL_IF NAME="title_za" -->
<option value="title_za" selected="selected">العناوين بترتيب تــنــازلي</option><!-- TMPL_ELSE -->
<option value="title_za">العناوين بترتيب تــنــازلي</option><!-- /TMPL_IF -->
</optgroup>

