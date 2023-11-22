#include <iostream>

#include "../Headers/compte.h"
#include "../Sources/compte.cpp"

#include "../Headers/banque.h"
#include "../Sources/banque.cpp"

int main (int argc, char *argv[]) {

  char * name = new char [50];
  std::cout << "name = ";
  std::cin >> name;
  Compte c(name, 420.69);
  c.displayAccount();

  Banque aa;
  std::cout << "before" << std::endl;
  aa.add(c);
  std::cout << "after" << std::endl;
  aa.getAccount(1)->displayAccount();

  c.displayAccount();
  delete [] name;
  
  return 0;
}
