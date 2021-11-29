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
Posso selezionare tutti gli elementi _discendenti_ di un elemento, mettendo semplicemente uno spazio. Per discendenti si intende figli, nipoti, pro-nipoti, etc.

Per selezionare solo i paragrafi all'interno dell'elemento con id pari a news:

```css
#news p {}
```

### Figlio
Per selezionare solo gli elementi che sono _figli diretti_ di un altro elemento uso il simbolo `>`:

Per esempio se voglio selezionare solo i paragrafi immediatamente dentro #news (e non i paragrafi all'interno di altri sotto-elementi), posso scrivere:

```css
#news > p {}
```


### Classi, id o combinatori: quali usare?
Spesso ci si chiede: meglio aggiungere una classe o un id agli elementi che voglio selezionare, oppure trovarli con un combinatore?

Come al solito, dipende, non c'è una risposta univoca. Alcune domande potrebbero essere:
- qual è il modo più semplice?
- come potrebbe cambiare il codice della pagina in futuro?
- qual è la specificità della regola?

L'esperienza in questi casi è fondamentale. Quindi... esercitatevi!

## Specificità dei selettori
I selettori hanno ognuno una propria specificità. Di seguito sono elencati dalla specificità più bassa alla più alta:

- Tag (es. `h1`)
- Classi (es. `.btn-green`)
- ID (es. `#avatar`)

In altre parole, come intuibile, le regole selezionate con l'ID avranno la precedenza sulle altre, seguite da quelle selezionate con le classi e poi dai generici tag. Il selettore universale ha specificità nulla (più bassa di tutte).

Ad esempio, ipotizziamo di avere il seguente paragrafo:
```html
<p id="esempio" class="esempio">Ciao</p>
```

con il seguente CSS:
```css
#esempio { 
    background-color: red;
}

p {
    background-color: blue;
}

.esempio { 
    background-color: green;
}
```

Quale colore assumerà il paragrafo? La regola con l'ID ha la specificità più alta e verrà quindi applicata:

<div id="true-html">
<p id="esempio" class="esempio">Ciao</p>
</div>
<style>
#true-html>#esempio { 
    background-color: red;
}
#true-html>.esempio { 
    background-color: green;
}

#true-html>p {
    background-color: blue;
}
</style>

> In caso di selettori combinati fra loro, esiste una formula per calcolare la specificità, si rimanda [qui](https://www.w3schools.com/css/css_specificity.asp) per maggiori dettagli.

> Per vedere tutte le regole applicate ad un certo elemento potete usare i devTools di Chrome o Firefox; trovate le regole nel tab "style". Per indagare possibili conflitti tra regole, c'è [questa](https://developer.chrome.com/docs/devtools/css/overrides/) guida ufficiale di Chrome.


## Riepilogo
Ricapitolando, i selettori di base sono di 3 tipi:
- tag: non hanno nessun prefisso, selezionano tutti gli elementi con il tag selezionato. Ad esempio `div {background-color:red}` colora di rosso lo sfondo di tutti gli elementi con il tag div
- id: ha come prefisso `#` (cancelletto), seleziona l'elemento che ha come attributo id il valore specificato. Ad esempio `#my-title {font-weight:bold}` rende grassetto l'elemento che ha come attributo `id="my-title"`
- class: ha come prefisso `.` (punto), seleziona tutti gli elementi che hanno come attributo il valore specificato. Ad esempio `.small-images {width=5%}` imposta la larghezza di tutti gli elementi che hanno come attributo `class="small-images` al 5% della larghezza dello schermo.

Esistono molti altri modi di selezionare gli elementi, ma si basano tutti su questi concetti base. Per maggiori informazioni potete consultare [questa](https://www.w3schools.com/cssref/css_selectors.asp) pagina.
