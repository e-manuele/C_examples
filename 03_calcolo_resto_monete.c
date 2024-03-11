//
// Created by Emanuele on 08/03/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include "leggi_vettore.c"
// Prototipo della funzione


int main() {
    int resto;
    int *valori;


    valori = leggi_vettore();
    size_t n = sizeof(valori)/ sizeof(valori[0]);

    int numeromonete[n];
    printf("inserisci il valore totale del resto:");


    scanf("%d", &resto);

    printf("calcolo il resto...\n");


    // inserire funzione qua
    int status = resto_in_monete(resto, n, valori, numeromonete);


    free(valori);
    return status;
}


int resto_in_monete(int resto, int n, int valori[], int numeromonete[]) {
    for (int i = n; i => 0; i--) {
        numeromonete[i] = resto / valori[i];
        printf("%d\n", numeromonete[i]);
        resto = resto % valori[i];
    }
    printf("%d\n", numeromonete[0]);
    stampa_vettori(valori, numeromonete,n);
    return 0;
}

void stampa_vettori(int valori[], int numeromonete[],int n){
    for(int i=0; i <n; i++){
        printf("%d: %d \n",valori[i], numeromonete[i]);
    }
}






