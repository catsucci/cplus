#include <cstring>
#include <iostream>

#include "../Headers/personne.h"

Personne::Personne() {
  this->nom = new char[50];
  std::strcpy(this->nom, "null");
  this->prenom = new char[50];
  std::strcpy(this->prenom, "null");
  this->age = 0;
  std::cout << "constr par def" << std::endl;
}

Personne::Personne(const char *nom, const char *prenom, const int &age) {
  this->nom = new char[std::strlen(nom) + 1];
  std::strcpy(this->nom, nom);
  this->prenom = new char[std::strlen(prenom) + 1];
  std::strcpy(this->prenom, prenom);
  this->age = age;
  std::cout << "constr" << std::endl;
}

Personne::Personne(const Personne &templ) {
  this->nom = new char[std::strlen(templ.nom) + 1];
  std::strcpy(this->nom, templ.nom);
  this->prenom = new char[std::strlen(templ.prenom) + 1];
  std::strcpy(this->prenom, templ.prenom);
  this->age = templ.age;
  std::cout << "sussy baka" << std::endl;
}

Personne::~Personne() {
  delete[] nom;
  delete[] prenom;
  std::cout << "destruct" << std::endl;
}

Personne &Personne::operator=(const Personne &p) {
  delete[] this->nom;
  delete[] this->prenom;
  this->nom = new char[std::strlen(p.nom) + 1];
  std::strcpy(this->nom, p.nom);
  this->prenom = new char[std::strlen(p.prenom) + 1];
  std::strcpy(this->prenom, p.prenom);
  this->age = p.age;
  std::cout << "fready fazbear" << std::endl;
  return *this;
}

void Personne::affiche() const {
  std::cout << "nom: " << this->nom << std::endl;
  std::cout << "prenom: " << this->prenom << std::endl;
  std::cout << "age: " << this->age << std::endl;
}
