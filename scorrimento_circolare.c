//
// Created by Emanuele on 01/03/2024.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int dimv;
    printf("inserisci il numero di valori da scrivere nel vettore:");
    scanf("%d", &dimv);
    int v[dimv];
    for (int j = 0; j < dimv; j++) {
        printf("v[%d] = ", j);
        scanf("%d", &v[j]);
    }
    printf("applico lo scorrimento...");
    scorrimento_circolare(v, dimv);

}

void scorrimento_circolare(int v[], int dim) {
    int ultimo = v[dim-1];
    for (int i = dim; i > 0; i--) {
        //printf(" scambio %d con %d", v[i], v[i - 1]);
        v[i] = v[i - 1];
    }
    v[0] = ultimo;
    for (int i = 0; i < dim; i++) {

        printf(" v[%d] = %d \n", i, v[i]);
    }

}