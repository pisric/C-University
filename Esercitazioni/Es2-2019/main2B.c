#include <stdio.h>
#include "es2B.h"

/*

RICORDARSI di compilare con:
gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o ..............   -lm

IMPORTANTE:
NON CONSEGNARE I FILE CONTENENTI main E GLI HEADER

*/

int main() {
  int v[] = {2, 4, 2, 5, 2, 3, 4, 5, 10, 5};
  int m;

  m = moda(v, sizeof(v)/sizeof(v[0]));

  printf("Moda: %d\n", m);

  return 0;
}

