#include <iostream>

int main ( int argc, char *argv[] ) {

    char c;
    std::cout << "c = ";
    std::cin >> c;

    if ( 65 <= c && c <= 90 ) {
        c += 32;
        std::cout << c << std::endl;
    } else {
        std::cout << "message d'erreur!" << std::endl;
    }

    return 0;
}
