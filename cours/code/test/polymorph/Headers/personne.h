#ifndef PERSONNE_H
#define PERSONNE_H

#include <iostream>
using std::cout;
using std::endl;

class Personne {
public:
  Personne();
  ~Personne();
  void affiche();

private:
};

inline Personne::Personne() { cout << "constructeur personne" << endl; }

inline Personne::~Personne() { cout << "destructeur personne" << endl; };

void inline Personne::affiche() { cout << "Personne" << endl; }

#endif // !PERSONNE_H
