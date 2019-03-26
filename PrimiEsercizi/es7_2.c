#include <stdio.h>      /*printf*/
#include <time.h>       /*clock_t, clock, CLOCKS_PER_SEC*/
#include <math.h>
#include <stdlib.h>

int main()
{
    clock_t t;
    t = clock();
    {
        int n, i; 
        double somma;
        double q;
        
        printf("Inserisci un numero: ");
        scanf("%d", &n);
          
        for(i=1; i<=n; i=i+2)
        {
            q = pow ((double)i, 2.0); 
            somma += 1.0/q;
        }
        printf("\nLa somma degli inversi dei quadrati dei numeri dispari minori e uguali al numero %d e': %.7f\n", n, somma);
    }

    printf("Tempo di esecuzione: %f secondi\n", (clock()-t)/(double)CLOCKS_PER_SEC);
    return 0;
}
