#include "../Headers/capitale.h"
#include <iostream>

using namespace std;

Capitale::Capitale() {
  capitale = new char[20];
  for (int i = 0; i < 20; i++) {
    capitale[i] = '0';
  }
}

Capitale::Capitale(const char *capitale_, const char *nom_, const int &nbre_)
    : Ville(nom_, nbre_) {
  int l = 0;
  while (capitale_[l] != '0') {
    l++;
  }
  capitale = new char[l + 1];
  for (int i = 0; i <= l; i++) {
    capitale[i] = capitale_[i];
  }
}

Capitale::~Capitale() { delete[] capitale; }

void Capitale::Print() {
  Ville::Print();
  cout << "Capitale of " << nom << ": " << capitale << endl;
}

Capitale::Capitale(const Capitale &c_) : Ville::Ville(c_) {
  int l = 0;
  while (c_.capitale[l] != '0') {
    l++;
  }
  capitale = new char[l + 1];
  for (int i = 0; i <= l; i++) {
    capitale[i] = c_.capitale[i];
  }
}
