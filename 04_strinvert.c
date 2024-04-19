//
// Created by Emanuele on 15/03/2024.
//
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 256



void strinvert(char v[], int dim);

int main() {
    char v[SIZE];
    fgets(v, SIZE, stdin);
    strinvert(v, SIZE);
    return EXIT_SUCCESS;
}


void strinvert(char v[], int dim) {
    int i, j = 0;
    while (v[j] != '\0') {
        if (v[j] == ' ' || v[j] == '\n') {
            for(int k=j-1;k>=i;k--){
                printf("%c",v[k]);
            }
            printf(" ");

            j++;
            i = j;
        }
        j++;
    }
}

/*
Scrivere una funzione in linguaggio C che accetti in ingresso una stringa contenente una frase (parole separate soltanto da spazi) e inverta l'ordine delle lettere di ogni singola parola.

Si scriva il relativo main per provarla. Il formato dei dati di ingresso e di uscita può essere dedotto dall’esempio riportato più oltre. La stringa in ingresso va letta con la funzione fgets e la stringa in uscita va scritta con la funzione puts. La funzione fgets supera il problema di vulnerabilità della gets includendo la dimensione massima del vettore che conterrà la stringa letta. Per esempio, se il vettore ha dimensione 32 byte, la fgets andrà scritta così:

fgets (s, 32, stdin);
Essa leggerà dalla tastiera (stdin) al massimo 31 caratteri (il trentaduesimo servirà per il '\0').
 */