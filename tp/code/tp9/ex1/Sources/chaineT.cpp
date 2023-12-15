#include "../Headers/chaineT.h"
#include <cstdlib>
#include <iostream>
#include <stdlib.h>

using std::cout;
using std::endl;

ChaineT::ChaineT() {
  Type = false;
  Val = 0;
}

ChaineT::ChaineT(const char *ch_) : Chaine::Chaine(ch_){
  Type = false;
  Val = 0;
}

ChaineT::ChaineT(const ChaineT &v_) : Chaine::Chaine(v_){
  Type = v_.Type;
  Val = v_.Val;
  cout << "***constructeur par recopie de la classe fille***" << endl;
}

ChaineT::~ChaineT() {
  cout << "***destructeur de T***" << endl;
}

ChaineT &ChaineT::operator=(const ChaineT &ch_) {
  Chaine::operator=(ch_);
  Type = ch_.Type;
  Val = ch_.Val;
  cout << "***operateur d'affectation de la classe fille***" << endl;
  return *this;
}

void ChaineT::affiche() const {
  Chaine::affiche();
  cout << "Is float: " << Type << endl;
  cout << "Value: " << Val << endl;
}

void ChaineT::calcul() {
  float x;
  x = atof(adr);
  if (x != 0) {
    Type = true;
    Val = x;
  }
}
