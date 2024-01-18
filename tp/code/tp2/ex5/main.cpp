#include <cstring>
#include <iostream>

using namespace std;

int main ( int argc, char *argv[] ) {
    int T[10], N;
    cout << "N = ";
    cin >> N;
    for ( int i = 0; i < N; i++ ) {
        cout << "T[" << i << "] = ";
        cin >> T[i];
    }
    for ( int i = 1, j; i < N; i++ ) {
        j = i;
        while ( j > 0 && T[j - 1] > T[j] ) {
            T[j] += T[j - 1];
            T[j - 1] = T[j] - T[j - 1];
            T[j] -= T[j - 1];
            j--;
        }
    }
    for ( int i = 0; i < N; i++ ) {
        cout << T[i] << " ";
    }
    cout << endl;
    char **A;
    int M;
    cout << "M = ";
    cin >> M;
    A = new char * [M];
    for ( int i = 0; i < M; i++ ) {
        A[i] = new char;
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }
    char temp[20];
    for ( int i = 1, j; i < M; i++ ) {
        j = i;
        while ( j > 0 && strcmp(A[j - 1], A[j]) > 0 ) {
            strcpy(temp, A[j]);
            strcpy(A[j], A[j - 1]);
            strcpy(A[j - 1], temp);
            j--;
        }
    }
    for ( int i = 0; i < M; i++ ) {
        cout << A[i] << endl;
    }
    for ( int i = 0; i < M; i++ ) {
        delete A[i];
    }
    delete [] A;
    return 0;
}
