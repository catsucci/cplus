#ifndef PERSONNE_H
#define PERSONNE_H 

#include <cstring>

class Personne {

  public:
    Personne ();
    Personne (const char *, const char *, const int &);
    Personne (const Personne &);
    ~Personne();
    Personne & operator = (const Personne &);
    void affiche() const;

  private:
    char * nom;
    char * prenom;
    int age;
};

#endif // PERSONNE_H  
 
