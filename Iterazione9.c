/*Dati due numeri interi e positivi N1 e N2 con N2>N1, generare e
visualizzare in ordine decrescente i numeri compresi tra N1 e N2. */
// Giacomo Nese Classe 3^E
#include <stdio.h>
int main(int argc, char *argv[])
{
    int N, N2;
    do
    {
        printf("Inserire un numero N intero positivo\n");
        scanf("%d", &N);
        printf("Inserire un numero N2 intero positivo\n");
        scanf("%d", &N2);
        if (N < 0) 
        {
            printf("N deve essere positivo\n");
        }
        if (N2 < 0) 
        {
            printf("N2 deve essere positivo\n");
        }
        if (N > N2) 
        {
            printf("N2 deve essere maggiore di N\n");
        }
    } while (N < 0 || N2 < 0 || N>N2);
    printf("Numeri compresi tra N e N2: \n");
    for (int i = N2-1; i > N; i--)
    {
        printf("%d \n", i);
    }
    return 0;
}