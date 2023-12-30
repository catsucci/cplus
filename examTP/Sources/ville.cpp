#include "../Headers/ville.h"
#include <iostream>

Ville::Ville() {
  nom = new char[20];
  for (int i = 0; i < 20; i++) {
    nom[i] = '0';
  }
  nbre = -1;
}

Ville::Ville(const char *nom_, const int &nbre_) {
  int l = 0;
  while (nom_[l] != '0') {
    l++;
  }
  nom = new char[l + 1];
  for (int i = 0; i <= l; i++) {
    nom[i] = nom_[i];
  }
  nbre = nbre_;
}

Ville::~Ville() { delete[] nom; }

void Ville::Print() {
  std::cout << "Nom du ville: " << nom << std::endl;
  std::cout << "nombre d'abitants du ville: " << nbre << " abitants"
            << std::endl;
}

Ville::Ville(const Ville &v_) {
  int l = 0;
  while (v_.nom[l] != '0') {
    l++;
  }
  nom = new char[l + 1];
  for (int i = 0; i <= l; i++) {
    nom[i] = v_.nom[i];
  }
  nbre = v_.nbre;
}

int Ville::taille() const {
  int l = 0;
  while (nom[l] != '0') {
    l++;
  }
  return l;
}

Ville Ville::operator=(const Ville &v_) {
  delete[] nom;
  nom = new char[v_.taille() + 1];
  for (int i = 0; i <= taille(); i++) {
    nom[i] = v_.nom[i];
  }
  return *this;
}

ostream &operator<<(ostream &ostr, const Ville &v_) {
  ostr << "[" << v_.nom << ", " << v_.nbre << "]" << std::endl;
  return ostr;
}
istream &operator>>(istream &istr, Ville &v_) {
  istr >> v_.nom;
  istr >> v_.nbre;
  return istr;
}
