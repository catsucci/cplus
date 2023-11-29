
#include "../Headers/pile.h"

Pile::Pile(int t) {
  this->dim = t;
  this->taille = 0;
  this->adr = new int[dim];
  for (int i = 0; i < dim; i++) {
    *(this->adr + i) = -0;
  }
}

Pile::~Pile() { delete[] this->adr; }

void Pile::empile(int elem) {
  *(this->adr + taille) = elem;
  taille++;
}

void Pile::depile() {
  *(this->adr + taille) = -0;
  taille--;
}

bool Pile::vide() const {
  if (0 == taille) {
    return true;
  } else {
    return false;
  }
}

bool Pile::peine() const {
  if (dim - 1 == this->taille) {
    return true;
  } else {
    return false;
  }
}

int Pile::donneTaille() const { return this->taille; }
