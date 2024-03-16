#include <stdio.h>
#include <stdlib.h>

#define SIZE 256

void swapc(char *ptr_x, char *ptr_y);

void strinvert(char v[], int i, int j);

void wordinvert(char v[], int dim);

int main() {
    char v[SIZE];
    fgets(v, SIZE, stdin);
    wordinvert(v, SIZE);
    return EXIT_SUCCESS;
}


void wordinvert(char v[], int dim) {
    int i, j = 0;
    while (v[j] != '\0') {
        if (v[j] == ' ' || v[j] == '\n') {
//            for(int k=i;k<=j;k++){
//                printf("%c",v[k]);
//            }
            strinvert(v, i, j - 1);
            j++;
            i = j;
        }
        j++;
    }
    puts(v);
}

void strinvert(char v[], int i, int j) {
    while (i < j) {
        swapc(&v[i], &v[j]);
        i++;
        j--;
    }
}

void swapc(char *ptr_x, char *ptr_y) {
    char temp;
    temp = *ptr_x;
    *ptr_x = *ptr_y;
    *ptr_y = temp;
}