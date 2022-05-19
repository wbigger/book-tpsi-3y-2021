# Comandi linux

## echo
Ritorna un'"eco" del suo argomento sul terminale.
```sh
$ echo ciao
ciao
```

## touch
Crea un file o, se già esiste, ne aggiorna la data di ultima modifica.
```sh
$ touch ciao
```

## cat
Abbreviazione di "concatenate", mostra il contenuto di un file.
```sh
$ cat ciao
```

## Redirect
Il carattere `>` redirige l'output di un comando verso un file, invece del terminale. Se il file non esiste, viene creato. Se il file esiste, viene sovrascritto.
```sh
$ echo "buongiorno" > buongiorno.txt
```

Se si vuole aggiungere il testo alla fine del file senza sovrascriverlo, si può usare il `>>`.
```sh
$ echo "buongiorno" >> buongiorno.txt
$ cat buongiorno.txt
buongiorno
buongiorno
```


## ls
Elenca i file nella cartella corrente
```sh
$ ls
buongiorno.txt	ciao
```

L'opzione `-l` mostra i dettagli del file.
```sh
$ ls -l
total 8
-rw-r--r--  1 claudio  staff   11 Oct 12 07:03 buongiorno.txt
-rw-r--r--  1 claudio  staff    0 Oct 12 07:00 ciao
```

Aggiungendo anche l'opzione `-h` mostra i dettagli del file in un formato più leggibile per l'essere umano ("human"). Notare la B alla fine della quinta colonna, che sta per "Byte".
```sh
$ ls -lh
total 8
total 8
-rw-r--r--  1 claudio  staff    11B Oct 12 07:03 buongiorno.txt
-rw-r--r--  1 claudio  staff     0B Oct 12 07:00 ciao
```

Un'altra opzione utile è `-a`, per visualizzare anche i file nascosti. Su linux, un file è nascosto semplicemente se inizia con il carattere punto (`.`).
```sh
$ ls -lha
total 8
drwxr-xr-x  4 claudio  staff   128B Oct 12 07:03 .
drwxr-xr-x  4 claudio  staff   128B Oct 12 07:00 ..
-rw-r--r--  1 claudio  staff    11B Oct 12 07:03 buongiorno.txt
-rw-r--r--  1 claudio  staff     0B Oct 12 07:00 ciao
```

## pwd
Abbreviazione di Print Working Directory, visualizza la directory corrente.
```sh
$ pwd
/Users/claudio/try/bash
```

## mkdir
Abbreviazione di "make directory", crea una nuova cartella.
```sh
$ mkdir food
$ ls -l
-rw-r--r--  1 claudio  staff  22 Oct 12 07:12 buongiorno.txt
-rw-r--r--  1 claudio  staff   0 Oct 12 07:00 ciao
drwxr-xr-x  2 claudio  staff  64 Oct 12 07:14 food
```
Si può capire che è una cartella perché il primo carattere nella riga di "food" è una `d` che sta appunto per "directory". I file hanno invece un trattino. Alcuni terminali mostrano le cartelle anche con un colore diverso.

## cd
Abbreviazione di "change directory", permette di spostarsi tra cartelle.
```sh
$ cd food
$ pwd
/Users/claudio/try/bash/food
```

Usando `cd` senza argomenti, torno alla "home directory", che viene anche rappresentata con il simbolo `~` (si legge tilde).

```sh
$ cd
$ pwd
/Users/claudio/
$ cd ~ # comando equivalente al precedente
$ pwd
/Users/claudio/
```

Per tornare alla directory precedente, si può usare il simbolo `-` (trattino).
```sh
$ cd -
$ pwd
/Users/claudio/try/bash/food
```

Per salire di una directory si può usare il doppio punto.

```sh
$ cd ..
$ pwd
/Users/claudio/try/bash
```
## cp
Copia un file, abbreviazione di copy.
```sh
$ cp ciao hello
$ ls
total 8
-rw-r--r--  1 claudio  staff  22 Oct 12 07:12 buongiorno.txt
-rw-r--r--  1 claudio  staff   0 Oct 12 07:00 ciao
drwxr-xr-x  2 claudio  staff  64 Oct 12 07:14 food
-rw-r--r--  1 claudio  staff   0 Oct 12 07:20 hello
```
## mv
Sposta un file da una cartella ad un'altra. Se la cartella di partenza e destinazione coincidono, semplicemente rinomina il file.

