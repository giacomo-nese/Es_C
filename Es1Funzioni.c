#include <stdio.h>
#include <string.h>
// Giacomo Nese Classe 3E
int controllo(int num)
{
    if (num > 0)
    {
        return num;
    }
    else
    {
        return -1;
    }
}
int Somma(int num1, int num2)
{
    int somma;
    somma = num1 + num2;
    return somma;
}
int main(int argc, char *argv[])
{
    int num1, num2, somma;
    do
    {
        printf("Inserisci il primo numero \n");
        scanf("%d", &num1);
    } while (controllo(num1) < 0);
    do
    {
        printf("Inserisci il secondo numero \n");
        scanf("%d", &num2);
    } while (controllo(num2) < 0);
    somma = Somma(num1, num2);
    printf("Somma: %d \n", somma);
    return 0;
}