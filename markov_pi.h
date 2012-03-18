// declarations header file for markov_pi
// ahc : andy c.

struct posn {
  double x;
  double y;
};
typedef struct posn Posn;

Posn getPosn();

double dist(Posn, Posn);
