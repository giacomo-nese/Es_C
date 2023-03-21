/*Dato N un numero intero positivo maggiore di 1, generare e visualizzare
il numero precedente. */
//Giacomo Nese Classe 3^E
#include <stdio.h>
int main(int argc, char *argv[])
{
    int N, Nprecedente;
    do
    {
        printf("Inserire un numero N intero maggiore di 1\n");
        scanf("%d", &N);
    } while (N <= 1);
    
    Nprecedente = N-1;
    printf("Il numero precedente a %d è %d \n", N, Nprecedente);
    return 0;
}