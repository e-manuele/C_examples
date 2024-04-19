//
// Created by Emanuele on 12/04/2024.
//
#include <stdio.h>
#include <stdlib.h>

#define SIZE 64

void complemento2(char v[]);

int main() {
    char v[SIZE];
    fgets(v, SIZE, stdin);
    complemento2(v);
//    puts("Finito");
    puts(v);
    return EXIT_SUCCESS;
}

void complemento2(char v[]) {
    int dim = 0;

    for (int i = 0; v[i] != '\0'; i++) {
        if (v[i] == '\n') {
            v[i] = '\0';
        } else if (v[i] == '0') {
            v[i] = '1';
        } else {
            v[i] = '0';
        }
        dim = i;
    }

    for (int j = dim - 1; j >= 0; j--) {
        if (v[j] == '1') {
            v[j] = '0';
        } else {
            v[j] = '1';
            break;
        }
    }

}



