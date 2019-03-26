#include <stdio.h>

/*Calcolare la somma dei numeri naturali minori o uguali ad un numero n inserito dall'utente*/

int main()
{
    int n, i = 0;
    int somma = 0;
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        somma = somma + i;    /*o somma += i*/
    }
    printf("\nSomma = %d\n", somma);
    return 0;
}