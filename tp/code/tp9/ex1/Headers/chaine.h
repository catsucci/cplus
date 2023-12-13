#ifndef CHAINE_H
#define CHAINE_H

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

private:
  char *adr;
};

#endif
