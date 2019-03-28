/*
 * Si supponga di rappresentare gli insiemi di interi 
 * utilizzando degli array per memorizzare gli elementi 
 * presenti in ciascun insieme nel seguente modo:
 * • la prima posizione dell’array contiene il numero di elementi presenti. Un insieme di 5 elementi 
 *   viene rappresentato utilizzando le prime 6 posizioni dell’array
 * • i nuovi elementi vengono inseriti dopo l’ultimo elemento già inserito
 * • se un elemento è già presente non viene inserito (si tratta di un insieme), quindi tutti gli elementi presenti nel
 * array (nelle posizioni successive a quella utilizzata per indicare la cardinalità) devono essere distinti
 * • le operazioni sugli insiemi devono ritornare degli insiemi validi (senza duplicati)
 */
#include <stdio.h>
#include "insieme.h"


/* Inizializza l'insieme A impostando il numero di elmenti a 0*/
void inizializza_insieme (insieme A)
{ 
    A[0] = 0;
    return;
}


/* funzione che ordina l'insieme*/
void ordina_insieme(insieme A)
{
    int i;
    int swap;
    int pass;
    for(pass = 1; pass <= A[0]; pass++)
        for(i=1; i<A[0]; i++)
            if(A[i] > A[i+1])
            {
                swap = A[i];
                A[i] = A[i+1];
                A[i+1] = swap;
            }
    
    return;
}


/* Restituisce 1 se l'insieme A contiene x, 0 altrimenti*/
int insieme_contiene(insieme A, int x)
{
    int i = 1;
    int value = 0;
    while(i < A[0] && !value)
    {
        if(x == A[i])
           value = 1; 
        i++;
    }
    return value;
}


/* Inserisce l'elemento x nell'insieme A
 * restituisce 1 in caso di successo, 0 se non c'e' spazio per nuovi elementi
 */
int inserisci_elemento_insieme(insieme A, int x)
{
    int ris = insieme_contiene(A, x);
    int lenght;

    if(ris)
        return 0;

    if(A[0] > MAX_ELEMENTI)
        return 0;
        
    A[0]++;
    lenght = A[0];
    A[lenght] = x;
    ordina_insieme(A);
    return 1;
}


/*funzione che cerca la posizione dell'elemento x*/
int posizione_elemento(insieme A, int x)
{
    int i = 1;
    int value = 0;
    while(i < A[0] && !value)
    {
        if(x == A[i])
           value = 1; 
        i++;
    }
    return i;
}


/* Elimina elemento x dall'insieme A
 * restituisce 1 in caso di successo, 0 se x e' assente
 */
int elimina_elemento_insieme(insieme A, int x)
{
    int pos = posizione_elemento(A, x)-1;
    int ris = insieme_contiene(A, x);

    if(!ris)
        return 0;
    else
    {
        while(pos<=A[0])
        {
            A[pos] = A[pos+1]; 
            pos++;
        }
        A[0]--;
        ordina_insieme(A);
        return 1;
    }
}


/* Inserisce nell'insieme risultato gli elementi comuni ad A e B*/
int intersezione_insiemi(insieme A, insieme B, insieme risultato)
{
    int i = 1;
    int j = 1;
    int y = 1;
    int continua = 1;

    /*ordina insiemi*/
    ordina_insieme(A);
    ordina_insieme(B);

    /*caso base*/
    if(A[0] == 0 || B[0] == 0)
        return 0;
    while(i<=A[0] && continua)
    {
        if(A[i] == B[j])
        {
            risultato[0]++;
            risultato[y] = A[i];
            y++;
            i++;
            j++;
        }
        else
            if(A[i] < B[j])
                i++;
            else
            {
                if(B[0] < j)
                    continua = 0;
                j++;
            }
    }
    return 0;
}


/* Inserisce (una sola volta) nell'insieme risultato gli elementi contenuti in A o B (o entrambi, non esclusivo)*/
int unione_insiemi(insieme A, insieme B, insieme risultato)
{
    int i, j;
    inizializza_insieme(risultato);
    for(i=1; i<=A[0]; i++)
    {
        inserisci_elemento_insieme(risultato, A[i]);
    }
    for(j=1; j<=B[0]; j++)
    {
        inserisci_elemento_insieme(risultato, B[i]);
    }
    return 0;
}


/* Inserisce nell'insieme risultato gli elementi contenuti in A ma non in B*/
int differenza_insiemi(insieme A, insieme B, insieme risultato)
{
    int i = 1;
    int j;
    int trovato;

    /*ordina insiemi*/
    ordina_insieme(A);
    ordina_insieme(B);

    inizializza_insieme(risultato);

    while(i<=A[0])
    {
        trovato = 0;
        j = 1;
        while(j<=B[0] && trovato == 0)
        {
            if(A[i] == B[j])
                trovato = 1;
            j++;
        }
        if(trovato == 0)
            inserisci_elemento_insieme(risultato, A[i]);
        i++;
    }
    
    return 0;
}


/*funzione che stampa l'insieme*/
void stampa_insieme(insieme risultato)
{
    int i;

    for(i=1; i <= risultato[0]; i++)
        printf("%d\n", risultato[i]);

    printf("\n");

    return;
}