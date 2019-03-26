#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14159265358979323846 /*define definisce la macro chiamata PI, nel codice il precompilatore prende tutti i PI nel codice e li cambia con il valore della macro*/

/*Calcolare la somma degli inversi dei quadrati dei numeri naturali minori o uguali ad un numero n inserito dall'utente
  che risulta uguale a PI*PI/6*/

int main ()
{
    int n;         /*input*/
    int i;         /*counter*/
    double somma;
    int q;         /*quadrato dle numero*/
    double pi2_6;  /*PI*PI/6*/
    double dif;    /*differenza*/
    
    printf("Inserisci il numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        q = pow ((double)i, 2.0); 
        somma += 1.0/q;
    }

    /*Calcolo PI*PI/6*/
    pi2_6 = (PI*PI)/6;
    /*differenza*/
    dif = somma - pi2_6;


    printf("\nLa somma degli inversi dei quadrati minori e uguali al numero %d e': %.16f", n, somma);
    printf("\nIl risultato di PI2/6: %.16f", pi2_6);
    printf("\nLa differenza tra la somma e il PI2/6 e': %.16f\n", dif);
    printf("\n");

    return 0;
}