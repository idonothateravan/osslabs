<form name="f" method="post" action="auth_finder.pl">
            <input type="hidden" name="op" value="do_search" />
            <input type="hidden" name="type" value="intranet" />
            <input type="hidden" name="nbstatements" value="<!-- TMPL_VAR NAME="nbstatements" -->" />
            <input type="hidden" name="index" value="<!-- TMPL_VAR NAME="index" -->" />
                <fieldset class="rows"><ol><li>
                    <span class="label">權威記錄類別</span>
                    <!-- TMPL_VAR NAME="authtypecode" -->
                    <input type="hidden" name="authtypecode" value="<!-- TMPL_VAR NAME="authtypecode" -->" />
                </li>
                <li>
                    <label for="mainmainentry">主要款目（只有 $a）</label>
                    <input type="hidden" name="marclist" value="mainmainentry" />
                    <input type="hidden" name="and_or" value="and" />
                    <input type="hidden" name="excluding" value="" />
                    <select name="operator" id="mainmainentry">
                        <option value="contains">包含</option>
                        <option value="start">開始</option>
                        <option value="is">是精確的</option>
                    </select>
                    <input type="text" name="value" value="<!-- TMPL_VAR name="mainmainstring" -->" />
                </li>
                <li>
                    <label for="mainentry">主要款目</label>
                    <input type="hidden" name="marclist" value="mainentry" />
                    <input type="hidden" name="and_or" value="and" />
                    <input type="hidden" name="excluding" value="" />
                    <select name="operator" id="mainentry">
                        <option value="contains">包含</option>
                        <option value="start">開始</option>
                        <option value="is">是精確的</option>
                    </select>
                    <input type="text" name="value" value="<!-- TMPL_VAR name="mainstring" -->" />
                </li>
                <li>
                    <label for="marclist">任何地方</label>
                    <input type="hidden" name="marclist" value="" />
                    <input type="hidden" name="and_or" value="and" />
                    <input type="hidden" name="excluding" value="" />
                    <select name="operator" id="marclist">
                        <option value="contains">包含</option>
                        <option value="start">開始</option>
                        <option value="is">是精確的</option>
                    </select>
                    <input type="text" name="value" value="<!-- TMPL_VAR name="anystring" -->" />
                </li>
		<li>
		<label for="orderby">排序依照 </label>
		<select name="orderby" id="orderby">
		    <option value="">沒有訂單</option>
            <option value="HeadingAsc" selected="selected">標題遞增</option>
            <option value="HeadingDsc">標題遞減</option>
        </select>
		</li></ol></fieldset>
            <fieldset class="action"> <input type="submit" value="開始查詢" class="submit"> <a class="cancel close" href="#">取消</a></fieldset>
</form>
