/* somma i primi numeri interi*/
#include <stdio.h>

int n, i = 0;
int tot = 0;

int main()
{
    do
    {
        printf("Inserisci il numero: ");
        scanf("%d", &n);
    } while(n<0);
    for(i = 1; i<=n; i++)
    {
        tot = tot + i;
    }
    printf("Il numero e': %d\n", tot);
    return 0;   
}

 

