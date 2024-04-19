//
// Created by Emanuele on 12/04/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define SIZE 64


int frase_palindroma(char v[]);

void elimina_spazi(char *str);

int main() {
    char v[SIZE];
    fgets(v, SIZE, stdin);
    if (frase_palindroma(v)) {
        puts("palindroma");
    } else {
        puts("non palindroma");
    }

    return EXIT_SUCCESS;
}


int frase_palindroma(char v[]) {
    elimina_spazi(v);
    puts(v);
    int j = strlen(v) - 2;
//    printf("%d", j);
    int i = 0;
    while (i <= j) {
//        printf("confronto %c con %c \n", v[i], v[j]);
        if (v[i] == v[j]) {
            i++;
            j--;
        } else {
            return 0;
        }
    }
    return 1;
}

void elimina_spazi(char *str) {
    char *token = strtok(str, " ");
    char nuova_stringa[100];
    int i = 0;
    while (token != NULL) {
        strcpy(nuova_stringa + i, token);
        i += strlen(token);
        token = strtok(NULL, " ");
    }
    nuova_stringa[i] = '\0';
    strcpy(str, nuova_stringa);
}
