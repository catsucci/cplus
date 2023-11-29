#ifndef BANQUE_H
#define BANQUE_H

#include "compte.h"

class Banque {

public:
  Banque();
  Banque(char *, int);
  ~Banque();
  void add(Compte);
  Compte del(int);
  Compte *getAccount(int);

private:
  char *name;
  int size;
  Compte *accounts;
  int accCount;
  int accInd;
};

#endif // BANQUE_H
