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
  virtual ~A() { cout << "Destructeur A " << endl; }

  virtual void affiche() { cout << "affiche A(): " << i << endl; }
};
