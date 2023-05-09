/*Dato un array di dimensione massima pari a SHRT_MAX,
inserire in input un numero arbitrario di interi positivi.
L'inserimento termina quando viene inserito il valore -1.

Si mostri quindi un menu cosi strutturato:
    premere 1 per mostrare il contenuto dell'array
    premere 2 per inserire un elemento in coda
    premere 3 per modificare un elemento, se presente
    premere 4 per eliminare un elemento, se presente
    premere 5 per ricercare un elemento
    premere 6 per inserire un elemento in una certa posizione
    premere 7 per mostrare il contenuto dell'array all'inverso
    premere 8 per mostrare il valore massimo dell'array
    premere 0 per terminare

dopo ogni operazione il menu deve essere nuovamente mostrato.

osservazione:
SHRT_MAX è dichiarata in limits.h

Vincolo:
è obbligatorio strutturare il programma in funzioni
*/
// Giacomo Nese Classe 3E
#include <stdio.h>
#include <limits.h>
int Inserimento(int numeri[])
{
    int numero;
    int continua = 1, i = 0;
    do
    {
        printf("Inserisci un numero intero positivo \n");
        scanf("%d", &numero);
        if (numero > 0)
        {
            numeri[i] = numero;
            i++;
        }
        else if (numero < 0 && numero != -1)
        {
            printf("ERRORE, puoi inserire solo numeri interi positivi \n");
        }
        else if (numero == -1)
        {
            continua = 0;
        }
    } while (continua == 1);
    return i;
}
int Menu()
{
    int scelta;
    printf("MENU \n");
    printf("premere 1 per mostrare il contenuto dell'array \n");
    printf("premere 2 per inserire un elemento in coda \n");
    printf("premere 3 per modificare un elemento, se presente \n");
    printf("premere 4 per eliminare un elemento, se presente \n");
    printf("premere 5 per ricercare un elemento \n");
    printf("premere 6 per inserire un elemento in una certa posizione \n");
    printf("premere 7 per mostrare il contenuto dell'array all'inverso \n");
    printf("premere 8 per mostrare il valore massimo dell'array \n");
    printf("premere 0 per terminare \n");
    scanf("%d", &scelta);
    return scelta;
}
void Stampa(int numeri[], int lunghezza)
{
    printf("Contenuto dell'array: \n");
    for (int i = 0; i < lunghezza; i++)
    {
        printf("%d", numeri[i]);
        printf("\n");
    }
}
void InserimentoCoda(int numeri[], int *puntatore, int numero)
{
    numeri[*puntatore] = numero;
    (*puntatore)++;
}
int Trova(int numeri[], int lunghezza, int numero)
{
    int trovato = 0;
    for (int i = 0; i <= lunghezza; i++)
    {
        if (numeri[i] == numero)
        {
            trovato = 1;
        }
    }
    return trovato;
}
void Modifica(int numeri[], int lunghezza, int numero, int numero2)
{
    for (int i = 0; i < lunghezza; i++)
    {
        if (numeri[i] == numero)
        {
            numeri[i] = numero2;
        }
    }
}
int Elimina(int numeri[], int lunghezza, int numero)
{
    for (int i = 0; i < lunghezza; i++)
    {
        if (numeri[i] == numero)
        {
            for (int j = i; j < lunghezza; j++)
            {
                numeri[j] = numeri[j + 1];
            }
        }
    }
    return lunghezza - 1;
}
int TrovaConPosizione(int numeri[], int lunghezza, int numero)
{
    int posizione;
    for (int i = 0; i < lunghezza; i++)
    {
        if (numeri[i] == numero)
        {
            posizione = i;
        }
    }
    return posizione;
}
void InserimentoDeciso(int numeri[], int lunghezza, int numero, int posizione)
{
    for (int i = 0; i < lunghezza; i++)
    {
        if (i == posizione)
        {
            numeri[posizione] = numero;
        }
    }
}
void StampaInverso(int numeri[], int lunghezza)
{
    for (int i = lunghezza - 1; i >= 0; i--)
    {
        printf("%d \n", numeri[i]);
    }
}
int Massimo(int numeri[], int lunghezza)
{
    int max = numeri[0];
    for (int i = 0; i < lunghezza; i++)
    {
        if (numeri[i] > max)
        {
            max = numeri[i];
        }
    }
    return max;
}
int Funzionalita(int numeri[], int sceltaUtente, int *puntatore)
{
    // Variabili di supporto per utilizzare le varie funzioni
    int numero, numero2, posizione;
    int numerodainserire, max;
    int trovato;
    switch (sceltaUtente)
    {
    case 1:
        Stampa(numeri, *puntatore);
        break;
    case 2:
        printf("Inserisci un numero in coda: \n");
        scanf("%d", &numerodainserire);
        InserimentoCoda(numeri, puntatore, numerodainserire);
        break;
    case 3:
        printf("Quale numero vuoi modificare \n");
        scanf("%d", &numero);
        trovato = Trova(numeri, *puntatore, numero);
        if (trovato == 1)
        {
            printf("Inserisci il nuovo valore \n");
            scanf("%d", &numero2);
            Modifica(numeri, *puntatore, numero, numero2);
        }
        else
        {
            printf("ERRORE, il numero non è presente \n");
        }
        break;
    case 4:
        printf("Quale numero vuoi eliminare \n");
        scanf("%d", &numero);
        trovato = Trova(numeri, *puntatore, numero);
        if (trovato == 1)
        {
            *puntatore = Elimina(numeri, *puntatore, numero);
        }
        else
        {
            printf("ERRORE, il numero non è presente");
        }
        break;
    case 5:
        printf("Quale numero vuoi cercare: \n");
        scanf("%d", &numero);
        posizione = TrovaConPosizione(numeri, *puntatore, numero);
        printf("Il numero si trova in posizione %d \n", posizione);
        break;
    case 6:
        printf("Quale numero vuoi inserire: \n");
        scanf("%d", &numero);
        printf("In quale posizione vuoi inserirlo: \n");
        scanf("%d", &posizione);
        InserimentoDeciso(numeri, *puntatore, numero, posizione);
        break;
    case 7:
        printf("Array Inverso: \n");
        StampaInverso(numeri, *puntatore);
        break;
    case 8:
        max = Massimo(numeri, *puntatore);
        printf("Il numero massimo presente all'interno dell'Array è: %d \n", max);
        break;
    }
}
int main(int argc, char *argv[])
{
    int sceltaUtente, menuon = 1, lunghezzaArray;
    int numeri[SHRT_MAX];
    lunghezzaArray = Inserimento(numeri);
    do
    {
        sceltaUtente = Menu();
        if (sceltaUtente == 0)
        {
            menuon = 0;
        }
        else
        {
            Funzionalita(numeri, sceltaUtente, &lunghezzaArray); /*Passo l'indirizzo della lunghezza dell'array nel caso in cui essa deva andare a variare*/
        }

    } while (menuon == 1);
    printf("Il programma è finito");
    return 0;
}