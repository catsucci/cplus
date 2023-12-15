#ifndef CHAINET_H
#define CHAINET_H

#include "./chaine.h"

#include <iostream>
using std::ostream;
using std::istream;

class ChaineT : public Chaine {
public:
  ChaineT();
  ChaineT(const char *);
  ChaineT(const ChaineT &);
  ~ChaineT();
  ChaineT &operator=(const ChaineT &);
  void affiche() const;
  void calcul();

private:
  bool Type;
  float Val;
};

#endif
