//
// Created by Emanuele on 16/03/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SIZE 256
int frase_palindroma (char s[]);

int main() {
    char v[SIZE];
    fgets(v, SIZE, stdin);
    if (frase_palindroma(v)) {
        puts("palindroma");
    } else {
        puts("non palindroma");
    }

    return 0;
}
int frase_palindroma (char s[]){
    int i, j, len = strlen(s);

    // Elimina spazi e caratteri non alfanumerici
    for (i = j = 0; s[i] != '\0'; i++) {
        if (isalnum(s[i])) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
    len = strlen(s);

    // Controlla se la stringa è palindroma
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (s[i] != s[j]) {
            return 0; // Non è palindroma
        }
    }

    return 1; // È palindroma
}
