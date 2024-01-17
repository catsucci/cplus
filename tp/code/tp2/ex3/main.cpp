#include <iostream>

using namespace std;

int main ( int argc, char *argv[] ) {
    int A[10][10], N, M;
    cout << "N = ";
    cin >> N;
    cout << "M = ";
    cin >> M;
    int * ptr = &A[0][0];
    for ( int i = 0; i < N; i++ ) {
        for ( int j = 0; j < M; j++ ) {
            cout<< "T[" << i << "][" << j << "] = ";
            cin >> *( ptr + i * M + j );
        }
    }
    for ( int i = 0; i < N; i++ ) {
        for ( int j = 0; j < M; j++ ) {
            cout << *( ptr + i * M + j ) << " ";
        }
        cout << endl;
    }
    return 0;
}
