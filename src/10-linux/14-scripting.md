# Scripting

In questo capitolo vedremo come creare dei semplici _script_.

> Molti dei concetti di cui parlerò qui sono trattati anche nella guida più autorevole sullo scripting in bash, l'_Advanced Bash Scripting Guide_ ([ENG](https://tldp.org/LDP/abs/abs-guide.pdf), [ITA](https://diraimondo.dmi.unict.it/wp-content/uploads/classes/so/mirror-stuff/abs-guide.pdf)). Come sempre, si suggerisce la consultazione in lingua originale, per evitare problemi di traduzione.

## Cos'è uno script?
Uno script è un programma che non viene _compilato_, come siamo abitutati a fare con linguaggi come C, C++ o Java, ma viene _interpretato_ riga per riga da un altro programma, detto appunto _interprete_. Nel nostro caso, l'inteprete è la _shell_ stessa.

Per chiarire meglio il concetto con un esempio:
- un file `.cpp` deve essere compilato in un file .exe, che poi può girare su tutte le macchine compatibili. Il file .cpp originale non dobbiamo distribuirlo agli utenti finali.
- un file `.sh` deve essere distribuito così com'é agli utenti che lo dovranno utilizzare, che lo eseguiranno direttamente.

## Scelta dell'interpete
Di default, uno script viene interpretato con l'inteprete che si usa in quel momento per lanciare lo script stesso. È possibile cambiare questo comportamento specificando l'interprete da usare nella prima riga dello script, iniziando la riga con `#!`, ad esempio per usare python invece che bash, si può scrivere:
```py
#!/usr/bin/env python3
```
La combinazione di caratteri `#!` viene chiamata anche _shebang_, che sta per "shell bang" o _shabang_, che sta per "sharp bang", dai nomi in dialetto nerd dei caratteri che sono appunto rispettivamente sharp per il cancelleto e bang per il punto esclamativo.

# Creazione di uno script di esempio: cleanup.sh
Di seguito uno script di esempio creato a lezione, che illustra alcuni concetti chiave.

```sh
# Cleanup
DIR=$1

cd $DIR
cat /dev/null > messages
cat /dev/null > tmp
echo "Log files cleaned up."

exit 0
```

Analizziamo il file riga per riga.

```sh
# Cleanup
```

Tutte le righe che cominciano con un cancelletto sono commenti. 

```sh
DIR=$1
```
In questa riga dichiariamo la variabile `DIR` e gli assegniamo il valore del primo parametro in ingresso allo script. Per esempio, se lanciamo lo script con `cleanup.sh temp` il valore di `DIR` sarà `temp`. Osservazioni importanti:
- intorno all'`=` non devono esserci spazi, altrimenti la riga non viene valutata come un'assegnazione ma come un comando normale.
- nella dichiarazione, la nuova variabile _non_ deve essere preceduta dal dollaro.

```sh
cd $DIR
```
Mi sposto nella cartella `$DIR`. Attenzione che quando _uso_ una variabile, deve essere sempre preceduta dal dollaro.

```sh
cat /dev/null > messages
cat /dev/null > tmp
```
Creo i file vuoti `messages` e `tmp` oppure, se già esistono, li svuoto.


```sh
echo "Log files cleaned up."
```
Stampo su console l'informazione che ho eseguito il cleanup.


```sh
exit 0
```
Esco dall'applicazione. Se questa riga viene messa alla fine del file, l'interprete uscirebbe comunque dall'applicazione, ma è buona pratica uscire sempre esplicitamente con `exit`, specificando come argomento il valore di ritorno dello script.

> Negli script bash, il valore di ritorno `0` vuol dire "tutto OK", mentre valor di ritorno diversi da zero di solito significano un errore. Per leggere il valore di ritorno dell'ultimo comando eseguito, si può utilizzare `$?` sia da terminale che all'interno di uno script.