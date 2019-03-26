#include "es1B.h"
#include <stdio.h>
#include <math.h>

double radice_quadrata(double x, double epsilon) {
  long double a = 1.0;
  long double b = x;

  while(x >= 1 && epsilon > 0)
  { 
    long double b_less_a = b-a;
    long double ris = (a+b)/2.0;
    while(b_less_a >= epsilon)
    { 
      b_less_a = b-a;
      ris = (a+b)/2.0;
      if(ris*ris < x)
        a = ris;
      else
        b = ris;
    }
    return ris;
  } 
  return 0.0;
}

