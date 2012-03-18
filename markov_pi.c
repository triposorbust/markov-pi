// markov chain estimation of pi
// ahc : andy c.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "markov_pi.h"

#define TRIAL_COUNT 15

int main()
{
  int i, hits = 0;
  double pi;

  for (i=0; i<TRIAL_COUNT; i++) {
    Posn p = getPosn();
    printf("(%f,%f)\n",p.x,p.y);
  }

  pi = (double)hits / (double)TRIAL_COUNT;
  printf("%f\n",pi);
  return 0;
}

Posn getPosn()
{
  Posn p;
  p.x = (double)rand() / (double)RAND_MAX;
  p.y = (double)rand() / (double)RAND_MAX;
  return p;
}
