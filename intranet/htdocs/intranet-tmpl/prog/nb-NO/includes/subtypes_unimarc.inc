<a onclick="javascript:if (document.getElementsByName('Coded_Fields')[0].style.display=='none'){document.getElementsByName('Coded_Fields')[0].style.display='block';} else {document.getElementsByName('Coded_Fields')[0].style.display='none';}">Kodede informasjonsfiltre</a>
<div id="yui-b" style="display:none;" name="Coded_Fields" >
<!-- SUBTYPE LIMITS -->
		<fieldset>
		<legend>Kodede felter</legend>
		<p>
		<label>Publikum</label>
		<select name="limit" class="subtype">
            <option value="" SELECTED="selected" >Alle</option>
			<option value="aud:a">juvenile, general</option>
			<option value="aud:b">pre-primary (0-5)</option>
			<option value="aud:c">Primary (5-8)</option>
			<option value="aud:d">Barn (9&ndash;14)</option>
			<option value="aud:e">Unge voksne</option>
			<option value="aud:k">Voksen, alvorlig</option>
			<option value="aud:m">Voksen, generelt</option>
			<option value="aud:u">Ukjent</option>
		</select>
		</p>
		<p>
		<label>Skriv ut</label>
        <select name="limit" class="subtype">
			<option value="" selected="selected" >alle</option>
				<option value="Material-type:r">regular print</option>
				<option value="Material-type:d">Stor skrift</option>
				<option value="Material-type:e">avisformat</option>
				<option value="Material-type:f">Blindeskrift eller måneskrift</option>
				<option value="Material-type:g">microprint</option>
				<option value="Material-type:h">håndskrevet</option>
				<option value="Material-type:i">multimedia</option>
				<option value="Material-type:j">mini-print</option>
				<option value="Material-type:z">andre typer tekstmateriale</option>
		</select>
		</p>
		<p>
		<label>Feschrift Ind.</label>
		<select name="limit" class="subtype">
			<option value="" selected="selected" >Alle</option>
            <option value="Literature-Code:a">skjønnlitteratur</option>
            <option value="Literature-Code:b">skuespill</option>
            <option value="Literature-Code:c">essay</option>
            <option value="Literature-Code:d">humor, satire</option>
            <option value="Literature-Code:e">Brev</option>
            <option value="Literature-Code:f">noveller</option>
            <option value="Literature-Code:g">poetry</option>
            <option value="Literature-Code:h">taler, lydmateriale</option>
            <option value="Literature-Code:y">ikke en litterær tekst</option>
            <option value="Literature-Code:z">flere/andre litterære sjangere</option>
		</select>
		</p>
        <p>
		<label>Biografi</label>
        <select name="limit" class="subtype" size="1">
            <option value="">Alle</option>
            <option value="Biography-code:y">Ikke en biografi</option>
            <option value="Biography-code:a">selvbiografi</option>
            <option value="Biography-code:b">individuell biografi</option>
            <option value="Biography-code:c">fellesbiografi</option>
            <option value="Biography-code:d">inneholder biografisk informasjon</option>
		</select>
        </p>
        <p>
		<label>Illustrasjon</label>
        <select name="limit" class="subtype" size="1">
            <option value="">Alle</option>
            <option value="Illustration-Code:a">Illustrasjoner</option>
            <option value="Illustration-Code:b">Kart</option>
            <option value="Illustration-Code:c">stående</option>
            <option value="Illustration-Code:d">diagrammer</option>
            <option value="Illustration-Code:e">plans</option>
            <option value="Illustration-Code:f">plates</option>
            <option value="Illustration-Code:g">musikk</option>
            <option value="Illustration-Code:h">faksimiler</option>
            <option value="Illustration-Code:i">våpenskjold</option>
            <option value="Illustration-Code:j">slektstabeller</option>
            <option value="Illustration-Code:k">skjemaer</option>
            <option value="Illustration-Code:l">prøve</option>
            <option value="Illustration-Code:m">lydopptak</option>
            <option value="Illustration-Code:n">transparenter</option>
            <option value="Illustration-Code:o">illuminations</option>
            <option value="Illustration-Code:y">uten illustrasjoner</option>
        </select>
        </p>
		<p>
		<label>Innhold</label>
		<select name="limit" class="subtype">
			<option value="" >Alle</option>
            <option value="ctype:a" >bibliografi</option>
            <option value="ctype:b" >Samling</option>
            <option value="ctype:c" >Register</option>
            <option value="ctype:d" >sammendrag:</option>
            <option value="ctype:e" >ordliste</option>
            <option value="ctype:f" >leksikon</option>
            <option value="ctype:g" >katalog</option>
            <option value="ctype:h" >prosjektbeskrivelse</option>
            <option value="ctype:i" >statistikk</option>
            <option value="ctype:j" >programmed text books</option>
            <option value="ctype:k" >patent</option>
            <option value="ctype:l" >standard</option>
            <option value="ctype:m" >doktoravhandling eller oppgave</option>
            <option value="ctype:n" >lover og lovgivning</option>
            <option value="ctype:o" >numerisk tabell</option>
            <option value="ctype:p" >teknisk rapport</option>
            <option value="ctype:q" >eksamenspapirer</option>
            <option value="ctype:r" >litteraturundersøkelser/anmeldelser</option>
            <option value="ctype:s" >treaties</option>
            <option value="ctype:t" >Tegneserier</option>
            <option value="ctype:z" >andre</option>
		</select>
        </p>
        <p>
		<label>Videotype</label>
		<select name="limit" class="subtype">
            <option value="">Alle</option>
			<option value="Video-mt:a">bevegelig bilde</option>
			<option value="Video-mt:b">visuelle projeksjoner</option>
			<option value="Video-mt:c">videoopptak</option>
		</select>
        </p>
		</fieldset>
		<fieldset>
		<legend>Periodika</legend><p>
		<p>
		<label>Periodikatype</label>
		<select name="limit" class="subtype">
           <option value="">Alle typer</option>
           <option value="Type-Of-Serial:a">Periodisk</option>
			<option value="Type-Of-Serial:b">Biografiserie</option>
			<option value="Type-Of-Serial:c">Avis</option>
			<option value="Type-Of-Serial:z">Andre</option>
		</select>
		</p>
		<p>
		<label>Periodisitet (oppgitt utgivelsesfrekvens)</label>
		<select name="limit" class="subtype">
			<option value="">Alle</option>
				<option value="Frequency-code:a">Daglig</option>
				<option value="Frequency-code:b">To ganger i uka</option>
				<option value="Frequency-code:c">Ukentlig</option>
				<option value="Frequency-code:d">Annenhver uke</option>
				<option value="Frequency-code:e">To ganger i måneden</option>
				<option value="Frequency-code:f">Månedlig</option>
				<option value="Frequency-code:g">Annenhver måned</option>
				<option value="Frequency-code:h">Kvartalsvis</option>
				<option value="Frequency-code:i">Tre ganger per år</option>
				<option value="Frequency-code:j">Hvert halvår</option>
				<option value="Frequency-code:k">Årlig</option>
				<option value="Frequency-code:l">Annethvert år</option>
				<option value="Frequency-code:m">Hvert tredje år</option>
				<option value="Frequency-code:n">Tre ganger i uka</option>
				<option value="Frequency-code:o">Tre ganger i måneden</option>
				<option value="Frequency-code:u">Ukjent</option>
				<option value="Frequency-code:y">Fullstendig uregelmessig</option>
				<option value="Frequency-code:i">Andre</option>
		</select>
		</p>
		<p>
		<label>Utgivelsesmønster</label>
		<select name="limit" class="subtype">
            <option value="">Alle utgivelsesmønstre</option>
				<option value="Regularity-code:u">Ukjent</option>
				<option value="Regularity-code:a">Vanlig</option>
				<option value="Regularity-code:b">Normalised irregular</option>
				<option value="Regularity-code:y">irregular</option>
		</select>
        </p>

        </fieldset>
		<fieldset>
		<legend>Bilde</legend><p>
		<select name="limit" class="subtype">
				<option value="">Alle</option>
				<option value="Graphics-type:a">kollasj</option>
				<option value="Graphics-type:b">tegning</option>
				<option value="Graphics-type:c">maleri</option>
				<option value="Graphics-type:d">fotomekanisk reproduksjon</option>
				<option value="Graphics-type:e">bildenegativ</option>
				<option value="Graphics-type:f">bildetrykk</option>
				<option value="Graphics-type:h">bilde</option>
				<option value="Graphics-type:i">skriv ut</option>
				<option value="Graphics-type:k">teknisk tegning</option>
				<option value="Graphics-type:z">other non-projected graphic type</option>
		</select>
		<select name="limit" class="subtype">
            <option value="">alle</option>
            <option value="Graphics-support:a">lerret</option>
            <option value="Graphics-support:b">bristol-papir</option>
            <option value="Graphics-support:c">papirbrett/tegnebrett</option>
            <option value="Graphics-support:d">glass</option>
            <option value="Graphics-support:j">gips</option>
            <option value="Graphics-support:k">trefolie</option>
            <option value="Graphics-support:l">porselen</option>
            <option value="Graphics-support:m">stein</option>
            <option value="Graphics-support:n">tre</option>
            <option value="Graphics-support:u">ukjent</option>
            <option value="Graphics-support:v">blandede samlinger</option>
            <option value="Graphics-support:e">syntetisk</option>
            <option value="Graphics-support:f">skinn</option>
            <option value="Graphics-support:g">tekstil</option>
            <option value="Graphics-support:h">metall</option>
            <option value="Graphics-support:i">papir</option>
            <option value="Graphics-support:z">annet</option>
		</select>
        </p>

</fieldset>
</div>
