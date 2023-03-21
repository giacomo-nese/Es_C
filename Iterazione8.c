/*Dato N un numero intero positivo, generare e visualizzare in ordine
decrescente i primi N numeri interi positivi.*/
// Giacomo Nese Classe 3^E
#include <stdio.h>
int main(int argc, char *argv[])
{
    int N;
    do
    {
        printf("Inserire un numero N intero positivo\n");
        scanf("%d", &N);
    } while (N < 0);
    printf("Numeri interi positivi contenuti in N in ordine decrescente \n");
    for (int i = N; i >= 0; i--)
    {
        printf("%d \n", i);
    }
    return 0;
}