```sh
$ mv hello hola
$ ls
-rw-r--r--  1 claudio  staff  22 Oct 12 07:12 buongiorno.txt
-rw-r--r--  1 claudio  staff   0 Oct 12 07:00 ciao
drwxr-xr-x  2 claudio  staff  64 Oct 12 07:14 food
-rw-r--r--  1 claudio  staff   0 Oct 12 07:20 hola
```
## rm
Elimina un file, abbreviazione di remove.
```sh
$ rm hola
$ ls
-rw-r--r--  1 claudio  staff  22 Oct 12 07:12 buongiorno.txt
-rw-r--r--  1 claudio  staff   0 Oct 12 07:00 ciao
drwxr-xr-x  2 claudio  staff  64 Oct 12 07:14 food
```

## ctrl-c
Termina (uccide) il processo corrente.

## Variabili di ambiente
Ogni terminale usa delle variabili che sono definite automaticamente quando viene aperto. Queste variabili vengono dette _variabili di ambiente_. Per visualizzarle si può usare il comando `env`.
```sh
$ env
TERM_SESSION_ID=w1t0p0:3B371076-0F20-4C26-ACD4-4656F13F9AEA
SSH_AUTH_SOCK=/private/tmp/com.apple.launchd.P5eh4I2m5h/Listeners
LC_TERMINAL_VERSION=3.4.10
COLORFGBG=7;0
......continua.......
```

Per visualizzare una sola variabile, si può usare `echo` e la variabile deve essere preceduta dal carattere dollaro.
```sh
$ echo $SHELL
/bin/bash
```

Per assegnare una variabile, si può usare il comando `export`.
```sh
$ export PS1="test>"
```

Di seguito alcune variabili di ambiente che abbiamo visto:
- $TERM: quale standard rispetta l'applicazione terminale in uso, di solito è `xterm` o `xterm-256color`
- $SHELL: quale shell sto utilizzando, su Ubuntu di default è bash (quella sviluppata da GNU)
- $PS1: il prompt dei comandi, ovvero tutto quello che c'è prima del dollaro (dollaro compreso), solitamente include la directory corrente ed il nome utente


# SSH
Per collegarsi via ssh alla macchina remota, da terminale potete digitare:
```sh
$ ssh nome_utente@server
```

Ad esempio 
```sh
$ ssh c_utenteNN@studenti.marconicloud.it
```

Se, dopo il primo accesso, volete tornare a questo comando senza doverlo ridigitare, potete:
- premere freccetta su, fino ad arrivare al comando
- digitare `ctrl-r` e cominciare a digitare il comando, per eseguire una ricerca nello storico dei comandi

## Uso del file .ssh/config
Se si vuole aggiungere in modo stabile il server remoto ai propri preferiti, è possibile aggiungerlo al file `.ssh/config`.

Per fare questo, aprite un terminale e scrivete:
```sh
$ cd # per tornare alla home directory
$ cd .ssh # per entrare nella cartella nascosta .ssh
$ nano config 
```

A questo punto aggiungete al file le seguenti righe:
```
Host marconi
  HostName studenti.marconicloud.it
  User k_utenteNN
```

Da ora in poi per collegarvi al server, potete digitare semplicemente:
```sh
ssh marconi
```


# Extra: utenti sulla macchina

## who
Per sapere gli utenti loggati sulla macchina su cui gira il terminale, con relativo pseudo-terminale, data di ultimo login e, in caso di accesso da remoto, indirizzo IP da cui ci si connette.

```sh
c_utente00@serverStudenti:~$ who
c_utente00 pts/0        2022-05-12 08:53 (10.13.0.20)
b_utente00 pts/1        2022-05-12 08:53 (10.13.0.20)
```

## write
È un comando generalmente poco usato ma è installato di default in tutte le distribuzioni, serve per comunicare tra utenti.

```sh
c_utente00@serverStudenti:~$ write b_utente00
Ciao come va?
# ctrl-d
c_utente00@serverStudenti:~$
```
Per uscire dal comando write, premere la combinazione di tasti ctrl-d.

