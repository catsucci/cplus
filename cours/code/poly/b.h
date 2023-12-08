#include "./a.h"

class B : public A {
private:
  int j;

public:
  B(int k, int n = 1) : A(k) {
    j = n;
    cout << "Constructeur B " << j << endl;
  }
  ~B() { cout << "Destructeur B " << endl; }
};
