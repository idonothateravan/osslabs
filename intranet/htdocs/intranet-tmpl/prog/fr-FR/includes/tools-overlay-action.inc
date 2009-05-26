          <select name="overlay_action" id="overlay_action">
            <!-- TMPL_IF NAME="overlay_action_replace" -->
                <option value="replace"  selected="selected">
            <!-- TMPL_ELSE -->
                <option value="replace">
            <!-- /TMPL_IF -->
                Remplace la notice existante avec une notice entrante</option>
            <!-- TMPL_IF NAME="overlay_action_create_new" -->
                <option value="create_new" selected="selected">
            <!-- TMPL_ELSE -->
                <option value="create_new">
            <!-- /TMPL_IF -->
                Ajouter la notice importée</option>
            <!-- TMPL_IF NAME="overlay_action_ignore" -->
                <option value="ignore" selected="selected">
            <!-- TMPL_ELSE -->
                <option value="ignore">
            <!-- /TMPL_IF -->
                Ignorer les enregistrements importés (les exemplaires peuvent être traités)</option>
        </select>
