#include <stdio.h>
#include "es1C.h"

/*

Compilare con:
gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o es1C es1C.c main1C.c -lm

Eseguire con:
./es1C

IMPORTANTE:
NON CONSEGNARE I FILE CONTENENTI main E GLI HEADER

*/

int main()
{
  int i;
  for (i = 0; i <= 1000; i += 2)
  {
    printf("per %d il risultato e': %d\n", i, goldbach (i));
  }

  return 0;
}
