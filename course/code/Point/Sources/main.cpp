#include <iostream>

#include "../Headers/point.h"
#include "./point.cpp"

int main (int argc, char *argv[]) {

  const Point c;
  c.affiche();
  Point p(1,2), q, *r;
  p.affiche();
  q.saisie();
  q.affiche();
  Point::afficheNumOfPoints();  
  r = new Point(5);
  r->affiche();
  Point::afficheNumOfPoints();  
  delete r;
  
  return 0;
}
