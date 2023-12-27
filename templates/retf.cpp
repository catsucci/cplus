#include <iostream>

int sum(int lOperand, int rOperand) { return lOperand + rOperand; }

int main(int argc, char *argv[]) {

  std::cout << "\t->  " << sum(4, 3) << std::endl;

  return 0;
}
