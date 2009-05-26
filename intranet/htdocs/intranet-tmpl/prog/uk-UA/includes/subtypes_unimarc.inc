<a onclick="javascript:if (document.getElementsByName('Coded_Fields')[0].style.display=='none'){document.getElementsByName('Coded_Fields')[0].style.display='block';} else {document.getElementsByName('Coded_Fields')[0].style.display='none';}">Coded information filters</a>
<div id="yui-b" style="display:none;" name="Coded_Fields" >
<!-- SUBTYPE LIMITS -->
		<fieldset>
		<legend>Coded Fields</legend>
		<p>
		<label>Аудиторія</label>
		<select name="limit" class="subtype">
            <option value="" SELECTED="selected" >Будь-яка</option>
			<option value="aud:a">юнацтво, в загальному</option>
			<option value="aud:b">pre-primary (0-5)</option>
			<option value="aud:c">Primary (5-8)</option>
			<option value="aud:d">children (9-14)</option>
			<option value="aud:e">Для молоді</option>
			<option value="aud:k">Повнолітній, поважний</option>
			<option value="aud:m">Повнолітній, в загальному</option>
			<option value="aud:u">Невідомо</option>
		</select>
		</p>
		<p>
		<label>Друк</label>
        <select name="limit" class="subtype">
			<option value="" selected="selected" >будь-який</option>
				<option value="Material-type:r">regular print</option>
				<option value="Material-type:d">large print</option>
				<option value="Material-type:e">newspaper format</option>
				<option value="Material-type:f">Braille or Moon script</option>
				<option value="Material-type:g">microprint</option>
				<option value="Material-type:h">hand-written</option>
				<option value="Material-type:i">multimedia</option>
				<option value="Material-type:j">mini-print</option>
				<option value="Material-type:z">other form of textual material</option>
		</select>
		</p>
		<p>
		<label>Feschrift Ind.</label>
		<select name="limit" class="subtype">
			<option value="" selected="selected" >Будь-яка</option>
            <option value="Literature-Code:a">fiction</option>
            <option value="Literature-Code:b">drama</option>
            <option value="Literature-Code:c">essays</option>
            <option value="Literature-Code:d">humour, satire</option>
            <option value="Literature-Code:e">letters</option>
            <option value="Literature-Code:f">short stories</option>
            <option value="Literature-Code:g">poetry</option>
            <option value="Literature-Code:h">speeches, oratory</option>
            <option value="Literature-Code:y">not a literary text</option>
            <option value="Literature-Code:z">multiple/other lit. forms</option>
		</select>
		</p>
        <p>
		<label>Біографія</label>
        <select name="limit" class="subtype" size="1">
            <option value="">Будь-яка</option>
            <option value="Biography-code:y">Не біографія</option>
            <option value="Biography-code:a">автобіографія</option>
            <option value="Biography-code:b">біографія особи</option>
            <option value="Biography-code:c">біографія колективу</option>
            <option value="Biography-code:d">contains biogr. data</option>
		</select>
        </p>
        <p>
		<label>Illustration</label>
        <select name="limit" class="subtype" size="1">
            <option value="">Будь-яка</option>
            <option value="Illustration-Code:a">illustrations</option>
            <option value="Illustration-Code:b">maps</option>
            <option value="Illustration-Code:c">portraits</option>
            <option value="Illustration-Code:d">charts</option>
            <option value="Illustration-Code:e">plans</option>
            <option value="Illustration-Code:f">plates</option>
            <option value="Illustration-Code:g">music</option>
            <option value="Illustration-Code:h">facsimiles</option>
            <option value="Illustration-Code:i">coats of arms</option>
            <option value="Illustration-Code:j">genealogical tables</option>
            <option value="Illustration-Code:k">forms</option>
            <option value="Illustration-Code:l">samples</option>
            <option value="Illustration-Code:m">звукові записи</option>
            <option value="Illustration-Code:n">transparencies</option>
            <option value="Illustration-Code:o">illuminations</option>
            <option value="Illustration-Code:y">no illustrations</option>
        </select>
        </p>
		<p>
		<label>Content</label>
		<select name="limit" class="subtype">
			<option value="" >Будь-яка</option>
            <option value="ctype:a" >bibliography</option>
            <option value="ctype:b" >catalogue</option>
            <option value="ctype:c" >index</option>
            <option value="ctype:d" >abstract</option>
            <option value="ctype:e" >dictionary</option>
            <option value="ctype:f" >енциклопедія</option>
            <option value="ctype:g" >directory</option>
            <option value="ctype:h" >project description</option>
            <option value="ctype:i" >statistics</option>
            <option value="ctype:j" >programmed text books</option>
            <option value="ctype:k" >patent</option>
            <option value="ctype:l" >standard</option>
            <option value="ctype:m" >dissertation or thesis</option>
            <option value="ctype:n" >закони та законодавство</option>
            <option value="ctype:o" >numeric table</option>
            <option value="ctype:p" >technical report</option>
            <option value="ctype:q" >examination paper</option>
            <option value="ctype:r" >literature surveys/reviews</option>
            <option value="ctype:s" >treaties</option>
            <option value="ctype:t" >cartoons or comic strips</option>
            <option value="ctype:z" >other</option>
		</select>
        </p>
        <p>
		<label>Video Types</label>
		<select name="limit" class="subtype">
            <option value="">Будь-яка</option>
			<option value="Video-mt:a">motion picture</option>
			<option value="Video-mt:b">visual projection</option>
			<option value="Video-mt:c">відео-запис</option>
		</select>
        </p>
		</fieldset>
		<fieldset>
		<legend>Серіальні видання</legend><p>
		<p>
		<label>Тип серіального видання</label>
		<select name="limit" class="subtype">
           <option value="">Any type</option>
           <option value="Type-Of-Serial:a">Періодичне видання</option>
			<option value="Type-Of-Serial:b">Монографічні серії</option>
			<option value="Type-Of-Serial:c">Newspaper</option>
			<option value="Type-Of-Serial:z">Other</option>
		</select>
		</p>
		<p>
		<label>Periodicity</label>
		<select name="limit" class="subtype">
			<option value="">Будь-яка</option>
				<option value="Frequency-code:a">Daily</option>
				<option value="Frequency-code:b">Semiweekly</option>
				<option value="Frequency-code:c">Weekly</option>
				<option value="Frequency-code:d">Biweekly</option>
				<option value="Frequency-code:e">Semimonthly</option>
				<option value="Frequency-code:f">Monthly</option>
				<option value="Frequency-code:g">Bimonthly</option>
				<option value="Frequency-code:h">Quarterly</option>
				<option value="Frequency-code:i">Three times a year</option>
				<option value="Frequency-code:j">Semiannual</option>
				<option value="Frequency-code:k">Annual</option>
				<option value="Frequency-code:l">Biannual</option>
				<option value="Frequency-code:m">Triennial</option>
				<option value="Frequency-code:n">Three times a week</option>
				<option value="Frequency-code:o">Three times a month</option>
				<option value="Frequency-code:u">Невідомо</option>
				<option value="Frequency-code:y">Without periodicity</option>
				<option value="Frequency-code:i">Other</option>
		</select>
		</p>
		<p>
		<label>Regularity</label>
		<select name="limit" class="subtype">
            <option value="">Any regularity</option>
				<option value="Regularity-code:u">Невідомо</option>
				<option value="Regularity-code:a">Regular</option>
				<option value="Regularity-code:b">Normalised irregular</option>
				<option value="Regularity-code:y">irregular</option>
		</select>
        </p>

        </fieldset>
		<fieldset>
		<legend>Picture</legend><p>
		<select name="limit" class="subtype">
				<option value="">Будь-яка</option>
				<option value="Graphics-type:a">collage</option>
				<option value="Graphics-type:b">drawing</option>
				<option value="Graphics-type:c">painting</option>
				<option value="Graphics-type:d">photomechanical reproduction</option>
				<option value="Graphics-type:e">photonegative</option>
				<option value="Graphics-type:f">photoprint</option>
				<option value="Graphics-type:h">picture</option>
				<option value="Graphics-type:i">print</option>
				<option value="Graphics-type:k">technical drawing</option>
				<option value="Graphics-type:z">other non-projected graphic type</option>
		</select>
		<select name="limit" class="subtype">
            <option value="">будь-який</option>
            <option value="Graphics-support:a">canvas</option>
            <option value="Graphics-support:b">bristol board</option>
            <option value="Graphics-support:c">cardboard/illustration board</option>
            <option value="Graphics-support:d">glass</option>
            <option value="Graphics-support:j">plaster</option>
            <option value="Graphics-support:k">hardboard</option>
            <option value="Graphics-support:l">porcelaine</option>
            <option value="Graphics-support:m">stone</option>
            <option value="Graphics-support:n">дерево</option>
            <option value="Graphics-support:u">unknown</option>
            <option value="Graphics-support:v">mixed collection</option>
            <option value="Graphics-support:e">synthetics</option>
            <option value="Graphics-support:f">skin</option>
            <option value="Graphics-support:g">textile</option>
            <option value="Graphics-support:h">metal</option>
            <option value="Graphics-support:i">paper</option>
            <option value="Graphics-support:z">others</option>
		</select>
        </p>

</fieldset>
</div>