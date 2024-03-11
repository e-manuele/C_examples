//
// Created by Emanuele on 01/03/2024.
//
/*
int cerca_in_sottovettore (int v[], int inizio, int fine, int valore_cercato);
inizializza l’indice al primo elemento;
while (ci sono ancora elementi da controllare)
{
   if (l’elemento corrente è quello cercato)
      return indice corrente;
   avanza con l’indice di una posizione;
}
return -1;
 */

#include <stdio.h>
#include <stdlib.h>

#define EXIT_FAILURE -1


int main() {
    int dimv;
    int inizio;
    int fine;
    int valore_cercato;
    printf( "inserisci il numero di valori da scrivere nel vettore:");
    scanf("%d", &dimv);
    int v[dimv];
    for (int j =0; j< dimv; j++){
        printf("v[%d] = ",j);
        scanf("%d", &v[j]);
    }
    printf("inserisci il valore da cercare: ");
    scanf("%d", &valore_cercato);
    printf("inserisci l'indice del primo elemento del sottovettore in cui cercare: ");
    scanf("%d", &inizio);
    printf("inserisci l'indice dell'ultimo elemento del sottovettore in cui cercare: ");
    scanf("%d", &fine);
    printf("ricerca lineare...");

    int res = cerca_in_sottovettore(v, inizio, fine, valore_cercato);
    if ( res <0){
        printf("valore non trovato");
    } else {
        printf( "v[%d] = %d",res,valore_cercato);
    }
   return EXIT_SUCCESS;
}


int cerca_in_sottovettore(int v[], int inizio, int fine, int valore_cercato) {
    for (int i = inizio; i <= fine; i++) {
        if (v[i] == valore_cercato) {
            return i;
        }
    }
    return EXIT_FAILURE;
}
