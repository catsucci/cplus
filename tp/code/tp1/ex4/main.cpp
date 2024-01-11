#include <iomanip>
#include <ios>
#include <iostream>

double sqrtOfTwo ( int );

int main ( int argc, char *argv[] ) {
    int i;
    std::cout << "i = ";
    std::cin >> i;
    std::cout << "U" << i << ": " << std::scientific << std::setprecision(15) << sqrtOfTwo ( i ) << std::endl;
    return 0;
}

double sqrtOfTwo ( int i ) {
    if ( 0 == i ) {
        return 1;
    } else {
        double U = sqrtOfTwo ( --i );
        return ( U + 2 / U ) / 2;
    }
}
