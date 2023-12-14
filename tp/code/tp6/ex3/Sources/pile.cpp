#include <iostream>

#include "../Headers/pile.h"

using std::cout;
using std::endl;

Pile::Pile(int t_) {
  dim = t_;
  taille = 0;
  adr = new int[dim];
  for (int i = 0; i < dim; i++) {
    *(adr + i) = -0;
  }
}

Pile::Pile(const Pile & obj_) {
  int i;
  dim = obj_.dim;
  taille = obj_.taille;
  adr = new int [dim];
  for (i = 0; i < obj_.taille; i++) {
    adr[i] = obj_.adr[i];
  }
  cout << "construction par recopie" << endl;
}

Pile::~Pile() { delete[] adr; }

Pile & Pile::operator=(const Pile & obj_) {
  int i;
  dim = obj_.dim;
  taille = obj_.taille;
  delete [] adr;
  adr = new int [dim];
  for (i = 0; i < obj_.taille; i++) {
    adr[i] = obj_.adr[i];
  }
  cout << "surcharge de =" << endl;
  return *this;
}

bool Pile::operator==(const Pile & p_) const {
  if (taille == p_.taille) {
    for (int i = 0; i < taille; i++) {
      if (adr[i] != p_.adr[i]) {
        return false;
      }
    }
    return true;
  } else {
    return false;
  }
}

int Pile::operator[](int n_) const {
  return adr[n_];
}

void Pile::operator<(int p_) { // empiler
  adr[taille] = p_;
  taille++;
}

void Pile::operator--() { //depiler
  taille--;
}

Pile & Pile::operator+(const Pile & q_) const {
  static Pile r(q_.dim);
  r.taille = q_.taille;
  for (int i = 0; i < taille; i++) {
       r.adr[i] = q_.adr[i] + adr[i];
       }
  return r;
}

Pile & Pile::operator+(const int & x_) {
  static Pile q(dim);
  q.taille = taille;
  for (int i = 0; i < taille; i ++) {
    q.adr[i] = adr[i] + x_;
  }
  return q;
}

Pile & operator+(const int & x_, const Pile & p_) {
  static Pile q(p_.dim);
  q.taille = p_.taille;
  for (int i = 0; i <p_.taille; i++) {
    q.adr[i] = p_.adr[i] + x_;
  }
  return q;
}

ostream & operator<<(ostream & ostr, const Pile & p_) {
  for (int i = 0; i < p_.taille; i++) {
    if (0 == i) {
      ostr << "[" << p_.adr[i] << ", ";
      continue;
    }
    if (p_.taille - 1 == i) {
      ostr << p_.adr[i] << "]" << endl;
      break;
    }
    ostr << p_.adr[i] << ", ";
  }
  return ostr;
}

istream & operator>>(istream & istr, Pile & p_) {
  cout << "Entrer le nombre d'elem de votre pile: ";
  istr >> p_.taille;
  cout << "Entrer votre pile!" << endl;
  for (int i = 0; i < p_.taille; i++) {
    istr >> p_.adr[i];
  }
  return istr;
}

bool Pile::vide() const {
  if (0 == taille) {
    return true;
  } else {
    return false;
  }
}

bool Pile::pleinne() const {
  if (dim - 1 == taille) {
    return true;
  } else {
    return false;
  }
}

void Pile::affiche() const {
  for (int i = 0; i < taille; i++) {
    if (0 == i) {
      std::cout << "[" << *(adr) << ", ";
    } else if (taille - 1 == i) {
      std::cout << *(adr + taille - 1) << "]" << std::endl;
    } else {
      std::cout << *(adr + i) << ", ";
    }
  }
}
