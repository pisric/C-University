#include <stdio.h>      /*printf*/
#include <time.h>       /*clock_t, clock, CLOCKS_PER_SEC*/
#include <math.h>
#include <stdlib.h>
#define PI 3.14159265358979323846

int main()
{
    clock_t t;
    t = clock();
    {
        int n;       
        int i;        
        double somma;
        int q;         
        double pi2_6;  
        double dif;   
      
        printf("Inserisci il numero: ");
        scanf("%d", &n);
      
        for (i = 1; i <= n; i++)
        {
            q = pow ((double)i, 2.0);
            somma += 1.0/q;
        }
      
        pi2_6 = (PI*PI)/6;
        dif = somma - pi2_6;
      
      
        printf("\nLa somma degli inversi dei quadrati minori e uguali al numero %d e': %.16f", n, somma);
        printf("\nIl risultato di PI2/6: %.16f", pi2_6);
        printf("\nLa differenza tra la somma e il PI2/6 e': %.16f\n", dif);
        printf("\n");

    }
        
    printf("Tempo di esecuzione: %f secondi\n", (clock()-t)/(double)CLOCKS_PER_SEC);
    return 0;
}