#ifndef VILLE_H
#define VILLE_H

#include <iostream>

using namespace std;

class Ville {

public:
  Ville();
  Ville(const char *, const int &);
  virtual ~Ville();
  virtual void Print();
  Ville(const Ville &);
  int taille() const;
  Ville operator=(const Ville &);
  friend ostream &operator<<(ostream &, const Ville &);
  friend istream &operator>>(istream &, Ville &);

protected:
  char *nom;
  int nbre;
};

#endif // !VILLE_H
