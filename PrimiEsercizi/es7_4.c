#include <stdio.h>      /* printf */
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */

int main (){
  clock_t t,nt;
  t = clock();
  while (t<100000) {
    nt = clock();
    if (t!=nt)
       printf("+%ld %f (%ld)\n",nt-t,(nt-t)/(double)CLOCKS_PER_SEC,nt);
    t = nt;
  }
  return 0;
}