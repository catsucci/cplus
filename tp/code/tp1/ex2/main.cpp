#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main ( int argc, char *argv[] ) {

    int I, Q, V;

    cout << "I = ";
    cin >> I;
    cout << "Q = ";
    cin >> Q;
    cout << "V = ";
    cin >> V;

    if ( V >= Q ) {
        float P = (float) 100 * V / I;
        int M = V / 2 + 1;
        cout << "P: " << P << endl;
        cout << "M: " << M << endl;
    } else {
        cout << "message d'avertissement!" << endl;
    }

    return 0;
}
