#include <stdio.h>
int Palindroma (char Stringa1[], int Lunghezza)
{
    int risultato = 0;
    int c = 0;
    for (int i = Lunghezza-1; i >= 0; i--)
    {
        if (Stringa1[i] == Stringa1[c])
        {

        }
        else 
        {
            risultato = 1;
        }
        c++;
    }
    return risultato;
}
int main(int argc, char *argv[])
{
    int Lunghezza, risultato;
    do{
    printf("Inserisci la lunghezza della stringa: \n");
    scanf("%d", &Lunghezza);
    } while(Lunghezza <= 0);
    char Stringa1[Lunghezza];
    printf("Inserisci la stringa: \n");
    scanf("%s", Stringa1);
    risultato = Palindroma(Stringa1, Lunghezza);
    if (risultato == 0)
    {
        printf("La stringa è palindroma");
    }
    else 
    {
        printf("La stringa non è palindroma");
    }
    return 0;
}