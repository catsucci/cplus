#include <iostream>

using namespace std;

int Ackerman ( int, int );

int main ( int argc, char *argv[] ) {
    int m, n;
    std::cout << "m = ";
    std::cin >> m;
    std::cout << "n = ";
    std::cin >> n;
    std::cout << "Ackerman ( " << m << ", " << n << " ) = " << Ackerman ( m, n)
        << std::endl;
    return 0;
}
 int Ackerman ( int m, int n ) {
    if ( 0 == m && n > 0 ) {
        return n + 1;
    }
    if ( m > 0 && 0 == n ) {
        return Ackerman ( m - 1, 1 );
    }
    if ( m > 0 && n > 0 ) {
        return Ackerman ( m - 1, Ackerman ( m, n - 1 ));
    }
    return -1; // in case of wrong values
}
