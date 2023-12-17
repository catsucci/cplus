#include "../Headers/employe.h"
#include <cstring>
/* #include <iostream> */

/* using std::cin; */
/* using std::cout; */
/* using std::endl; */

Employe::Employe() {
  Nom = new char[20];
  Prenom = new char[20];
  Age = 0;
  Anc = 0;
}

Employe::Employe(const char *Nom_, const char *Prenom_, int Age_, int Anc_) {
  Nom = new char[strlen(Nom_) + 1];
  strcpy(Nom, Nom_);
  Prenom = new char[strlen(Prenom_) + 1];
  strcpy(Prenom, Prenom_);
  Age = Age_;
  Anc = Anc_;
}

Employe::Employe(const Employe &e_) {
  Nom = new char[strlen(e_.Nom) + 1];
  strcpy(Nom, e_.Nom);
  Prenom = new char[strlen(e_.Prenom) + 1];
  strcpy(Prenom, e_.Prenom);
  Age = e_.Age;
  Anc = e_.Anc;
}

Employe::~Employe() {
  delete[] Nom;
  delete[] Prenom;
}
