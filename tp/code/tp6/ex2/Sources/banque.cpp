#include "../Headers/banque.h"
#include <iostream>

Banque::Banque(int size_) {
  Nbrelimit = size_;
  Agence = new Compte[Nbrelimit];
  Nbreel = 0;
}

Banque::~Banque() { delete[] Agence; }

void Banque::add(Compte compte_) {
  Agence[Nbreel] = compte_;
  Nbreel++;
}

void Banque::Delete(const int &numc_) {
  int i, j;
  for (i = 0; i < Nbreel; i++) {
    if (Agence[i].numCompte() == numc_) {
      break;
    }
    for (j = i + 1; j < Nbreel; j++) {
      Agence[j - 1] = Agence[j];
      Nbreel--;
    }
  }
}

Compte Banque::getCompte(const int &numc_) const {
  for (int i = 0; i < Nbreel; i++) {
    if (Agence[i].numCompte() == numc_) {
      break;
    }
  }
  return Agence[numc_];
}

void Banque::afficheAg() const {
  for (int i = 0; i < Nbreel; i++) {
    std::cout << "Compte " << i + 1 << std::endl;
    Agence[i].displayAccount();
    std::cout << "********************" << std::endl;
  }
}
