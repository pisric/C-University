#include "es2C.h"

/*calcolo lunghezza stringa*/ 
int strlength(char s[])
{
  int i;
  for(i=0; s[i] != '\0'; i++);
  return i;
}

int contaRighe(char M[][COLONNE])
{
  int i;
  for(i=0; M[i][0] != '\0'; i++);
  return i;
}

int contaColonne(char M[][COLONNE])
{
  int i;
  for(i=0; M[0][i] != '\0'; i++);
  return i;
}

int controllaRiga(char s[], char M[RIGHE][COLONNE])
{
  int r;  /*contatore righe*/ 
  int c;  /*contatore colonne*/
  int i;  /*contatore stringa*/
  int dim;
  int paroler = 0;
  int controllor;
  dim = strlength(s);
  
  for(r=0; r<RIGHE; r++)
    for(c=0; c<COLONNE; c++)
    {
      if(M[r][c] == s[0])
      {
        controllor = 1;
        for(i=0; i<dim && controllor; i++)
          if(M[r][c+i] != s[i])
            controllor = 0;
        if(controllor == 1)
          paroler++;
      }
    }
  return paroler;
}

int controllaColonna(char s[], char M[RIGHE][COLONNE])
{
  int r;  /*contatore righe*/ 
  int c;  /*contatore colonne*/  
  int i; /*contatore stringa*/
  int dim;
  int parolec = 0;
  int controlloc;
  dim = strlength(s);
  i = 0;
  
  for(r=0; r<RIGHE; r++)
    for(c=0; c<COLONNE; c++)
    {
      if(M[r][c] == s[0])
      {
        controlloc = 1;
        for(i=0; i<dim && controlloc; i++)
          if(M[r+i][c] != s[i])
            controlloc = 0;
        if(controlloc == 1)
          parolec++;
      }
    }
  return parolec;
}

int controllaDiagonale(char s[], char M[RIGHE][COLONNE])
{
  int r;  /*contatore righe*/ 
  int c;  /*contatore colonne*/
  int i;  /*contatore stringa*/
  int dim;
  int paroled = 0;
  int controllod;
  dim = strlength(s);
  
  for(r=0; r<RIGHE; r++)
    for(c=0; c<COLONNE; c++)
    {
      if(M[r][c] == s[0])
      {
        controllod = 1;
        for(i=0; i<dim && controllod; i++)
          if(M[r+i][c+i] != s[i])
            controllod = 0;
        if(controllod == 1)
          paroled++;
      }
    }
  return paroled;
}

int contaOccorrenze(char s[], char M[RIGHE][COLONNE]) {
  int somma;
  somma = 0;
  
  somma = controllaRiga(s, M) + controllaColonna(s, M) + controllaDiagonale(s, M);

  return somma;
}


