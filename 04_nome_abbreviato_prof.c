
#include <stdio.h>
#include <stdlib.h>


void nome_abbreviato (char t[], char s[]);


int main()
{
    char s[64], t[64];

    printf ("inserisci cognome, nome: ");
    gets (s);

    nome_abbreviato (t, s);
    printf ("l'abbreviazione di %s e` %s\n\n", s, t);

    return EXIT_SUCCESS;
}
///  cognome, nome nome2 nome3

void nome_abbreviato (char t[], char s[])
{
    int i, j, inparola;

    // abbrevia il nome

    j = 0;  // indice di t

    // posiziona l'indice di s sulla virgola;
    i = 0;
    while (s[i] != ',')
        i++;

    // salta la virgola;
    i++;

    inparola = 0;

    while (s[i] != '\0')
    {
        if (s[i] != ' ')  // posizionati sull'iniziale della prossima parola; (algoritmo con flag del word count)
        {
            if (!inparola)
            {
                // ho trovato un'iniziale
                t[j] = s[i];  // copia l'iniziale in t
                j++;
                t[j] = '.';  // aggiungi il .
                j++;
                t[j] = ' ';  // aggiungi lo spazio
                j++;   // j e` sempre l'indice del prossimo carattere da riempire

                // modifica il flag
                inparola = 1;

                // avanza in s
                i++;
            }
            else
            {
                // eravamo gia` in una parola
                i++;
            }
        }
        else
        {
            // siamo su uno spazio
            inparola = 0;

            // procedi
            i++;
        }
    }


    // copia il cognome

    // ritorna all'inizio della stringa s;
    i = 0;

    // copia fino alla virgola;
    while (s[i] != ',' && s[i] != '\0')  // basterebbe s[i] != ','
    {
        t[j] = s[i];
        i++;
        j++;
    }

    // termina t con '\0';
    t[j] = '\0';

    return;
}