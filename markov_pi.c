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

  Posn ctr;
  ctr.x = ctr.y = 0.5;

  for (i=0; i<TRIAL_COUNT; i++) {
    Posn p = getPosn();
    if (dist(p,ctr) <= 0.5)
      hits++;
  }

  pi = 4.0 * (double)hits / (double)TRIAL_COUNT;
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

double dist(Posn a, Posn b)
{
  double dx = a.x - b.x;
  double dy = a.y - b.y;
  return sqrt(dx*dx + dy*dy);
}
