#include <iostream>

using namespace std;

int main ( int argc, char *argv[] ) {
    int A[10], N;
    cout << "N = ";
    cin >> N;
    for ( int i = 0; i < N; i++ ) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }
    for ( int i = 0; i < N; i++ ) {
        cout << A[i] << " ";
    }
    for ( int *p1 = A, *p2 = A + N - 1; p1 < p2; p1++, p2-- ) {
        *p1 += *p2;
        *p2 = *p1 - *p2;
        *p1 = *p1 - *p2;
    }
    cout << endl << "Cursed reversal technique" << endl;
    for ( int i = 0; i < N; i++ ) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
