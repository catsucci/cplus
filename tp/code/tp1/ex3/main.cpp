#include <iostream>

int main ( int argc, char *argv[] ) {

    int n;
    unsigned int fact = 1;

    std::cout << "n = ";
    std::cin >> n;

    /* do...while */
    int i = 1;
    do {
        fact *= i;
        i++;
    } while ( i <= n );
    std::cout << n << "! = " << fact << "\t(do...while)" << std::endl;

    /* while */
    fact = 1;
    i = 1;
    while ( i <= n ) {
        fact *= i;
        i++;
    }
    std::cout << n << "! = " << fact << "\t(while)" << std::endl;

    /* for */
    fact = 1;
    for ( i = 1; i <= n; i++ ) {
        fact *= i;
    }
    std::cout << n << "! = " << fact << "\t(for)" << std::endl;

    return 0;
}
