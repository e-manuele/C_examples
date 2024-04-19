//
// Created by Emanuele on 19/04/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 32

void converti_data(char data1[]);//, char data2[]);

//void estrai_data(char data1[], int giorno, int mese, int anno);

int main() {
    char data1[SIZE];//, t[SIZE];
    fgets(data1, SIZE, stdin);
    converti_data(data1);//, t);
    return EXIT_SUCCESS;
}

void converti_data(char data1[]){//}, char t[]) {
    int giorno;
    int mese;
    int anno;
    char nome_mese[32];
    sscanf(data1, "%d-%d-%d", &anno, &mese, &giorno);
    switch(mese)
    {
        case 1: strcpy(nome_mese, "gennaio"); break;
        case 2: strcpy(nome_mese, "febbraio"); break;
        case 3: strcpy(nome_mese, "marzo"); break;
        case 4: strcpy(nome_mese, "aprile"); break;
        case 5: strcpy(nome_mese, "maggio"); break;
        case 6: strcpy(nome_mese, "giugno"); break;
        case 7: strcpy(nome_mese, "luglio"); break;
        case 8: strcpy(nome_mese, "agosto"); break;
        case 9: strcpy(nome_mese, "settembre"); break;
        case 10: strcpy(nome_mese, "ottobre"); break;
        case 11: strcpy(nome_mese, "novembre"); break;
        case 12: strcpy(nome_mese, "dicembre"); break;
    }
    printf("%d %s  dell'anno %d\n", giorno, nome_mese, anno);

}
