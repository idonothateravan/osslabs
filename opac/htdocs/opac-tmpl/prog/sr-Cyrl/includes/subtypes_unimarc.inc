    <fieldset>
    <legend>Kodirana polja</legend>
    <p>
    <label>Publika</label>
    <select name="limit" class="subtype">
            <option value="" SELECTED="selected" >Bilo koji</option>
      <option value="aud:a">mladi, opste</option>
      <option value="aud:b">predskolci (0-5)</option>
      <option value="aud:c">Osnovni (5-8)</option>
      <option value="aud:d">deca (9-14)</option>
      <option value="aud:e">Mladi odrasli</option>
      <option value="aud:k">Za odrasle, ozbiljno</option>
      <option value="aud:m">Za odrasle, Opste</option>
      <option value="aud:u">Nepoznato</option>
    </select>
    </p>
    <p>
    <label>Stampa</label>
        <select name="limit" class="subtype">
      <option value="" selected="selected" >bilo koji</option>
        <option value="Material-type:r">normalna stampa</option>
        <option value="Material-type:d">krupna stampa</option>
        <option value="Material-type:e">novinski format</option>
        <option value="Material-type:f">Brajeva ili Munova azbuka</option>
        <option value="Material-type:g">mikro-stampa</option>
        <option value="Material-type:h">rukopis</option>
        <option value="Material-type:i">multimedija</option>
        <option value="Material-type:j">mini-stampa</option>
        <option value="Material-type:z">druga vrsta tekstualnog materijala</option>
    </select>
    </p>
    <p>
    <label>Feschrift Ind.</label>
    <select name="limit" class="subtype">
      <option value="" selected="selected" >Bilo koji</option>
            <option value="Literature-Code:a">knjizevnost</option>
            <option value="Literature-Code:b">drama</option>
            <option value="Literature-Code:c">eseji</option>
            <option value="Literature-Code:d">humor, satira</option>
            <option value="Literature-Code:e">pisma</option>
            <option value="Literature-Code:f">kratke price</option>
            <option value="Literature-Code:g">poezija</option>
            <option value="Literature-Code:h">govori, oratorstvo</option>
            <option value="Literature-Code:y">nije knjizevni tekst</option>
            <option value="Literature-Code:z">vise/druge forme literature</option>
    </select>
    </p>
        <p>
    <label>Biografija</label>
        <select name="limit" class="subtype" size="1">
            <option value="">Bilo koji</option>
            <option value="Biography-code:y">Nije biografija</option>
            <option value="Biography-code:a">autobiografija</option>
            <option value="Biography-code:b">individualna biografija</option>
            <option value="Biography-code:c">kolektivna biografija</option>
            <option value="Biography-code:d">sadrzi biografske informacije</option>
    </select>
        </p>
        <p>
    <label>Ilustracija</label>
        <select name="limit" class="subtype" size="1">
            <option value="">Bilo koji</option>
            <option value="Illustration-Code:a">ilustracije</option>
            <option value="Illustration-Code:b">mape</option>
            <option value="Illustration-Code:c">portreti</option>
            <option value="Illustration-Code:d">grafikoni</option>
            <option value="Illustration-Code:e">planovi</option>
            <option value="Illustration-Code:f">ploce (ili tanjiri)</option>
            <option value="Illustration-Code:g">muzika</option>
            <option value="Illustration-Code:h">faksimili</option>
            <option value="Illustration-Code:i">grbovi</option>
            <option value="Illustration-Code:j">geneoloska stabla</option>
            <option value="Illustration-Code:k">obrasci</option>
            <option value="Illustration-Code:l">uzorci</option>
            <option value="Illustration-Code:m">zvucni zapisi</option>
            <option value="Illustration-Code:n">folije</option>
            <option value="Illustration-Code:o">iluminacije</option>
            <option value="Illustration-Code:y">bez ilustracija</option>
        </select>
        </p>
    <p>
    <label>Sadrzaj</label>
    <select name="limit" class="subtype">
      <option value="" >Bilo koji</option>
            <option value="ctype:a" >bibliografija</option>
            <option value="ctype:b" >katalog</option>
            <option value="ctype:c" >indeks</option>
            <option value="ctype:d" >abstrakt</option>
            <option value="ctype:e" >recnik</option>
            <option value="ctype:f" >enciklopedija</option>
            <option value="ctype:g" >imenik</option>
            <option value="ctype:h" >opis projekta</option>
            <option value="ctype:i" >statistika</option>
            <option value="ctype:j" >udzbenici</option>
            <option value="ctype:k" >patent</option>
            <option value="ctype:l" >standard</option>
            <option value="ctype:m" >disertacija ili teza</option>
            <option value="ctype:n" >zakoni i regulativa</option>
            <option value="ctype:o" >numericka tablica</option>
            <option value="ctype:p" >tehnicki izvestaj</option>
            <option value="ctype:q" >ispitni rad</option>
            <option value="ctype:r" >pregledi literature/kritike</option>
            <option value="ctype:s" >paktovi</option>
            <option value="ctype:t" >stripovi ili crtaci</option>
            <option value="ctype:z" >drugo</option>
    </select>
        </p>
        <p>
    <label>Tipovi videa</label>
    <select name="limit" class="subtype">
            <option value="">Bilo koji</option>
      <option value="Video-mt:a">film</option>
      <option value="Video-mt:b">vizuelna projekcija</option>
      <option value="Video-mt:c">video snimak</option>
    </select>
        </p>
    </fieldset>
    <fieldset>
    <legend>Serijske publikacije</legend><p>
    <p>
    <label>Tip serijske publikacije</label>
    <select name="limit" class="subtype">
           <option value="">Bilo koji tip</option>
           <option value="Type-Of-Serial:a">Periodicna publikacija</option>
      <option value="Type-Of-Serial:b">Monografske serije</option>
      <option value="Type-Of-Serial:c">Novine</option>
      <option value="Type-Of-Serial:z">Drugo</option>
    </select>
    </p>
    <p>
    <label>Periodicnost</label>
    <select name="limit" class="subtype">
      <option value="">Bilo koji</option>
        <option value="Frequency-code:a">Dnevno</option>
        <option value="Frequency-code:b">Polunedeljno</option>
        <option value="Frequency-code:c">Nedeljno</option>
        <option value="Frequency-code:d">Dvonedeljno</option>
        <option value="Frequency-code:e">Polumesecno</option>
        <option value="Frequency-code:f">Mesecno</option>
        <option value="Frequency-code:g">Dvomesecno</option>
        <option value="Frequency-code:h">Tromesecno</option>
        <option value="Frequency-code:i">Tri puta godisnje</option>
        <option value="Frequency-code:j">Polugodisnje</option>
        <option value="Frequency-code:k">Godisnji/e</option>
        <option value="Frequency-code:l">Polugodisnje</option>
        <option value="Frequency-code:m">Trogodisnje</option>
        <option value="Frequency-code:n">Tri puta nedeljno</option>
        <option value="Frequency-code:o">Tri puta mesecno</option>
        <option value="Frequency-code:u">Nepoznato</option>
        <option value="Frequency-code:y">Bez uzestalosti izlazenja</option>
        <option value="Frequency-code:i">Drugo</option>
    </select>
    </p>
    <p>
    <label>Ucestalost</label>
    <select name="limit" class="subtype">
            <option value="">Bilo koja ucestalost izlazenja</option>
        <option value="Regularity-code:u">Nepoznato</option>
        <option value="Regularity-code:a">Normalno</option>
        <option value="Regularity-code:b">Normalizovani defektan</option>
        <option value="Regularity-code:y">neredovno</option>
    </select>
        </p>

        </fieldset>
    <fieldset>
    <legend>Slika</legend><p>
    <select name="limit" class="subtype">
        <option value="">Bilo koji</option>
        <option value="Graphics-type:a">kolaz</option>
        <option value="Graphics-type:b">crtez</option>
        <option value="Graphics-type:c">slika</option>
        <option value="Graphics-type:d">foto-mehanicka reprodukcija</option>
        <option value="Graphics-type:e">foto-negativ</option>
        <option value="Graphics-type:f">foto-stampa</option>
        <option value="Graphics-type:h">slika</option>
        <option value="Graphics-type:i">stampa</option>
        <option value="Graphics-type:k">tehnicki crtez</option>
        <option value="Graphics-type:z">druga ne-projektorska vrsta slike</option>
    </select>
    <select name="limit" class="subtype">
            <option value="">bilo koji</option>
            <option value="Graphics-support:a">platno</option>
            <option value="Graphics-support:b">hamer</option>
            <option value="Graphics-support:c">karton/ploca za ilustracije</option>
            <option value="Graphics-support:d">staklo</option>
            <option value="Graphics-support:j">gips</option>
            <option value="Graphics-support:k">sperploca</option>
            <option value="Graphics-support:l">porcelan</option>
            <option value="Graphics-support:m">kamen</option>
            <option value="Graphics-support:n">drvo</option>
            <option value="Graphics-support:u">nepoznat(o/a)</option>
            <option value="Graphics-support:v">mesovita kolekcija</option>
            <option value="Graphics-support:e">sintetika</option>
            <option value="Graphics-support:f">koza</option>
            <option value="Graphics-support:g">tekstil</option>
            <option value="Graphics-support:h">metal</option>
            <option value="Graphics-support:i">papir</option>
            <option value="Graphics-support:z">drugi</option>
    </select>
        </p>
