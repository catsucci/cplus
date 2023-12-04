#include "./point.cpp"
#include "./point3.cpp"

int main(int argc, char *argv[]) {

  Point a(1, 5), b(2, 1), c;
  c = a + b;
  c.affiche();
  std::cout << c * b << std::endl;
  c = 3 * b;
  c.affiche();

  Point3 aa, bb(1, 2, 3);
  Point3 cc(aa);
  aa.affiche();
  aa = bb;
  aa.affiche();

  return 0;
}
