#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*Calcolare la somma degli inversi dei quadrati dei primi n numeri dispari, con n numero intero inserito dall'utente*/

int n, i;   /*input, counter*/
double somma;
double q;      /*square*/

int main()
{
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    /*calcola i numeri dispari tra 0 e n attraverso il ciclo for*/
    for(i=1; i<=n; i=i+2)
    {
        q = pow ((double)i, 2.0); 
        somma += 1.0/q;
    }
    printf("\nLa somma degli inversi dei quadrati dei numeri dispari minori e uguali al numero %d e': %.7f\n", n, somma);

    return 0;
}