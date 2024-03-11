//
// Created by Emanuele on 11/03/2024.
//
#include <stdio.h>

#define SIZE 32

int strcompare(char a[], char b[]);

int main() {
    char a[SIZE], b[SIZE];
    int diff = 0;

    fgets(a, SIZE, stdin);

    fgets(b, SIZE, stdin);

    diff = strcompare(a, b);
    if (diff == 1) {
        printf("[^\\-]1");
    } else {
        printf("%d", diff);
    }


    return 0;
}

int strcompare(char a[], char b[]) {
    int i = 0, j = 0;
    while (a[i] != '\0' && b[i] != '\0' && a[i] == b[i] && a[i] != '\n' && b[i] != '\n') {
        i++;
    }
    if (a[i] < b[i]) {
        j = -1;
    } else if (a[i] > b[i]) {
        j = 1;
    }


    return j;
}

/*

Si scriva la funzione
int strcompare (char a[], char b[])

che confronta la stringa a e la stringa b e restituisce: -1
 se la stringa a precede, in ordine alfabetico, la stringa b,
 0 se la stringa a è uguale alla stringa b, 1 se la stringa a segue,
 in ordine alfabetico, la stringa b.

Si scriva il relativo main per provarla.
Il formato dei dati di ingresso e di uscita può essere dedotto dagli esempi
riportati più oltre. Le stringhe in ingresso vanno lette con
la funzione fgets e la stringa in uscita va scritta con la funzione puts.
La funzione fgets supera il problema di vulnerabilità della gets includendo
la dimensione massima del vettore che conterrà la stringa letta.
Per esempio, se il vettore ha dimensione 32 byte, la fgets andrà scritta così:

    fgets (s, 32, stdin);

Essa leggerà dalla tastiera (stdin) al massimo 31 caratteri
(il trentaduesimo servirà per il '\0').

 */