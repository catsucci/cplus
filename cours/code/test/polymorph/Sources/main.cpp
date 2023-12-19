#include "../Headers/employe.h"

int main(int argc, char *argv[]) {

  Personne *p = new Employe;
  p->affiche();
  delete p;

  Employe *e = new Employe;
  e->affiche();
  delete e;

  return 0;
}
