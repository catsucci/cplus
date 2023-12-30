#ifndef CAPITALE_H
#define CAPITALE_H

#include "./ville.h"
#include <iostream>

using namespace std;

class Capitale : public Ville {

public:
  Capitale();
  Capitale(const char *, const char *, const int &);
  Capitale(const Capitale &);
  ~Capitale();
  Capitale operator=(const Capitale &);
  virtual void Print();

private:
  char *capitale;
};

#endif // !CAPITALE_H
