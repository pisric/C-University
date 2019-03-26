#include "es2A.h"

int dimensione(char str[])
{
  int i;
  for(i=0; str[i] != '\0'; i++);
  return i;
}

void riduciSpazi(char str[]) {
  char space = ' ';
  int i;
  int s;  /*spazi*/
  int j;
  s=0;
  /*scorro la stringa*/
  for(i=0; str[i] != '\0'; i++)
  {
    if(str[i] == space)
    {
      if(s > 0 && i > 0)
      {
        for(j=i; str[j] != '\0'; j++)
          str[j] = str[j+1];
        i = i-1;
      }
      
      s++;
    }
    else
      s = 0;
  }
  return;
}
