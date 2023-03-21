/*Dato N un numero intero positivo, calcolare e visualizzare la somma dei
primi N numeri interi. */
// Giacomo Nese Classe 3^E
#include <stdio.h>
int main(int argc, char *argv[])
{
    int N, somma = 0;
    do
    {
        printf("Inserire un numero N intero positivo\n");
        scanf("%d", &N);
        if (N < 0)
        {
            printf("N deve essere positivo\n");
        }
    } while (N < 0);

    for (int i = 0; i <= N; i++)
    {
        somma = somma + i;
    }
    printf("La somma dei numeri che compongono %d è %d \n", N, somma);
    return 0;
}