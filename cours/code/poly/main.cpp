#include "./b.h"

int main(int argc, char *argv[]) {

  /*
  cout << "*** 1 ***" << endl;
  A a(1);
  B b(2, 1);
  */

  cout << "*** 2 ***" << endl;
  A *a, *b;
  a = new A(10);
  b = new B(20, 30);
  delete a;
  delete b;

  return 0;
}
