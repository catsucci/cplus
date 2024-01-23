#include <iostream>

int power ( int, int );

int main (int argc, char *argv[] ) {
    int num, pow;
    std::cout << "num = ";
    std::cin >> num;
    std::cout << "pow = ";
    std::cin >> pow;
    std::cout << num << "^" << pow << " = " << power ( num, pow ) << std::endl;
    return 0;
}

int power ( int num, int pow ) {
    int result = 1;
    for ( int i = 0; i < pow; i++ ) {
        result *= num;
    }
    return result;
}
