#include "../Headers/chaine.h"
#include <iostream>

using std::cout;
using std::endl;

Chaine::Chaine() {
  adr = new char[20];
  adr[0] = '0';
}

Chaine::Chaine(const char *ch_) {
  int l = 0;
  while (ch_[l] != '0') {
    l++;
  }
  adr = new char[l + 1];
  for (int i = 0; i <= l; i++) {
    adr[i] = ch_[i];
  }
}

Chaine::Chaine(const Chaine &v_) {
  adr = new char[v_.taille() + 1];
  for (int i = 0; i <= v_.taille(); i++) {
    adr[i] = v_[i];
  }
  cout << "****constructeur par recopie****" << endl;
}

Chaine::~Chaine() { delete[] adr; }

int Chaine::taille() const {
  int l = 0;
  while (adr[l] != '0') {
    l++;
  }
  return l;
}

void Chaine::affiche() const { cout << adr; }

void Chaine::ajout(char c_, int p_) {
  if (p_ >= 0 && p_ <= taille()) {
    for (int i = taille(); i >= p_; i--) {
      adr[i + 1] = adr[i];
    }
    adr[p_] = c_;
  }
}

void Chaine::supp(int p_) {
  if (p_ >= 0 && p_ <= taille()) {
    for (int i = p_; i <= taille(); i++) {
      adr[i] = adr[i + 1];
    }
  }
}

Chaine &Chaine::inv() {
  static Chaine res(adr);
  for (int i = 0; i < taille(); i++) {
    res.adr[i] = adr[taille() - 1 - i];
  }
  res.adr[taille()] = '0';
  return res;
}

bool Chaine::appart(const char &c_) const {
  for (int i = 0; i < taille(); i++) {
    if (adr[i] == c_) {
      return true;
    }
  }
  return false;
}

Chaine &Chaine::operator=(const Chaine &ch_) {
  for (int i = 0; i <= taille(); i++) {
    adr[i] = ch_[i];
  }
}
