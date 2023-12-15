#ifndef EMPLOYE_H
#define EMPLOYE_H

class Employe {
public:
  Employe();
  Employe(const char *, const char *, int, int);
  Employe(const Employe &);
  virtual ~Employe();
  virtual double calcul_base_salaire() = 0;
  virtual void afficher();
  double calcul_salaire();
  Employe & operator=(const Employe &);

protected:
  char *Nom;
  char *Prenom;
  int Age;
  int Anc;
};

#endif // EMPLOYE_H
