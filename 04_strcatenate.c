//
// Created by Emanuele on 09/03/2024.
//
#include <stdio.h>

#define SIZE 32

void strcatenate(char t[], char s[]);

int main() {
    char t[SIZE], s[SIZE];

    fgets(t, SIZE, stdin);


    fgets(s, SIZE, stdin);

    strcatenate(t, s);

    puts(t);

    return 0;
}


void strcatenate(char t[], char s[]) {
    int i = 0, j = 0;

    while (t[i] != '\0') {
        i++;
    }

    while (s[j] != '\0') {
        t[i + j - 1] = s[j];
        j++;
    }
    t[i + j ] = '\0';
}


/*
Si scriva la funzione

    void strcatenate (char t[], char s[])
che inserisce la stringa s alla fine della stringa t.

Si scriva il relativo main per provarla.
 Il formato dei dati di ingresso e di uscita può essere dedotto dall’esempio riportato più oltre.

Nota: le stringhe in ingresso vanno lette con la funzione fgets
 e la stringa in uscita va scritta con la funzione puts.
 La funzione fgets supera il problema di vulnerabilità della gets
 includendo la dimensione massima del vettore che conterrà la stringa letta.
 Per esempio, se il vettore ha dimensione 32 byte, la fgets andrà scritta così:

fgets (s, 32, stdin);
Essa leggerà dalla tastiera (stdin) al massimo 31 caratteri (il trentaduesimo servirà per il '\0').

prima stringa: testo
seconda stringa: prova
testoprova
 */
