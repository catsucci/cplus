#include "./capital.cpp"
#include "./ville.cpp"

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

  Ville v1;
  v1.Print();
  Ville v2("oujda", 40000);
  v2.Print();

  Capitale c1;
  c1.Print();

  return 0;
}
