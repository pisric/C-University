#include <stdio.h>
#include <math.h>

int main()
{
    /*
    scrivere i primi cinque numeri naturali che siano un cubo perfetto
    da uno e verificando per ciascun numero che la radice cubica sia intera
    */
   int i = 1;
   int trovati = 0;
   double radice_cubica;
   while(trovati<=5)
   {
       radice_cubica = pow (i, 1.0/3.0);
       printf("i=%d radice cubica:%16f\n", i, radice_cubica); /*DEBUGGER printf stampa l'intero più vicino alla precisione richiesta*/
       if(radice_cubica == floor(radice_cubica))
       {
           trovati++;
           printf("%d: i=%d radice cubica:%16f\n", trovati, i, radice_cubica);
       }
       i++;
   }

   return 0;
   
}