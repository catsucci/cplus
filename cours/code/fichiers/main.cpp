#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

  ifstream fichier("test.txt", ios::in);

  int n = 0, x, s = 0;
  if (fichier) {

    while (fichier >> x) {
      s += x;
      n++;
    }
    cout << "Somme: " << s << endl;
    cout << "Moyenne: " << s / n << endl;
  }

  /* if (fichier) { */
  /**/
  /*   int n, x; */
  /**/
  /*   cout << "how many numbers to write? "; */
  /*   cin >> n; */
  /**/
  /*   for (int i = 0; i < n; i++) { */
  /*     cin >> x; */
  /*     fichier << x << endl; */
  /*   } */
  /**/
  /*   fichier.close(); */
  /* } */

  /* ifstream fichier("test.txt", ios::in); */
  /**/
  /* if (fichier) { */
  /**/
  /*   char c; */
  /*   while (fichier.eof() == 0) { */
  /**/
  /*     fichier >> c; */
  /*     cout << c; */
  /*   } */
  /**/
  /*   char caractere; */
  /*   while (fichier.eof() == 0) { */
  /*     fichier.get(caractere); */
  /*     cout << caractere; */
  /*   } */
  /**/
  /*   string ligne; */
  /*   cout << "Ouverture avec Success" << endl; */
  /*   while (getline(fichier, ligne)) { */
  /*     cout << ligne << endl; */
  /*   } */
  /*   while (fichier.eof() == 0) { */
  /*     getline(fichier, ligne); */
  /*     cout << ligne << endl; */
  /*   } */
  /*   fichier.close(); */
  /**/
  /* } else { */
  /**/
  /*   cerr << "Impossible d'ouvrir le fichier!" << endl; */
  /* } */
  /**/
  return 0;
}
