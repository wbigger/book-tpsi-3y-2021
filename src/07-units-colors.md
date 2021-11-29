# Unità e colori

## Unità di misura
Nelle dichiarazioni CSS, ci sono molti modi di specificare le dimensioni sullo schermo. Ne vediamo alcune fra le più comuni. Per maggiori dettagli vedi [qui](https://www.w3schools.com/cssref/css_units.asp).

### Pixels (px)
Il modo più semplice è specificare il numero di pixels:

```css
 p {
    margin-top: 50px;
}
```

Questa unità può essere adatta per fissare degli elementi nello schermo, come ad esempio bottoni fluttuanti, o per specificare la distanza tra elementi vicini. Però non è responsive: al cambiare della dimensione dello schermo la distanza rimane sempre la stessa, e questo spesso non è quello che vogliamo.

### Percentuale (%)
Si può impostare la dimensione come percentuale dell'elemento _contenitore_. Ad esempio, se voglio che il mio paragrafo occupi il 50% della dimensione del proprio contenitore, posso scrivere:

```css
p {
    width: 50%;
}
```

### Relativo alla dimensione del testo (rem)
In molti casi può essere utile avere delle dimensioni che si adattano alla grandezza del testo; in questo caso si usa `rem`:

```css
/* La dimensione del testo di questo paragrafo è il doppio rispetto a quella base. */
p.big {
    font-size: 2rem;
}
```

Le dimensioni relative al testo sono molto utili anche perché scalano automaticamente quando si ingrandisce o rimpicciolisce il testo della pagina.

## Colori
Per scegliere un colore, abbiamo diverse possibilità.

### Nome del colore
Possiamo scegliere un colore usando il nome della paletta CSS.

```css
p {
    background-color: lightgreen;
}
```
<div style="background-color: lightgreen;">Sono verde chiaro</div>

Potete vedere la lista completa dei colori supportata dalla maggior parte dei browser [qui](https://www.w3schools.com/colors/colors_names.asp).

### RGB
Un altro modo è specificare le componenti RGB:

```css
p {
    background-color: rgb(200,200,200);
}
```

<div style="background-color: rgb(200,200,200);">Sono grigio chiaro</div>

Questo è particolarmente utile quando si usa ad esempio il color-picker per prendere un colore dallo schermo o da una immagine.

### Hex
Un altro modo molto usato nel web design, è usare l'RGB ma con valori esadecimali anziché decimali. Le tre cifre RGB in esadecimale si scrivono una di seguito all'altra, senza spazi, precedute da un cancelletto `#`.

```css
p {
    background-color: #0000FF;
}
```
<div style="background-color: #0000FF;color:white">Sono blu!</div>

Ricordiamo che un byte esadecimale va da 00 (spento) a FF (255-tutto acceso).

La conversione tra RGB decimale ed esadecimale è un semplice calcolo matematico, quindi è una questione di comodità e preferenze.

> Per convertire tra decimale ed esadecimale, potete usare [questo](https://www.w3schools.com/colors/colors_hexadecimal.asp).