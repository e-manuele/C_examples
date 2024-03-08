//
// Created by Emanuele on 08/03/2024.
//
#include <stdio.h>
#define MAX 9

void main(){
    char s[MAX];
    FILE *fptr;

    fptr = fopen("test.txt", "r");

    if(fptr == NULL){
        printf("Errore durante l'apertura del file!\n");
    } else {
        fgets(s, 10, fptr);
        printf("%s", s);
    }

    fclose(fptr);
}