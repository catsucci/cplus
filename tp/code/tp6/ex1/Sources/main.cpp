#include <iostream>

#include "../Headers/personne.h"
#include "../Sources/personne.cpp"

int main(int argc, char *argv[]) {
  Personne *p1, p2("amogus", "imposter", 20), p3(p2), p4;
  p2.affiche();
  p1 = new Personne;
  p1->affiche();
  delete p1;
  p3.affiche();
  std::cout << "I'm gay" << std::endl;
  p4 = p3;
  std::cout << "I'm gay" << std::endl;
  return 0;
}
