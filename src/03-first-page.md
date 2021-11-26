# La mia prima pagina

In questo tutorial, oltre a creare una pagina vogliamo mettere le basi per un progetto completo.

Useremo:
 - GitHub per il repository
 - Git Bash come terminale
 - il server studenti della scuola come web server
 

## Creare l'account su GitHub
Per prima cosa andate su sito di [GitHub](www.github.com) e, se non l'avete già fatto, create un account. Ovviamente scegliete il piano gratuito, è più che sufficiente per i nostri scopi.

## Scaricare Git Bash
Su Windows, si consiglia di usare Git Bash come terminale, scaricabile da [qui](https://git-scm.com/download/).

Durante l'installazione potete premere sempre "Next", come se non ci fosse un domani.

> Se nei computer di scuola dovesse chiedervi la password da amministratore, tornate all'inizio, deselezionate la spunta in basso "Show only new options", e quando vi fa scegliere la cartella di installazione selezionate la vostra cartella home. Quindi premete sempre avanti, alla fine vi chiederà comunque la password da amministratore ma anche se premete "Cancel" procederà comunque all'installazione. Attenzione che se vi trovate in questa situazione, vi dovrete ricordare di specificare il percorso git alle varie applicazioni che ne fanno uso (per esempio Visual Studio Code).

Dopo averlo installato, apritelo, vi compare un simpatico schermo nero: siete pronti a cominciare la vostra avventura da programmatori.

> Se avete un computer Apple o Linux, non avete bisogno di installare nulla perché c'è già un terminale integrato. Con Apple, se volete potete scaricare iTerm, che ha più funzionalità del terminale integrato.

## Accesso al web server
Prima di tutto, vi serve sapere il vostro nome utente. Il nome utente è composto da:
- una lettera assegnata dal professore alla classe, per esempio nel vostro caso è la lettera `c`
- `_utente`
- due numeri che identificano la vostra posizione in rubrica, ad esempio `01`,`12`, etc.

Un nome utente valido è ad esempio `c_utente26`

Dal terminale, digitate:
```sh
ssh nome_utente@studenti.marconicloud.it
```
Digitate la password. Anche se non la vedete per motivi di sicurezza, la legge ugualmente, abbiate fede.

In questo modo avete fatto l'accesso alla vostra cartella sul serve studenti.

## Creazione del repository su GitHub
Sulla pagina di GitHub del vostro account, cliccate sul + in alto a destra e premete su New repository.

Mettete le seguenti cose:
- nome: `error503`
- descrizione: `TPSI 2021`
- lasciate su Public
- cliccate su Add README.md
- cliccate su Add License e selezionate [GNU](https://choosealicense.com/licenses/gpl-3.0/) oppure [MIT](https://choosealicense.com/licenses/mit/).

Sulla pagina che vi compare, andate sul bottoncione verde "Code", quindi copiate il link del repository.

## Clonazione del progetto sul web server
Tornate sul terminale, controllate di stare sul server remoto (il prompt dei comandi deve mostrare @serverStudenti), quindi scrivete:

```sh
git clone https://........
```

Dove `https://.......` è il link che avete appena copiato. Vi creerà una cartella nel punto in cui vi trovate chiamata `error503`. Entrateci dentro:
```sh
cd error503
```

Ora create il vostro primo file `index.html` usando il comando `nano`:
```sh
nano index.html
```

## Modifica del progetto
Il progetto grafico della nostra pagina web è il seguente:

<figure class="center">
  <img class="w100p" title="error503" alt="error503" src="assets/error503.jpg">
</figure>

In questa pagina possiamo vedere che ci sono solo due elementi: un titolo con sotto un paragrafo. Per il titolo, possiamo usare il tag [h1](https://www.w3schools.com/tags/tag_hn.asp), mentre per il paragrafo il tag [p](https://www.w3schools.com/tags/tag_p.asp).

La pagina verrà come segue:

```html
<h1>503 Service Unavailable</h1>
<p>No server is available to handle this request.</p>
```

Mi raccomando controllate che sia la correttezza delle parole e la capitalizzazione delle lettere (maiuscole e minuscole). In questa fase, dal punto di vista visivo dovete solo riportare fedelmente quanto previsto dal progetto grafico, senza inventare o modificare nulla.

Dopo aver salvato il file, controllate che la pagina sia corretta andando dal browser sul link: https://studenti.marconicloud.it/nome_utente/error503, facendo ovviamente attenzione a sostituire `nome_utente` con il vostro nome utente.

Se è tutto OK, potete passare alla parte di sincronizzazione delle modifiche con GitHub.

## Sincronizzare le modifiche
Per prima cosa, dobbiamo dire a git che effettivamente vogliamo sincronizzare il file `index.html`. Questo si fa con `git add`:
```sh
git add index.html
```

Quindi, dobbiamo confermare che siamo proprio sicuri di voler salvare in modo permanente le modifiche all'interno del nostro repository. Questo si fa con `git commit`:
```sh
git commit
```

> La prima volta che vi trovate su un nuovo computer, vi chiederà chi siete. Seguite le informazioni su schermo, quindi ripetete il commit.

Vi si aprirà nuovamente nano, chiedendovi di mettere un commento per il commit. I commenti cominciano sempre con un verbo, quindi potete mettere "Aggiunto index.html". Salvate ed uscite da nano.

Ci siamo quasi! Le modifiche fatte finora sono solo in locale, non sono ancora sincronizzate con il server remoto di GitHub; questa operazione si chiama `push`. Prima di poter fare il push però, GitHub richiede che venga generato un token di autorizzazione; infatti da agosto 2021 non è più possibile usare la password per motivi di sicurezza.

Andate su github.com, cliccate in alto a destra sull'immagine del vostro account e scegliete "Settings" nel menù a tendina che si apre. Andate nella barra a sinistra su "Developers settings", quindi su Personal access tokens. In alto a destra premete su "Generate new token". 

Mettete le seguenti informazioni:
- note: Server studenti marconi
- expiration: 90 giorni
- scopes: selezionate "repo", si selezionano automaticamente anche le caselle al suo interno

Ora in fondo alla pagina premete su "Generate token".

Vi verrà visualizzato un token, **non** chiudete questa pagina che fra poco vi serve e se chiudete la pagina non potrete più recuperarlo!

Tornate sul terminale. Diciamo a git di salvarsi le credenziali che stiamo per inserire, in modo da non doverle ripetere ogni volta:
```sh
git config --global credential.helper store
```

Ora siamo finalmente pronti per fare il push!
```sh
git push
```

Vi chiederà nome utente e password. Attenzione che **come password dovete inserire il token** che abbiamo generato poco fa.

Finalmente, è fatta! Se tutto è andato bene potrete vedere la vostra pagina index.html anche su GitHub.

## Video tutorial per la creazione di un progetto su GitHub
Di seguito le stesse operazioni per la creazione di un progetto su GitHub in un video tutorial. Il progetto nel video si chiama error404, ma le operazioni sono le stesse.

<iframe src="https://drive.google.com/file/d/1GTQyvvf01qAFK_DJzdLylhoca-Pdv_pm/preview" width="640" height="480" allow="autoplay"></iframe>
