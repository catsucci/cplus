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
  delete [] adr;
  adr = new char [ch_.taille() + 1];
  for (int i = 0; i <= taille(); i++) {
    adr[i] = ch_[i];
  }
  cout << "***operateur d'affectation" << endl;
  return *this;
}

bool Chaine::operator==(const Chaine & ch_) const {
  int i;
  if (ch_.taille() == taille()) {
    for (i = 0; i < taille(); i++) {
      if (adr[i] != ch_.adr[i]) {
        return false;
      }
    }
    return true;
  } else {
    return false;
  }
}

Chaine & Chaine::operator+(const Chaine & ch_) {
  int i;
  static Chaine res;
  delete [] res.adr;
  res.adr = new char [ch_.taille() + taille() + 1];
  for (i = 0; i < taille(); i++) {
    res.adr[i] = adr[i];
  }
  for (i = taille(); i <= taille() + ch_.taille(); i++) {
    res.adr[i] = ch_.adr[i - taille()];
  }
  return res;
}

char Chaine::operator[] (int i_)const {
  return adr[i_];
}

ostream & operator<<(ostream & ostr, const Chaine & ch_) {
  ostr << ch_.adr << endl;
  return ostr;
}
istream & operator>>(istream & istr, Chaine & ch_) {
  istr >> ch_.adr;
  return istr;
}
