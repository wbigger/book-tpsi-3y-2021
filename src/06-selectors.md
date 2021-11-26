# Selettori
Finora nei selettori abbiamo utilizzato solo il nome del tag. In questo modo, abbiamo selezionato tutti i tag con quel nome nella pagina.

Di solito però vogliamo essere più precisi, selezionando solo alcuni elementi. Per fare questo il CSS mette a disposizione due attributi: `id` e `class`. 

## Attributo id
Si usa l'attributo **id** quando voglio selezionare un **elemento unico nella pagina**. Ad esempio, se tra tutte le immagini presenti nella pagina voglio selezionare quella relativa all'avatar (unica all'interno della pagina), potrei scrivere:

```html
<img id="avatar" src="myavatar.png">
```

Per selezionare l'elemento con un certo id, si usa la notazione con il cancelletto '#' (si pronuncia hash, in inglese).

```css
#avatar {
    width: 10%;
}
```

## Attributo class
Si usa **class** quando vogliamo individuare **più elementi** che hanno una caratteristica comune. Ad esempio, se voglio selezionare tutti i pulsanti all'interno della mia pagina che devono essere di colore verde, potrei scrivere:

```html
<button class="btn-green" >...</button>
```

Per selezionare tutti gli elementi con una certa classe, si usa la notazione con il punto '.' (si pronuncia dot, in inglese).

```css
.btn-green {
    background-color: green;
}
```

## Selettore universale
Per selezionare tutti gli elementi della pagina, esiste il **selettore universale** (universal selector), che si rappresenta con l'asterisco `*` (star, in inglese).

```css
# Cambia il font di tutti gli elementi della pagina in Times New Roman.
* {
    font-style: font-family: "Times New Roman", Times, serif;
}
```
## Combinare i selettori fra loro
I selettori visti finora possono essere combinati tra loro per selezionare in maniera ancora più precisa. Questo è spesso utile se non si vogliono o non si possono aggiungere classi e id all'HTML.

Di seguito alcuni modi più comuni per combinare. Per la lista completa, come al solito si rimanda alla [pagina dedicata](https://www.w3schools.com/css/css_combinators.asp) su w3schools.

### Combinazione semplice
Il modo più semplice di combinare i selettori è scrivere un tag seguito dalla classe, senza spazi. Ad esempio se voglio selezionare tutti i paragrafi con la classe `green`:

```css
p.green {}
```

Se voglio invece mettere più selettori insieme, posso separarli da virgola. Ad esempio se voglio selezionare tutti i titoli h1 e h2:

```css
h1, h2 {}
```

### Discendente
Posso selezionare tutti gli elementi _discendenti_ di un elemento, mettendo semplicemente uno spazio. Per discendenti si intende figli, nipoti, pro-nipiti, etc.

Per selezionare solo i paragrafi all'interno dell'elemento con id pari a news:

```css
#news p {}
```

### Figlio
Per selezionare solo gli elementi che sono _figli diretti_ di un altro elemento uso il simbolo `>`:

```css
#news p {}
```

In questo caso selezionerò solo i paragrafi immediatamente dentro #news, e non eventuali paragrafi all'interno di sotto-elementi.

### Classi o combinatori: quali usare?
Spesso ci si chiede: meglio aggiungere una classe o un id agli elementi che voglio selezionare, oppure trovarli con un combinatore?

Come al solito, dipende, non c'è una risposta univoca. Alcune domande potrebbero essere:
- qual è il modo più semplice?
- come potrebbe cambiare il codice della pagina in futuro?
- qual è la specificità della regola? considerate che i combinatori non influiscono sulla specificità

L'esperienza in questi casi è fondamentale. Quindi... esercitatevi!

## Unità di misura
Nelle dichiarazioni CSS, ci sono molti modi di specificare le dimensioni sullo schermo. Ne vediamo alcune fra le più comuni. Per maggiori dettagli vedi [qui](https://www.w3schools.com/cssref/css_units.asp).

### Pixels
Il modo più semplice è specificare il numero di pixels:

```css
 p {
    margin-top: 50px;
}
```

Questa unità può essere adatta per fissare degli elementi nello schermo, come ad esempio bottoni fluttuanti, o per specificare la distanza tra elementi vicini. Però non è responsive: al cambiare della dimensione dello schermo la distanza rimane sempre la stessa, e questo spesso non è quello che vogliamo.

### Percentuale
Si può impostare la dimensione come percentuale dell'elemento _contenitore_. Ad esempio, se voglio che il mio paragrafo occupi il 50% della dimensione del proprio contenitore, posso scrivere:

```css
p {
    width: 50%;
}
```

In questo caso però devo stare attento alla dimensione del contenitore: se il contenitore si adatta al contenuto, ed il contenuto si adatta al contenitore in percentuale, c'è qualcosa che non va. Devo quindi fare sempre attenzione che il contenitore abbia una grandezza nota al browser, per esempio impostando una dimensione fissa in pixel.

### Relativo alla dimensione del testo
In molti casi può essere utile avere delle dimensioni che si adattano alla grandezza del testo; in questo caso si usa `rem`:

```css
#La dimensione del testo di questo paragrafo è il doppio rispetto a quella base.
p.big {
    font-size: 2rem;
}
```

Le dimensioni relative al testo sono molto utili anche perché scalano automaticamente quando si ingrandisce o rimpicciolisce il testo della pagina.

## Riepilogo
Ricapitolando, i selettori di base sono di 3 tipi:
- tag: non hanno nessun prefisso, selezionano tutti gli elementi con il tag selezionato. Ad esempio `div {background-color:red}` colora di rosso lo sfondo di tutti gli elementi con il tag div
- id: ha come prefisso `#` (cancelletto), seleziona l'elemento che ha come attributo id il valore specificato. Ad esempio `#my-title {font-weight:bold}` rende grassetto l'elemento che ha come attributo `id="my-title"`
- class: ha come prefisso `.` (punto), seleziona tutti gli elementi che hanno come attributo il valore specificato. Ad esempio `.small-images {width=5%}` imposta la larghezza di tutti gli elementi che hanno come attributo `class="small-images` al 5% della larghezza dello schermo.

Esistono molti altri modi di selezionare gli elementi, ma si basano tutti su questi concetti base. Per maggiori informazioni potete consultare [questa](https://www.w3schools.com/cssref/css_selectors.asp) pagina.
