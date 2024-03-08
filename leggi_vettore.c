#include <stdio.h>
#include <stdlib.h>

int *leggi_vettore(void) {

    int n;
    int *array;

    // Richiesta all'utente del numero di valori
    printf("Inserisci il numero di valori da scrivere nel vettore: ");
    scanf("%d", &n);

    // Allocazione dinamica dell'array
    array = malloc(n * sizeof(int));

    // Controllo se l'allocazione è andata a buon fine
    if (array == NULL) {
        printf("Errore: impossibile allocare memoria.\n");
        exit(1);
    }

    // Lettura dei valori dell'array
    for (int i = 0; i < n; i++) {
        printf("v[%d] = ", i);
        scanf("%d", &array[i]);
    }

    // Restituzione dell'array
    return &array;
}
