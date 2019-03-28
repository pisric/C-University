#include "insieme.h"
#include <stdio.h>

int main()
{
    insieme a = {6, 0, 1, 2, 3, 4, 5};
    insieme b = {6, 2, 3, 4, 6, 8, 9};
    int elemento_da_inserire = 5;
    int elemento_da_eliminare = 4;
    insieme risultato;
    inizializza_insieme(risultato);
    printf("intersezione_insiemi:\n");
    intersezione_insiemi(a, b, risultato);
    stampa_insieme(risultato);
    printf("\n");
    printf("elemento_da_inserire: %d\n", elemento_da_inserire);
    printf("inserisci_elemento_insieme:\n");
    inserisci_elemento_insieme(risultato, elemento_da_inserire);
    stampa_insieme(risultato);
    printf("\n");
    printf("elemento_da_eliminare: %d\n", elemento_da_eliminare);
    printf("eliminare_elemento_insieme:\n");
    elimina_elemento_insieme(risultato, elemento_da_eliminare);
    stampa_insieme(risultato);
    printf("\n");
    inizializza_insieme(risultato);
    printf("unione_insiemi:\n");
    unione_insiemi(a, b, risultato);
    stampa_insieme(risultato);
    printf("\n");
    inizializza_insieme(risultato);
    printf("differenza_insiemi:\n");
    differenza_insiemi(a, b, risultato);
    stampa_insieme(risultato);
    printf("\n");

    
    return 0;
}