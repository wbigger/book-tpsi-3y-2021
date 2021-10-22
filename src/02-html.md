# HTML

## Breve storia
Tutta la storia del web ebbe inizio con delle pagine rappresentate da un singolo file con estensione `.html`. Questo file comprendeva tutte le informazioni necessarie per visualizzare la pagina. Nei primi anni '90 del secolo scorso, le pagine erano statiche e lo stile per visualizzare gli elementi non era distinto dalle altre informazioni della pagina.

Tim Berners Lee dal 1989 al 1993 lavorò in team per proporre le nuove tecnologie web come uno standard di Internet, e finalmente nel 1993 divenne a tutti gli effetti uno standard IETF (Internet Engineering Task Force). Nell'ottobre 1994 Berners-Lee fonda il World Wide Web Consortium (W3C) al Massachusetts Institute of Technology di Boston.

Il lavoro del consorzio continua rilasciando nuove versioni a ritmo serrato, introducendo per esempio il CSS nel 1996, fino alla versione 4.01 del 2001. A questo punto si voleva dare una grossa svolta alle tecnologie web, abbandonando l'HTML a favore di XML, un formato più ricco ma anche molto più rigido e non retrocompatibile.

Diverse grandi aziende, tra cui Apple, Mozilla, Opera e Google, non erano d'accordo con le decisioni del w3c e fondarono un nuovo gruppo di lavoro chiamato [WHATWG](https://whatwg.org/) (Web Hypertext Application Technology Working Group). Cominciò così una collaborazione/scontro tra w3c e WHATWG che arrivò ad approvare lo standard HTML5 nel 2014 (14 anni dopo la versione HTML4!), che sostanzialmente ha recepito la linea del WHATWG che conosciamo oggi. La diatriba si è conclusa definitivamente nel 2019 con la cessione dell'authority sullo standard da parte del w3c a favore di WHATWG (vedi [qui](https://html.spec.whatwg.org/#history-2) per maggiori dettagli).

È importante sapere anche che HTML5 è considerato l'_ultima_ versione di HTML, perché è considerato un [Living standard](https://html.spec.whatwg.org/), quindi non ha più rilasci di versione congelate ma è in continua evoluzione.

## Cosa significa "struttura" di una pagina?
Abbiamo detto che l'HTML definisce la "struttura" della pagina. Ma cosa significa esattamente?

In poche parole, significa che l'HTML esprime il _significato_ della pagina, non la sua presentazione. La stessa pagina può essere visualizzata in modo diverso in dispositivi diversi (desktop, smartphone, tablet, smartTV, smart watch, realtà virtuale...) o addirittura letta da dispositivi come Google Home o Alexa.

Inoltre, se diamo un _senso_ agli elementi della pagina, e li organizziamo in maniera opportuna, possiamo anche permettere ai browser di elaborare la pagina ed estrarre informazioni utili per noi. Per esempio potremmo chiedere al browser quali sono le voci del menu, o di andare alla sezione successiva.

Come ultima cosa (ma non meno importante), i software dei vari motori di ricerca o i web spider possono interpretare con più esattezza la pagina ed estrarre informazioni utili da usare in altri siti o servizi.

## Esempi di struttura
Prendiamo ad esempio il seguente sito, che tratta di un bellissimo linguaggio di programmazione: [Rust](https://www.rust-lang.org/).

<figure>
  <img class="w100p" title="rust" alt="rust page" src="assets/rust.png">
</figure>

Proviamo ad analizzare la struttura della pagina. Notiamo che nella parte alta della pagina c'è un'intestazione che contiene informazioni particolarmente importanti, come ad esempio il logo e un _menù di navigazione_, per saltare rapidamente alle diverse sezioni della pagina. Nella parte più a destra dell'intestazione c'è un menù a tendina per scegliere la lingua preferita.

Subito sotto, c'è una sezione in cui ci sono le informazioni più importanti su cui si vuole attirare l'attenzione del vistatore: il nome del sito, una breve descrizione (_tag line_), un bottoncione colorato per cominciare e sotto il bottone si specifica l'ultima versione del linguaggio.

Scorrendo la pagina, si trovano altre sezioni con altre informazioni utili, fino ad arrivare in fondo in cui troviamo un _footer_ con le informazioni legali, alcuni link per approfondire e le icone per i social network.

Ogni singolo elemento della pagina è identificato nella pagina HTML sorgente con un nome che ne identifica il significato, il che rende molto più semplice visualizzarlo ad esempio per un cellulare, come nella figura di seguito.

<figure>
  <img class="w50p" title="rust mobile page" alt="rust mobile page" src="assets/rust-mobile.png">
</figure>

## Organizzazione degli elementi della pagina
Un'altra cosa importante da capire a questo momento è come gli elementi di una pagina HTML si relazionano tra loro. Gli elementi sono organizzati con una struttura ad albero, o a scatole cinesi, in cui si parte da un elemento base a cui si agganciano tutti gli altri.

Nella metafora ad albero, l'elemento base viene chiamato _radice_ (anche se forse sarebbe più corretto chiamarlo tronco), da cui partono vari _rami_ che finiscono con delle _foglie_.

Nella metafora a scatole cinesi, c'è una scatola esterna che contiene una o più scatole al suo interno, che a loro volta possono contenere altre scatole, e così via finché non arriviamo alle scatole più interne che saranno vuote.

Riprendendo l'esempio della pagina del linguaggio di programmazione Rust, possiamo vedere che è stata organizzata nel seguente modo.

<figure>
  <img class="w50p" title="rust page cut" alt="rust page cut" src="assets/rust-cut.png">
</figure>

Questa operazione di suddividere la pagina web in sottoparti viene chiamata **cutting** (taglio) della pagina, ed è un'operazione che si svolge a dopo la fase di design e prima di quella di implementazione vera e propria.