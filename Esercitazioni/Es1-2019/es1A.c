#include "es1A.h"
#include <math.h>

double serie_armonica(double epsilon) {
  double sum = 0;           /*risultato serie armonica*/
  double denom = 2.0;
  double fraz = 1.0;

  /*elaborazione*/
  while (epsilon > 0.0 && epsilon < 1.0)
  {
    while(fraz >= epsilon)
     {
       sum += fraz; 
       fraz = 1.0/pow(denom, 2.0);
       denom++;
     }
     return sum;
  }
  return 0.0;
}
