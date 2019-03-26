#include <stdio.h>

/*Scrivere 10 linee contenenti il numero della linea e il testo Hello*/

int main ()
{
    int i;
    for(i=0; i<10; i++)
    {
        printf("%d: Hello!\n", i);
    }
    return 0;
}