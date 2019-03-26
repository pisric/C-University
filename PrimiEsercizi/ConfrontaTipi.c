#include <stdio.h>

/*Confrontare i valori assegnati alle variabili nei seguenti casi*/

int main()
{
    int n = 123456;
    double a = 1/(n*n);
    double b = 1.0/(n*n);
    double c = 1.0/((double)n*n);
    printf(" n=%d\n a=%.16f\n b=%.16f\n c=%.16f\n\n", n, a, b, c);

    /*Confronti*/
    if (a == b)
        printf("\na == b: True");
    else
    {
        printf("\na == b: Falso");
    }
    /*Confronti*/
    if (a == c)
        printf("\na == c: True");
    else
    {
        printf("\na == c: Falso");
    }
    /*Confronti*/
    if (b == c)
        printf("\nb == c: True");
    else
    {
        printf("\nb == c: Falso\n");
    }
    

    return 0;
}

/*
    n è un intero
    a è un double in quanto è il rapporto int/int 
    b è un double in quanto è il rapporto double/int ---> int viene promosso a double
    c è un double in quanto è il rapporto double/double
*/