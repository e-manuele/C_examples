//
// Created by Emanuele on 08/03/2024.
//
#include <stdio.h>
#include <stdlib.h>
#define N 5

int main() {
    FILE *fp;
    char cognome[20];
    char nome[20];
    int i, voto;

    if((fp=fopen("alunni.txt", "rt"))==NULL) {
        printf("Errore nell'apertura del file'");
        exit(1);
    }

    for(i=0;i<N;i++) {
        fscanf(fp,"%s %s %d\n", &cognome, &nome, &voto);
        printf("cognome: %s, nome: %s, voto: %d\n", cognome, nome, voto);
    }
    fclose(fp);

    return 0;

}