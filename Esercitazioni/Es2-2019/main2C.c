#include <stdio.h>
#include "es2C.h"

/*

RICORDARSI di compilare con:
gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o ..... -lm

IMPORTANTE:
NON CONSEGNARE I FILE CONTENENTI main E GLI HEADER

*/

int main()
{
  char s[] = {"UNO"};
  char m[RIGHE][COLONNE] = {"UNOUNO", "NNSABN", "OROABO", "UNOUNO", "NNSANN", "OROABO"};
  int occorrenza;
  
  occorrenza = contaOccorrenze(s, m);
  printf("%d\n", occorrenza);
  return 0;
}
