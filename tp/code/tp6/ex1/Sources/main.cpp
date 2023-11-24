#include <iostream>

#include "../Headers/personne.h"
#include "../Sources/personne.cpp"

int main (int argc, char *argv[]) {
  Personne* p1, p2("amogus", "imposter", 20);
  p2.affiche();
  p1 = new Personne;
  p1->affiche();
  delete p1;
  return 0;
}
