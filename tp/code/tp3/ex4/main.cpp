#include <iostream>

int somme ( int );

int main ( int argc, char *argv[] ) {
    int num;
    do {
        std::cout << "num = ";
        std::cin >> num;
    } while ( num < 0 );
    std::cout << "Somme = " << somme ( num ) << std::endl;
    return 0;
}

int somme ( int num_ ) {
    if ( num_ == 0 ) { return 0; }
    int sum = 0;
    for ( int i = 1; i <= num_; i++ ) { sum += i; }
    return sum;
}
