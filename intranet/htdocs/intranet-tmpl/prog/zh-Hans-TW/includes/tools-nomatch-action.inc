          <select name="nomatch_action" id="nomatch_action">
            <!-- TMPL_IF NAME="nomatch_action_create_new" -->
                <option value="create_new" selected="selected">
            <!-- TMPL_ELSE -->
                <option value="create_new">
            <!-- /TMPL_IF -->
                Add incoming record</option>
            <!-- TMPL_IF NAME="nomatch_action_ignore" -->
                <option value="ignore" selected="selected">
            <!-- TMPL_ELSE -->
                <option value="ignore">
            <!-- /TMPL_IF -->
                Ignore incoming record (its items may still be processed)</option>
        </select>
