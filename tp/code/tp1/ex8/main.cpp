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
    return 0;
}
