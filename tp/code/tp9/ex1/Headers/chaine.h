#ifndef CHAINE_H
#define CHAINE_H

#include <iostream>
using std::ostream;
using std::istream;

class Chaine {
public:
  Chaine();
  Chaine(const char *);
  Chaine(const Chaine &);
  ~Chaine();
  int taille() const;
  void affiche() const;
  void ajout(char, int);
  void supp(int);
  Chaine &inv();
  bool appart(const char &) const;
  Chaine &operator=(const Chaine &);
  bool operator==(const Chaine &) const;
  Chaine & operator+(const Chaine &);
  char operator[](int) const;
  friend ostream & operator << (ostream &, const Chaine &);
  friend istream & operator >> (istream &, Chaine &);

private:
  char *adr;
};

#endif
