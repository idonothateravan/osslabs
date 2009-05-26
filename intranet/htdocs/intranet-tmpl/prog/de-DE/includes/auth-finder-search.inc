<form name="f" method="post" action="auth_finder.pl">
            <input type="hidden" name="op" value="do_search" />
            <input type="hidden" name="type" value="intranet" />
            <input type="hidden" name="nbstatements" value="<!-- TMPL_VAR NAME="nbstatements" -->" />
            <input type="hidden" name="index" value="<!-- TMPL_VAR NAME="index" -->" />
                <fieldset class="rows"><ol><li>
                    <span class="label">Normdatentyp</span>
                    <!-- TMPL_VAR NAME="authtypecode" -->
                    <input type="hidden" name="authtypecode" value="<!-- TMPL_VAR NAME="authtypecode" -->" />
                </li>
                <li>
                    <label for="mainmainentry">Haupteintrag (nur $a)</label>
                    <input type="hidden" name="marclist" value="mainmainentry" />
                    <input type="hidden" name="and_or" value="and" />
                    <input type="hidden" name="excluding" value="" />
                    <select name="operator" id="mainmainentry">
                        <option value="contains">enthält</option>
                        <option value="start">beginnt mit</option>
                        <option value="is">ist exakt</option>
                    </select>
                    <input type="text" name="value" value="<!-- TMPL_VAR name="mainmainstring" -->" />
                </li>
                <li>
                    <label for="mainentry">Haupteintrag</label>
                    <input type="hidden" name="marclist" value="mainentry" />
                    <input type="hidden" name="and_or" value="and" />
                    <input type="hidden" name="excluding" value="" />
                    <select name="operator" id="mainentry">
                        <option value="contains">enthält</option>
                        <option value="start">beginnt mit</option>
                        <option value="is">ist exakt</option>
                    </select>
                    <input type="text" name="value" value="<!-- TMPL_VAR name="mainstring" -->" />
                </li>
                <li>
                    <label for="marclist">Irgendwo</label>
                    <input type="hidden" name="marclist" value="" />
                    <input type="hidden" name="and_or" value="and" />
                    <input type="hidden" name="excluding" value="" />
                    <select name="operator" id="marclist">
                        <option value="contains">enthält</option>
                        <option value="start">beginnt mit</option>
                        <option value="is">ist exakt</option>
                    </select>
                    <input type="text" name="value" value="<!-- TMPL_VAR name="anystring" -->" />
                </li>
		<li>
		<label for="orderby">sortieren nach </label>
		<select name="orderby" id="orderby">
		    <option value="">Keine Bestellungen</option>
            <option value="HeadingAsc" selected="selected">Ansetzungsformen aufsteigend</option>
            <option value="HeadingDsc">Ansetzungsformen absteigend</option>
        </select>
		</li></ol></fieldset>
            <fieldset class="action"> <input type="submit" value="Suche beginnen" class="submit"> <a class="cancel close" href="#">abbrechen</a></fieldset>
</form>
