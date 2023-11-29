#include <iostream>

#include "../Headers/compte.h"
#include "../Sources/compte.cpp"

int main(int argc, char *argv[]) {

  char *name = new char[50];
  std::cout << "name = ";
  std::cin >> name;
  Compte c(name, 420.69);
  c.displayAccount();
  delete[] name;

  return 0;
}
