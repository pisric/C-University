#include <stdio.h>      /*printf*/
#include <time.h>       /*clock_t, clock, CLOCKS_PER_SEC*/
#include <math.h>
#include <stdlib.h>

int main()
{
    clock_t t;
    t = clock();
    {
        int n;
        int i;     
        double somma;
        int c; 
          
        printf("Inserisci il numero: ");
        scanf("%d", &n);
          
        for (i = 1; i <= n; i++)
        {
            c = pow ((double)i, 3.0);
            somma += 1.0/c;
        }
          
        printf("\nLa somma degli inversi dei quadrati minori e uguali al numero %d e': %.10f", n, somma);
        printf("\n");

    }

    printf("Tempo di esecuzione: %f secondi\n", (clock()-t)/(double)CLOCKS_PER_SEC);
    return 0;
}