//
// Created by Emanuele on 15/03/2024.
//
#include <stdio.h>
#include <stdlib.h>

#define SIZE 32

char strcatenate(char t[], char s[]);

void strcopy(char t[], char s[]);

int main() {
    char s[SIZE];
    char t[SIZE];
    char z[SIZE];

    printf("Inserisci la prima stringa: ");
    scanf("%s", t);

    printf("Inserisci la seconda stringa: ");
    scanf("%s", s);

    z[SIZE] = strcatenate(t, s);
    printf("la stringa concatenata e': %s ", z);

    return EXIT_SUCCESS;
}

char strcatenate(char t[], char s[]) {
    char z[SIZE];
    int i = 0;
    while (t[i] != '\0') {
        z[i] = t[i];
        i++;
    }

    int j = 0;
    while (s[j] != '\0') {
        z[i + j] = s[j];
        j++;
    }
    z[i + j] = '\0';

    return z[i + j];
}
