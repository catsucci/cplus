#include <iostream>
#include <cstring>

#include "../Headers/banque.h"


Banque::Banque() {
  this->accInd = 0;
  this->accCount = 0;
  this->name = new char [50];
  this->size = 5;
  this->accounts = new Compte [size];
}

Banque::Banque (char* name, int size) {
  this->accInd = 0;
  this->accCount = 0;
  this->name = new char [50];
  strcpy(this->name, name);
  this->size = size;
  this->accounts = new Compte [size];
}

Banque::~Banque() {
  delete [] this->name;
  delete [] this->accounts;
}

void Banque::add (Compte account) {
  this->accounts[this->accInd] = account; 
  this->accInd++;
  this->accCount++;
}

Compte Banque::del (int id) {
  int idIn;
  for (int i = 0; i < this->accCount; i++) {
    if (id == this->accounts[i].getID()) {
      idIn = i;
    } else {
      std::cout << "there is no recorde with this id." << std::endl;
    }
  }
  for (int i = idIn; i < this->accCount - 1; i++) {
    this->accounts[i] = this->accounts[i+1];
  }
  accCount--;
  return this->accounts[idIn];
}

Compte* Banque::getAccount (int id) {
  for (int i = 0; i < this->accCount; i++) {
    if (id == this->accounts[i].getID()) {
      return &(this->accounts[i]);
    }
  }
  return NULL;
}
