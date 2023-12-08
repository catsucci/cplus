#include <iostream>
using std::cout;
using std::endl;

class A {
protected:
  int i;

public:
  A(int k) {
    i = k;
    cout << "constructeur A " << i << endl;
  }
  ~A() { cout << "Destructeur A " << endl; }
};
