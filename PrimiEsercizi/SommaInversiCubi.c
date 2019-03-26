#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/*Calcolare la somma degli inversi dei cubi dei numeri naturali minori o uguali ad un numero n inserito dall'utente*/

int main ()
{
    int n;         /*input*/
    int i;         /*counter*/
    double somma;
    int c;         /*cubo dle numero*/

    printf("Inserisci il numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        c = pow ((double)i, 3.0);
        somma += 1.0/c;
    }

    printf("\nLa somma degli inversi dei quadrati minori e uguali al numero %d e': %.10f", n, somma);
    printf("\n");

    return 0;
}