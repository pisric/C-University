#include "es1C.h"
#include <stdio.h>

int is_prime(int n)
{ 
  int divisore = 2;
  int trovato = 0;
  while(divisore < n && trovato == 0)
  {
    trovato = n % divisore == 0;
    divisore++;
  }
  return !trovato;
      
}

int goldbach(int n)
{
  int ris = n, p1, p2 = 2;
  if (n > 2 && n % 2 == 0)
  {
    while(p2 < n)
    {
      p1 = 2;
      if (is_prime (p2))
      {
        while (p1 <= p2)
        {
          if (is_prime (p1) && p2 == (n - p1) && ris > p1)
            ris = p1;
          p1++;
       }
      }
      p2++;
    }
    return ris;
  }
  else
    return 0;
}
