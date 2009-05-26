<a onclick="javascript:if (document.getElementsByName('Coded_Fields')[0].style.display=='none'){document.getElementsByName('Coded_Fields')[0].style.display='block';} else {document.getElementsByName('Coded_Fields')[0].style.display='none';}">Codierte Informationsfilter</a>
<div id="yui-b" style="display:none;" name="Coded_Fields" >
<!-- SUBTYPE LIMITS -->
		<fieldset>
		<legend>Codierte Felder</legend>
		<p>
		<label>Zielgruppe</label>
		<select name="limit" class="subtype">
            <option value="" SELECTED="selected" >Beliebig</option>
			<option value="aud:a">jugendlich, allgemein</option>
			<option value="aud:b">Vor-Primarschule (0-5)</option>
			<option value="aud:c">Primar (5-8)</option>
			<option value="aud:d">Kinder (9-14)</option>
			<option value="aud:e">Junge Erwachsene</option>
			<option value="aud:k">Erwachsene, ernst</option>
			<option value="aud:m">Erwachsener, allgemein</option>
			<option value="aud:u">Unbekannt</option>
		</select>
		</p>
		<p>
		<label>Druck</label>
        <select name="limit" class="subtype">
			<option value="" selected="selected" >Beliebig</option>
				<option value="Material-type:r">regulärer Druck</option>
				<option value="Material-type:d">Großdruck</option>
				<option value="Material-type:e">Format der Zeitung</option>
				<option value="Material-type:f">Braille oder Moons Skript</option>
				<option value="Material-type:g">Mikrodruck</option>
				<option value="Material-type:h">Handschrift</option>
				<option value="Material-type:i">Multimedia</option>
				<option value="Material-type:j">Miniduck</option>
				<option value="Material-type:z">andere Druck- oder Textarten</option>
		</select>
		</p>
		<p>
		<label>Festschrift Ind.</label>
		<select name="limit" class="subtype">
			<option value="" selected="selected" >Beliebig</option>
            <option value="Literature-Code:a">Roman</option>
            <option value="Literature-Code:b">Drama</option>
            <option value="Literature-Code:c">Essays / Aufsätze</option>
            <option value="Literature-Code:d">Humor, Satire</option>
            <option value="Literature-Code:e">Briefe</option>
            <option value="Literature-Code:f">Kurzgeschichten</option>
            <option value="Literature-Code:g">Poesie</option>
            <option value="Literature-Code:h">Reden, Rhetorik</option>
            <option value="Literature-Code:y">kein literarischer Text</option>
            <option value="Literature-Code:z">Misch-/andere Literaturformen</option>
		</select>
		</p>
        <p>
		<label>Biographie</label>
        <select name="limit" class="subtype" size="1">
            <option value="">Beliebig</option>
            <option value="Biography-code:y">Keine Biographie</option>
            <option value="Biography-code:a">Autobiographie</option>
            <option value="Biography-code:b">Einzelbiographie</option>
            <option value="Biography-code:c">Sammelbiographie</option>
            <option value="Biography-code:d">enthält biographische Daten</option>
		</select>
        </p>
        <p>
		<label>Illustration</label>
        <select name="limit" class="subtype" size="1">
            <option value="">Beliebig</option>
            <option value="Illustration-Code:a">Illustrationen</option>
            <option value="Illustration-Code:b">Karten</option>
            <option value="Illustration-Code:c">Portraits</option>
            <option value="Illustration-Code:d">Karten</option>
            <option value="Illustration-Code:e">Pläne</option>
            <option value="Illustration-Code:f">Tafeln</option>
            <option value="Illustration-Code:g">Musik</option>
            <option value="Illustration-Code:h">Faksimile</option>
            <option value="Illustration-Code:i">Wappen</option>
            <option value="Illustration-Code:j">Ahnentafel</option>
            <option value="Illustration-Code:k">Formen</option>
            <option value="Illustration-Code:l">Beispiele</option>
            <option value="Illustration-Code:m">Tonaufnahmen</option>
            <option value="Illustration-Code:n">Folien</option>
            <option value="Illustration-Code:o">Illuminierungen</option>
            <option value="Illustration-Code:y">keine Illustrationen</option>
        </select>
        </p>
		<p>
		<label>Inhalt</label>
		<select name="limit" class="subtype">
			<option value="" >Beliebig</option>
            <option value="ctype:a" >Bibliographie</option>
            <option value="ctype:b" >Katalog</option>
            <option value="ctype:c" >Index</option>
            <option value="ctype:d" >Zusammenfassung</option>
            <option value="ctype:e" >Wörterbuch</option>
            <option value="ctype:f" >Enzyklopädie</option>
            <option value="ctype:g" >Verzeichnis</option>
            <option value="ctype:h" >Projektbeschreibung</option>
            <option value="ctype:i" >Statistiken</option>
            <option value="ctype:j" >Programmiertes Textbuch</option>
            <option value="ctype:k" >Patent</option>
            <option value="ctype:l" >Standard</option>
            <option value="ctype:m" >Dissertation oder Thesis</option>
            <option value="ctype:n" >Gesetze und Gesetzgebung</option>
            <option value="ctype:o" >Numerische Tabelle</option>
            <option value="ctype:p" >Technischer Bericht</option>
            <option value="ctype:q" >Prüfungspapier</option>
            <option value="ctype:r" >Literaturüberichten/-rezensionen</option>
            <option value="ctype:s" >Abhandlungen</option>
            <option value="ctype:t" >Cartoons oder Comic Strips</option>
            <option value="ctype:z" >andere</option>
		</select>
        </p>
        <p>
		<label>Videotyp</label>
		<select name="limit" class="subtype">
            <option value="">Beliebig</option>
			<option value="Video-mt:a">Film</option>
			<option value="Video-mt:b">Sichtbare Projektion</option>
			<option value="Video-mt:c">Videoaufnahme</option>
		</select>
        </p>
		</fieldset>
		<fieldset>
		<legend>Zeitschriften</legend><p>
		<p>
		<label>Reihentyp</label>
		<select name="limit" class="subtype">
           <option value="">Beliebiger Typ</option>
           <option value="Type-Of-Serial:a">Periodika</option>
			<option value="Type-Of-Serial:b">Monographische Serien</option>
			<option value="Type-Of-Serial:c">Zeitung</option>
			<option value="Type-Of-Serial:z">Andere</option>
		</select>
		</p>
		<p>
		<label>Periodizität</label>
		<select name="limit" class="subtype">
			<option value="">Beliebig</option>
				<option value="Frequency-code:a">Täglich</option>
				<option value="Frequency-code:b">Halbwöchentlich</option>
				<option value="Frequency-code:c">Wöchentlich</option>
				<option value="Frequency-code:d">Vierzehntägig</option>
				<option value="Frequency-code:e">Halbmonatlich</option>
				<option value="Frequency-code:f">monatlich</option>
				<option value="Frequency-code:g">Zweimonatlich</option>
				<option value="Frequency-code:h">vierteljährlich</option>
				<option value="Frequency-code:i">Drei mal im Jahr</option>
				<option value="Frequency-code:j">Halbjährlich</option>
				<option value="Frequency-code:k">Jährlich</option>
				<option value="Frequency-code:l">Zweijährlich</option>
				<option value="Frequency-code:m">Dreijährlich</option>
				<option value="Frequency-code:n">Drei mal in der Woche</option>
				<option value="Frequency-code:o">Drei mal im Monat</option>
				<option value="Frequency-code:u">Unbekannt</option>
				<option value="Frequency-code:y">Ohne regelmäßiges Erscheinen</option>
				<option value="Frequency-code:i">Andere</option>
		</select>
		</p>
		<p>
		<label>Regelmäßigkeit</label>
		<select name="limit" class="subtype">
            <option value="">Irgendeine Gesetzmäßigkeit</option>
				<option value="Regularity-code:u">Unbekannt</option>
				<option value="Regularity-code:a">Regulär</option>
				<option value="Regularity-code:b">Unregelmäßig normiert</option>
				<option value="Regularity-code:y">irregulär</option>
		</select>
        </p>

        </fieldset>
		<fieldset>
		<legend>Bild</legend><p>
		<select name="limit" class="subtype">
				<option value="">Beliebig</option>
				<option value="Graphics-type:a">Kollage</option>
				<option value="Graphics-type:b">Zeichnung</option>
				<option value="Graphics-type:c">Malerei</option>
				<option value="Graphics-type:d">fotomechanische Reproduktion</option>
				<option value="Graphics-type:e">Fotonegativ</option>
				<option value="Graphics-type:f">Fotodruck</option>
				<option value="Graphics-type:h">Bild</option>
				<option value="Graphics-type:i">Druck</option>
				<option value="Graphics-type:k">Technische Zeichnung</option>
				<option value="Graphics-type:z">andere nicht-projizierter graphischer Typ</option>
		</select>
		<select name="limit" class="subtype">
            <option value="">Beliebig</option>
            <option value="Graphics-support:a">Leinwand</option>
            <option value="Graphics-support:b">Zeichenkarton</option>
            <option value="Graphics-support:c">Karton/Illustrationskarton</option>
            <option value="Graphics-support:d">Glas</option>
            <option value="Graphics-support:j">Putz</option>
            <option value="Graphics-support:k">Hartfaserplatte</option>
            <option value="Graphics-support:l">Porzellan</option>
            <option value="Graphics-support:m">Stein</option>
            <option value="Graphics-support:n">Holz</option>
            <option value="Graphics-support:u">unbekannt</option>
            <option value="Graphics-support:v">gemischt Sammlung</option>
            <option value="Graphics-support:e">Kunststoffe</option>
            <option value="Graphics-support:f">Haut</option>
            <option value="Graphics-support:g">Textil</option>
            <option value="Graphics-support:h">Metall</option>
            <option value="Graphics-support:i">Papier</option>
            <option value="Graphics-support:z">andere</option>
		</select>
        </p>

</fieldset>
</div>
