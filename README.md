# Obiettivi

Il modulo si propone di fornire allo studente gli strumenti teorici e pratici per la progettazione e la realizzazione di programmi 
in linguaggio C per la risoluzione di semplici problemi con strategie di elaborazione sia iterative che ricorsive. Vengono 
affrontate la gestione dinamica della memoria e la costruzione di strutture dati dinamiche, alcune delle quali definite mediante 
l’ausilio dei puntatori. Si implementeranno, in diverse versioni e con diverso grado di complessità, funzioni ricorsive ed 
iterative per la costruzione e per la gestione delle strutture dati, consentendo così allo studente di acquisire familiarità con la 
programmazione, gli algoritmi, e la complessità computazionale. Viene affrontata ed esemplificata la costruzione di strutture 
dati, a crescente livello di astrazione.

# Testi Consigliati

P.J. Deitel and H.M. Deitel. Il linguaggio C: Fondamenti e tecniche di programmazione, 9/Ed. Pearson, September 2022.
R. Sedgewick. Algoritmi in C, 4/Ed. Pearson, ISBN 9788891900746, 2015. (strutture astratte di dati / abstract data structures)

Consiglio personale: The Art of Computer Programming, Donald Knuth

# Argomenti

- La ricorsione. Esempi di funzioni ricorsive: il fattoriale, la somma di una successione di interi, i 
numeri di Fibonacci. Confronto tra iterazione e ricorsione. Ricorsione in coda. Introduzione alla 
programmazione dinamica. Funzioni ricorsive su array: ricerca binaria ricorsiva e algoritmo di
ordinamento mergesort. Confronto computazionale del mergesort con gli algoritmi di ordinamento 
elementari.

- Esempi di strategie ricorsive per la soluzione di problemi su array e su stringhe. Debugging di un 
programma in linguaggio C.
Puntatori e oggetti dinamici. Allocazione e de allocazione di memoria. Principio del minimo 
privilegio. Puntatori ed array.

- Puntatori a funzione. Esempi: sorting bidirezionale, menu.
Le strutture e i tipi derivati. Operazioni sulle strutture. Strutture e puntatori. Passaggio di 
argomenti per valore e per riferimento. 
Embedding di array. Strutture e funzioni.
Programmazione dinamica: il problema dello zaino 0-1, cammino più redditizio da NW a SE in
una matrice. Unioni e condivisione di spazio.

- Nodi per strutture dinamiche. Liste concatenate, lista ordinata di caratteri, inserimento e 
cancellazione. Confronto tra array e liste.
Inversione ricorsiva di una lista, ricerca in una lista. Fusione di liste ordinate. Mergesort di liste 
concatenate.
Mergesort dal basso su array. Mergesort dal basso su liste. Mergesort naturale.

- Struttura dati FIFO e sua realizzazione con i puntatori. Struttura dati Coda e sua realizzazione 
con ipuntatori.
Tipo astratto di dati (ADT): necessità, caratteristiche, definizione. Il concetto di astrazione di tipo
e la sua realizzazione. La pila come ADT: realizzazioni con lista concatenata, array, o array 
ridimensionabile (reallocazione dinamica).

- La coda come ADT: realizzazioni con lista concatenata, array, o array ridimensionabile. Buffer 
circolare e ridimensionamento del buffer. Mergesort dal basso con coda di liste.
Valutazione di espressioni postfisse mediante pila.

- Operazioni orientate ai bit. Campi di bit. Costanti di enumerazione e tipi enumerati. Estrazione e 
rappresentazione dei contenuti dello zaino. Alberi e ADT albero binario di ricerca (BST). 
Inserimento in un BST. Visite di un albero. Ricerca
in un BST. Stampa di un albero. Cancellazione in un BST. Modelli come gerarchie di parti.

- File binari ad accesso casuale. ADT per code basato su file binari ad accesso casuale.
Tipi di dato astratto di prima categoria (che supportano istanze multiple). Esempio: ADT numero
complesso. La coda come ADT di prima categoria. Sistemi di code. La pila come ADT di prima
categoria. Esempio: valutatore di espressioni infisse sui numeri complessi. ADT polinomio.

# Esercizi

- Esempi su funzioni ricorsive e iterative. Misura del tempo di esecuzione con time.h. 
Trasformazione di ricorsione in iterazione. Massimo comun divisore in forma ricorsiva.

- Mergesort ricorsivo e versione con switch a insertion sort per taglia piccola. Misura di 
performance. Regolazione della taglia di commutazione. Mergesort su file separato da quello di
test, che funziona su dati di qualsiasi tipo, con array di void *.
Esercizi: liste ordinate di caratteri; stampa ricorsiva invertita di lista; ricerca ricorsiva di un 
elemento in una lista; fusione di liste ordinate.

- Esercizi: mazzo di carte; problema dello zaino ricorsivo; problema dello zaino ricorsivo con 
programmazione dinamica; problema dello zaino iterativo dal basso. Tecniche per 
l'identificazione di violazioni di memoria. Tecniche di debugging come gdb.

- Realizzazione di stack con liste. Modelli come gerarchie di parti. Realizzazione di queue con liste. 
Mergesort top-down con liste. Mergesort naturale bottom-up con liste e array ausiliario. Tecniche 
di misure di prestazione.

- Stack con liste come ADT. Stack con array come ADT. Stack con array con resizing. Stack con 
array con realloc. Stack con verifica di presenza. Astrazione dell'input-output dal tipo di dato base.

- Queue ADT con liste, array e resizable array. Circular buffer. Mergesort su lista con coda 
ausiliaria, verifica di stabilità. Valutatore di espressioni postfisse.

- Operazioni sui bit. Stampa dei bit di un unsigned int. Esempi di operazioni logiche e di shifting 
suibit. Esempio: restituzione del contenuto nel problema dello zaino. Campi di bit. Costanti di
enumerazione, lista di sottoliste.

- Alberi binari e BST. BST ADT. Visite: in-ordine, pre-ordine, post-ordine. Esercizio: funzione di 
ricerca sul BST, complessità e misura di prestazione.Stampa di un BST.Visita per livelli e 
realizzazione con Queue ADT. Cancellazione in un BST. Rappresentazione e visualizzazione di 
un grafo. ADT polinomio.
