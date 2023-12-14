#ifndef PILE_H
#define PILE_H

#include <iostream>
using std::ostream;
using std::istream;

class Pile {
public:
  Pile(int t = 10);
  Pile(const Pile &);
  ~Pile();
  Pile & operator=(const Pile &);
  int operator[](int) const;
  bool pleinne() const;
  bool vide() const;
  bool operator==(const Pile &) const;
  void operator<(int);
  void operator--();
  void affiche() const;
  Pile &operator+(const Pile &) const;
  Pile & operator+(const int &);
  friend Pile & operator+(const int &, const Pile &);
  friend ostream & operator<<(ostream &str, const Pile &);
  friend istream & operator>>(istream &, Pile &);
  /* void empile(const int &); */
  /* void depile(); */
  /* int donneTaille() const; */

private:
  int dim;
  int taille;
  int *adr;
};

#endif // PILE_H
