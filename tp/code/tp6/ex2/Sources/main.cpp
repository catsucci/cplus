#include <iostream>

#include "../Sources/banque.cpp"
#include "../Sources/compte.cpp"

int main(int argc, char *argv[]) {

  char *name = new char[50];
  std::cout << "name = ";
  std::cin >> name;
  Compte c(name, 420.69);
  c.displayAccount();

  Banque bb(5);
  bb.add(c);
  bb.afficheAg();
  // constructeur de le copi

  return 0;
}
