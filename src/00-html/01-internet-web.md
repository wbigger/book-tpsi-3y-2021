# Internet & Web

Prima di cominciare con lo studio dell'HTML, cerchiamo di capire un po' il contesto in cui è nato e si è sviluppato.

Quando parliamo di _web_ stiamo parlando di un insieme di tecnologie specifiche, quelle appunto definite dal consorzio del _"World Wide Web"_, abbreviato in _w3_. Il sito ufficiale del consorzio e [www.w3.org](https://www.w3.org/).

Ma andiamo con ordine: il web è un _servizio_ che si appoggia alla rete Internet per funzionare. Le due cose non devono essere confuse!

## Internet: una rete di computer globale
Negli anni '60 del secolo scorso c'è stata un'enorme diffusione dei calcolatori elettronici soprattutto presso centri di ricerca universitaria ed istituzioni pubbliche. Il problema di connettere tra di loro tutti questi computer era diventata urgente, e vari standard erano nati per risolvere questo problema.

La soluzione che poi ha preso il sopravvento è stata quella ideata da [Vinton Gray Cerf](https://it.wikipedia.org/wiki/Vint_Cerf) e [Robert Kahn](https://it.wikipedia.org/wiki/Robert_Kahn) nel 1972 circa, mentre lavoravano presso il DARPA (Agenzia per i Progetti di ricerca avanzata per la Difesa), in America, hanno messo le basi per questa tecnologia ed i relativi protocolli.

<figure class="center">
  <img class="w100p" title="vint-bob" alt="vint-bob" src="assets/vint-bob.jpg">
  <figcaption>Fig.1 - Vint Cerf a sinistra, Bob Kahn a destra</figcaption>
</figure>

L'idea è stata quella di assegnare ad ogni macchina un indirizzo, chiamato **IP Address**, (IP sta per Internet Protocol) formato da 4 byte, che lo identifica univocamente all'_interno di una sottorete_. All'indirizzo IP deve sempre essere associato un altro numero, chiamato maschera di sottorete (**subnet mask**), anch'esso di 4 byte, che definisce la grandezza della sottorete in cui ci troviamo. Le reti sono connesse tra di loro da dei dispositivi di rete dedicate, tipicamente dei **router** (instradatori). 

Uno dei motivi per cui Internet ha avuto una così grande diffusione è stata la convinzione dei fondatori che le tecnologie alla base della comunicazione tra i computer dovesse essere libera ed aperta, ovvero tutti potessero usarla senza pagare un costo di licenza e contribuire al suo miglioramento. A tal fine, per esempio, nel 1986 fu istituita la _Internet Engineering Task Force ([IETF](https://it.wikipedia.org/wiki/Internet_Engineering_Task_Force))_, un organismo internazionale caratterizzato da forti principi di apertura e condivisione. L'IETF usa il sistema delle [RFC](https://it.wikipedia.org/wiki/Request_for_Comments) per la discussione e l'approvazione dei propri standard, che prevede la discussione e l'approvazione. Nel 2005 Vint Cerf e Bob Kahn hanno ricevuto la Medaglia Presidenziale per la libertà per il loro contributo alla nascita di Internet.

Una nota sull'uso della parola "Internet": tecnicamente, una qualsiasi rete di computer connessi tra di loro con indirizzi IP è una rete Internet. Tuttavia, nell'uso quotidiano usiamo questa parola per indicare la rete _globale_ di computer. In questo testo si specificherà "rete Internet globale" quando necessario per evitare fraintendimenti.

# Web
Il World Wide Web è nato nel 1989 sotto la guida del londinese [Tim Berners-Lee](https://en.wikipedia.org/wiki/Tim_Berners-Lee). A quel tempo, Berners-Lee lavorava presso il CERN di Ginevra, un centro di ricerca internazionale. Come i suoi colleghi, si trovava ad affrontare il problema di reperire le informazioni su Internet; gli strumenti che a quel tempo aveva a disposizione erano protocolli come FTP, SSH, SCP che non permettevano una facile consultazione delle risorse.

L'idea di Berners-Lee per risolvere il problema è stato quello di creare delle _pagine_ con uno stile (corsivo, grassetto, titolo, ...) che puntassero a delle _risorse_ (immagini, file, altre pagine, ...). In questo modo si creava una rete di pagine e risorse che somigliava appunto ad una rete.

Per lo stile delle pagine inventò lo standard _HyperText Markup Language_ (**HTML**), per il protocollo di comunicazione creò l'_Hypertext Transfer Protocol_ (**HTTP**) e per identificare univocamente una risorsa sul web ideò l'_Uniform Resource Locator_ (**URL**).

Nel 1994 Tim Burners-Lee fonda il [w3consortium](https://www.w3.org/) (**w3c**) con lo scopo di standardizzare le nuove tecnologie emergenti per il World Wide Web.

Fin dai primi anni di fondazione del w3c fu chiaro che per far crescere in maniera organica il web, il solo formato HTML non era sufficiente. Sono state create quindi un insieme di tre tecnologie, ognuna con un compito diverso che si coordinano fra loro:
- le pagine **html**, che definiscono la **struttura** della pagina
- i fogli di stile **css**, che definiscono come la pagina deve essere visualizzata
- i file **js**, ovvero JavaScript, che definiscono il comportamento dinamico del sito

Nei prossimi capitoli affronteremo nel dettaglio i primi due: HTML e CSS. 
