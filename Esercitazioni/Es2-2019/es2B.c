#include "es2B.h"

int moda(int v[], int n)
{
  int i, j;
  int swap;
  int count;
  int max = 0;
  int ris;
  ris = 0;
  /*ordinamento array*/
  for(i=0; i<n; i++)
    for(j=i; j<n; j++)
      if(v[j]<v[i])
      {
        swap = v[j];
        v[j] = v[i];
        v[i] = swap;
      }
  /*conto elementi uguali*/
  for(i=0; i<n; i++)
  {    
    count = 1;

    for(j=i+1; j<n; j++)
      if(v[i]==v[j])
      {
        count++;
        i++;
      }

    if(count > max)
    {
      max = count;
      ris = v[i];
    }
    
  }
  
  return ris;
}
