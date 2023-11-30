#ifndef PILE_H
#define PILE_H

class Pile {
public:
  Pile(int t = 10);
  ~Pile();
  void empile(const int &);
  void depile();
  bool vide() const;
  bool peine() const;
  int donneTaille() const;
  void affiche() const;

private:
  int dim;
  int taille;
  int *adr;
};

#endif // PILE_H
