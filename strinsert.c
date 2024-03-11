//
// Created by Emanuele on 11/03/2024.
//
#include <stdio.h>

#define SIZE 32

void strinsert(char t[], char s[]);

int main() {
    char t[SIZE], s[SIZE];

    fgets(t, SIZE, stdin);

    fgets(s, SIZE, stdin);

    strinsert(t, s);

    puts(s);

    return 0;
}


void strinsert(char t[], char s[]) {
    int i = 0, j = 0;

    while (s[i] != '\0') {
        i++;
    }

    while (t[j] != '\0') {
        s[i + j - 1] = t[j];
        j++;
    }
    s[i + j - 1] = '\0';
}








/*
Si scriva la funzione

    void strinsert (char t[], char s[])
che inserisce la stringa s all’inizio della stringa t.

Esempio: se s = “pianta“ e t = “si ” si otterrà s = “si pianta”.

NOTA1: non esiste una funzione di libreria con questa funzionalità.
 NOTA2: attenzione all’algoritmo, è facile sbagliare ed è
 possibile che l’errore si verifichi soltanto con alcune lunghezze delle stringhe.

Si scriva il relativo main per provarla.
 Il formato dei dati di ingresso e di uscita può essere dedotto
 dall’esempio riportato più oltre.
 Le stringhe in ingresso vanno lette con la funzione fgets
 e la stringa in uscita va scritta con la funzione puts.
 La funzione fgets supera il problema di vulnerabilità della
 gets includendo la dimensione massima del vettore che conterrà
 la stringa letta. Per esempio, se il vettore ha dimensione
 32 byte, la fgets andrà scritta così:

fgets (s, 32, stdin);
Essa leggerà dalla tastiera (stdin) al massimo 31 caratteri (il trentaduesimo servirà per il '\0').

Esempio:

prima stringa: testo
seconda stringa: prova
provatesto
*/