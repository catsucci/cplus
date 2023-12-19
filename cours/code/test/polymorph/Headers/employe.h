#ifndef EMPLOYE_H
#define EMPLOYE_H

#include "../Headers/personne.h"
#include <iostream>
using std::cout;
using std::endl;

class Employe : public Personne {
public:
  Employe();
  ~Employe();
  void affiche();

private:
};

inline Employe::Employe() { cout << "constructeur employe" << endl; }

inline Employe::~Employe() { cout << "destructeur employe" << endl; };

void inline Employe::affiche() { cout << "Employe" << endl; }

#endif // EMPLOYE_H
