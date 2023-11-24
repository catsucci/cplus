#include <iostream>
#include <cstring>

#include "../Headers/personne.h"

Personne::Personne() {
  this->nom = new char [50];
  std::strcpy(this->nom, "null");
  this->prenom = new char [50];
  std::strcpy(this->prenom, "null");
  this->age = 0;
  std::cout << "constr par def" << std::endl;
}

Personne::Personne (const char* nom, const char* prenom, const int& age) {
  this->nom = new char [std::strlen(nom) + 1];
  std::strcpy(this->nom, nom);
  this->prenom = new char [std::strlen(prenom) + 1];
  std::strcpy(this->prenom, prenom);
  this->age = age;
  std::cout << "constr" << std::endl;
}

Personne::~Personne() {
  delete [] nom;
  delete [] prenom;
  std::cout << "destruct" << std::endl;
}

void Personne::affiche() const {
  std::cout << "nom: " << this->nom << std::endl;
  std::cout << "prenom: " << this->prenom << std::endl;
  std::cout << "age: " << this->age << std::endl;
}
