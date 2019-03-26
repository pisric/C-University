#include <stdio.h>
#include "es2A.h"

/*

RICORDARSI di compilare con:
gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o es2A main2A.c es2A.c -lm

IMPORTANTE:
NON CONSEGNARE I FILE CONTENENTI main E GLI HEADER

*/

  

int main() {
  char str0[] = {"Questa stringa contiene molti spazi"};
  char str1[] = {"    Questa      stringa    contiene    molti    spazi    "};
  char str2[] = {" Questa      stringa    contiene    molti    spazi"};
  char str3[] = {"Questa      stringa    contiene    molti    spazi    "};
  char str4[] = {"      "};
  char str5[] = {""};
  riduciSpazi(str0);
  riduciSpazi(str1);
  riduciSpazi(str2);
  riduciSpazi(str3);
  riduciSpazi(str4);
  riduciSpazi(str5);
  printf("%s;\n%s;\n%s;\n%s;\n%s;\n%s;\n", str0, str1, str2, str3, str4, str5);
  return 0;
}
