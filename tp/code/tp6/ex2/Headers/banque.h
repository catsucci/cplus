#ifndef BANQUE_H
#define BANQUE_H
#include "compte.h"

class Banque {
public:
  Banque(int = 2000);
  ~Banque();
  void add(Compte);
  void Delete(const int &);
  Compte getCompte(const int &) const;
  void afficheAg() const;

private:
  Compte *Agence;
  int Nbreel;
  int Nbrelimit;
};

#endif // BANQUE_H
