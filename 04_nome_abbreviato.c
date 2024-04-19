//
// Created by Emanuele on 12/04/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define SIZE 64


void nome_abbreviato(char *s, char *t);

void elimina_spazi(char *str);

int main() {
    char t[SIZE];
    char v[SIZE];
    fgets(t, SIZE, stdin);
    nome_abbreviato(v, t);
    puts(v);
    return EXIT_SUCCESS;
}


void nome_abbreviato(char v[],char t[]) {

}
