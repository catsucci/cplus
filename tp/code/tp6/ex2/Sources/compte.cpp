#include <cstring>
#include <iostream>

#include "../Headers/compte.h"

int Compte::nbCmp = 0;

Compte::Compte(float credit) {
  Compte::nbCmp++;
  this->num = Compte::nbCmp;
  this->nom = new char[50];
  strcpy(this->nom, "uknown");
  this->solde = credit;
}

Compte::Compte(char *name, float credit) {
  Compte::nbCmp++;
  this->num = Compte::nbCmp;
  this->nom = new char[50];
  strcpy(this->nom, name);
  this->solde = credit;
}

Compte::~Compte() {
  // delete [] this->nom;
  std::cout << "sussy baka" << std::endl;
}

void Compte::updateName(char *name) { strcpy(this->nom, name); }

void Compte::displayAccount() const {
  std::cout << "num de compte: " << this->num << std::endl;
  std::cout << "nom de compte: " << this->nom << std::endl;
  std::cout << "solde de compte: " << this->solde << std::endl;
}

void Compte::addCredit(float &credit) {
  if (0 > credit) {
    std::cout << "How the F can you add negative money man!" << std::endl;
  } else {
    this->solde += credit;
  }
}

void Compte::useCredit(float &credit) {
  if (0 > credit) {
    std::cout << "How the F can you use negative money man!" << std::endl;
  } else {
    this->solde -= credit;
  }
}
