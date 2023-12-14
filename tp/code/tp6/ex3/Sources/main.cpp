#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include "./pile.cpp"

int main(int argc, char *argv[]) {

  int i;
  Pile obj(10), obj1;
  for (i = 0; obj.pleinne() == false; i++) {
    obj < (2 * i);
  }
  obj.affiche();
  --obj;
  obj.affiche();
  obj1 = obj;
  obj1.affiche();
  Pile ob = obj, obc;
  obc = obj1;
  cout << obc[6] << endl;
  (obc + 5).affiche();
  (10 + obc).affiche();
  (obc + ob).affiche();
  Pile abb;
  cout << "cinnnnnnnn" <<endl;
  cin >> abb;
  cout << abb;

  return 0;
}
