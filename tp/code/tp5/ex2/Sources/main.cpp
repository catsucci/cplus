#include <iostream>

#include "../Headers/compte.h"
#include "../Sources/compte.cpp"

int main (int argc, char *argv[]) {

  Compte a, b(69.420); 
  a.displayAccount();
  b.displayAccount();

  char * name = new char [50];
  std::cout << "name = ";
  std::cin >> name;
  Compte c(name, 420.69);
  c.displayAccount();

  std::cout << "biddak falafel? ";
  std::cin >> name;
  a.updateName(name);
  a.displayAccount();
  
  std::cout << "biddak falafel? ";
  std::cin >> name;
  b.updateName(name);
  b.displayAccount();

  delete [] name;
  
  return 0;
}
