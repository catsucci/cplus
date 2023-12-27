#include <iostream>

template <class T1, class T2> void afficher(T1 param1, T2 param2) {
  std::cout << "\t->  " << param1 << std::endl;
  std::cout << "\t->  " << param2 << std::endl;
}

int main(int argc, char *argv[]) {

  afficher(2, 'A');
  std::cout << "\t   ***" << std::endl;
  afficher(3.75, 'Z');
  std::cout << "\t   ***" << std::endl;
  afficher(7.5, 8);

  return 0;
}
