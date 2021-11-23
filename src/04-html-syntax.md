# Sintassi HTML

Dopo essersi riscaldati un po' con un "splash project", vediamo di razionalizzare ed assimilare correttamente quello che abbiamo fatto.

Una pagina HTML è formata da un insieme di _elementi_. Prendiamo ad esempio il titolo.

```html
<h1>Error 503</h1>
```

Tutto insieme questo è chiamato **elemento**. 

Scomponiamo questo elemento nelle sue parti.
- `<h1>`: **tag di apertura**
- `Error 503`: **contenuto**
- `</h1>`: **tag di chiusura**

## Attributi
Un elemento può avere uno o più attributi, ad esempio:
```html
<a href="demo.html">questo è un link</a>
```

Gli attributi servono per specificare caratteristiche dell'elemento a cui si riferiscono. Ad esempio, l'attributo `src` serve per specificare il percorso dell'immagine da visualizzare.

Ogni attributo consiste di un **nome** ed un **valore** separati da un `=`. Il valore può essere senza apici se non contiene nessun carattere speciale o spazio, altrimenti deve avere apici singoli o doppi. In ogni caso, per convenzione, si preferisce mettere sempre gli apici intorno al valore degli attributi.

Alcuni attributi possono non avere nessun valore, come nell'esempio successivo. In questo caso si parla di _attributi booleani_.
```html
<input name="address" disabled>
```
## Void elements
Alcuni elementi possono non avere un contenuto, come nel caso seguente.

```html
<img src="logo.png">
```

Gli elementi senza contenuto non hanno un tag di chiusura. Questo tipo di elementi si chiama [void element](https://html.spec.whatwg.org/#void-elements). Al link precedente trovate la lista esatta di quali elementi sono void.

> Nota: HTML5 non richiede nessuna sintassi particolare per chiudere gli elementi void. Per retro-compatibilità con le precedenti versioni di HTML, comunque, è permesso chiudere il tag anche con '/>'

## Elementi annidati
Gli elementi possono essere annidati fra loro.

```html
<p><span>Hello World</span></p>
```

Qui possiamo vedere che:
- `<span>Hello World</span>` è il contenuto dell'elemento con tag `<p>` (paragrafo)
- `Hello World` è il contenuto dell'elemento `span`

Non può mai succedere invece che gli elementi si intersechino fra di loro, come nell'esempio che segue.
```html
<p><span>Questo è mooolto sbagliato!</p></span>
```
## Doctype, head, body
La pagina error404 che abbiamo scritto finora funziona, ma manca di alcune informazioni importanti che aiutano il browser a visualizzare correttamente il contenuto della pagina web. Vediamoli ora nel dettaglio.

### Doctype declaration
Tutte le pagine HTML devono cominciare con una "dichiarazione" (declaration) che dice esplicitamente al browser che quella che sta leggendo è effettivamente una pagina HTML. Il browser prova ad indovinarlo dall'estensione, ma è richiesto che lo si scriva esplicitamente, per evitare errori.

```html
<!DOCTYPE html>
```

Questa dichiarazione è simile ad un tag, ma con l'aggiunta di un punto esclamativo subito dopo la parentesi angolare aperta. Questa strategia di usare un punto esclamativo (_bang_ nel dialetto geek) per specificare il tipo di file è molto usata nei linguaggi di programmazione, e la vedrete anche negli script per la shell.

### Tag <html>
Come abbiamo detto nel capitolo precedente, la struttura di una pagina HTML è come un albero, che parte da un tronco. Questo tronco è rappresentato dal tag `<html>`.

```html
<html>
</html>
```

Il tag html ha l'attributo "lang" che è importante specificare per permettere al browser di capire in che lingua è scritta la pagina, ad esempio italiano, inglese, cinese, etc.

```html
<html lang="it">
</html>
```

Dal tag html si dipartono due rami: `<head>` e `<body>`.

### Tag <head>
Il tag `<head>` contiene tutti i **metadati**. I metadati sono dei dati che riguardano la pagina, ma non vengono visualizzati direttamente all'interno di essa. Vediamo i più importanti:
- `<meta charset="UTF-8">`: specifica la codifica dei caratteri; in generale sarà sempre UTF-8 (unicode)
- `<meta name="viewport" content="width=device-width, initial-scale=1.0">`: rende il sito responsive, ovvero capace di adattare il contenuto alle dimensioni dello schermo
- `<title>Document</title>`: specifica il titolo della pagina, che ad esempio nei browser viene visualizzato all'interno del tab in alto

Altri metadati che possono essere inclusi nel tag `<head>` sono ad esempio lo stile e, in alcuni casi, gli script.

### Tag <body>
All'interno del tag body troviamo tutti gli elementi che verranno effettivamente _renderizzati_ all'interno della nostra pagina: intestazioni, paragrafi, immagini, suoni, video, barre di navigazione, sezioni, etc. etc.

