#include "./point.cpp"

int main(int argc, char *argv[]) {
  Point a(1, 5), b(2, 1), c;
  c = a + b;
  c.affiche();
  std::cout << c * b << std::endl;
  c = 3 * b;
  c.affiche();

  return 0;
}
