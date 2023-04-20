#include <stdio.h>
#include <string.h>
/*Si crei un programma che nel momento dell'esecuzione popoli l'array
argv[] con una serie di numeri. Esempio: $ ./a.out 1 5 9 6
Il programma deve quindi chiedere in input un numero e deve cercarlo 
all'interno dell'array argv.
Se il numero è presente il programma deve dare un messaggio positivo
e deve mostrare la posizione dell'elemento, altrimenti deve stampare a 
video: "numero non presente"
Suggerimento: si usi una funzione per ricercare la posizione dell'
elemento. Tale funzione deve tornare la posizione oppure -1.*/
// Giacomo Nese Classe 3E
int Trovanum(int num, int n, char *argv[])
{
    for(int i = 1; i < num; i++) 
    {
        if(n == atoi(argv[i])) //porto argv da char a int e controllo se è uguale a n cioè il numero inserito
        {
            return i;
        }
        else 
        {
            return -1;
        }
    }
}
int main(int argc, char *argv[])
{
    int num1, posizione;
    printf("Inserisci il numero da ricercare: \n");
    scanf(" %d ", &num1);
    posizione = Trovanum(argc, num1, argv);
    if (posizione > 0) 
    {
        printf("Il numero si torva in posizione %d", posizione);
    }
    else 
    {
        printf("Numero non presente");
    }
    return 0;
}