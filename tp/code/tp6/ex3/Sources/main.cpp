#include <iostream>

using std::cout;
using std::endl;

#include "./pile.cpp"

int main(int argc, char *argv[]) {

  Pile a, b(2);

  cout << "a at 0:" << a.vide() << endl;
  a.empile(3);
  a.empile(4);
  a.empile(2);
  a.empile(5);
  a.empile(1);
  a.empile(6);
  a.empile(7);
  a.empile(9);
  a.empile(8);
  cout << "a at 1:" << a.peine() << endl;
  a.affiche();
  a.depile();
  a.depile();
  a.depile();
  a.depile();
  a.depile();
  a.affiche();

  return 0;
}
