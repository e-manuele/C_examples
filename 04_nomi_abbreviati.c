//
// Created by Emanuele on 17/03/2024.
//
#include <stdio.h>
#include <string.h>

#define SIZE 256

void nome_abbreviato(char *s, char *t);

int main() {
    char s[SIZE];
    char t[SIZE];
    fgets(t, SIZE, stdin);

    nome_abbreviato(s, t);
    puts(t);
    return 0;
}

void nome_abbreviato(char *s, char *t) {
    int j  =0;
    int len = strlen(s);
    int i = len;
    while (s[i] != ',') {
        compact_name();
    }
}
int compact_name(){
    return index;
}

/*
Della Valle Di Sotto, Pier Luigi
P. L. Della Valle Di Sotto
Della Scala, Ferdinando Giuseppe Filippo Ugo
F. G. F. U. Della Scala
Rossi, Mario
M. Ross
 */