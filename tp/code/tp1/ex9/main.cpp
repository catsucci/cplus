#include <iostream>

int main ( int argc, char *argv[] ) {
    int T[50], N;
    std::cout << "N = ";
    std::cin >> N;
    for ( int i = 0; i < N; i++ ) {
        std::cout << "T[" << i << "] = ";
        std::cin >> T[i];
    }
    for ( int i = 0; i < N; i++ ) {
        std::cout << "T[" << i << "]: " << T[i] << std::endl;
    }
    int x, counter = 0;
    std::cout << "x = ";
    std::cin >> x;
    int T2[50];
    for ( int i = 0, j = 0; i < N; i++ ) {
        if ( x != T[i] ) {
            T2[j] = T[i];
            counter++;
            j++;
        }
    }
    N = counter++;
    for ( int i = 0; i < N; i++ ) {
        std::cout << "T[" << i << "]: " << T2[i] << std::endl;
    }
    return 0;
}
