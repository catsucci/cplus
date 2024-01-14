#include <iostream>

int main ( int argc, char *argv[] ) {
    int T[50], N, posMin = 0,posMax = 0;
    std::cout << "N = ";
    std::cin >> N;
    for ( int i = 0; i < N; i++ ) {
        std::cout << "T[" << i << "] = ";
        std::cin >> T[i];
    }
    for ( int i = 0; i < N; i++ ) {
        if ( T[i] < T[posMin] ) {
            posMin = i;
        } else if ( T[i] > T[posMax] ) {
            posMax = i;
        }
    }
    std::cout << "Min: " << T[posMin] << ", position: " << posMin << std::endl;
    std::cout << "Max: " << T[posMax] << ", position: " << posMax << std::endl;
    return 0;
}
