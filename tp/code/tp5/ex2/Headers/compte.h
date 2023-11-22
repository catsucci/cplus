#ifndef COMPTE_H
#define COMPTE_H 

#include <cstring>

class Compte {

  public:
    Compte (float credit = 00.00);
    Compte (char*, float credit = 00.00);
    ~Compte();

    void updateName(char*);
    void displayAccount() const ; 
    void addCredit (float&);
    void useCredit (float&);
    int getID();
    char* getName();
    float getCredit();


  private:
    int num;
    char* nom;
    float solde;
    static int nbCmp;
};

#endif // COMPTE_H  
