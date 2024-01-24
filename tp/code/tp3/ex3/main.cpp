#include <iostream>

int MAX1 ( int [], int );
int MAX2 ( int [], int );
int *MAX3 ( int [], int );

int main ( int argc, char *argv[] ) {
    int tab[20], N;
    std::cout << "N = ";
    std::cin >> N;
    for ( int i = 0; i < N; i++ ) {
        std::cout << "tab[" << i << "] = ";
        std::cin >> tab[i];
    }
    for ( int i = 0; i < N; i++ ) {
        if ( 0 == i ) {
            std::cout << "[" << tab[i] << ", ";
            continue;
        }
        if ( N - 1 == i ) {
            std::cout << tab[i] << "]" << std::endl;
            break;
        }
        std::cout << tab[i] << ", ";
    }
    std::cout << "Maximum value: " << MAX1 ( tab, N ) << std::endl;
    std::cout << "Maximum value index: " << MAX2 ( tab, N ) << std::endl;
    std::cout << "Maximum value address: " << MAX3 ( tab, N ) << std::endl;
    return 0;
}

int MAX1 ( int tab[20], int N ) {
    int max = tab[0];
    for ( int i = 0; i < N; i++ ) {
        if ( tab[i] > max ) {
            max = tab[i];
        }
    }
    return max;
}

int MAX2 ( int tab[20], int N ) {
    int max = 0;
    for ( int i = 0; i < N; i++ ) {
        if ( tab[i] > tab[max] ) {
            max = i;
        }
    }
    return max;
}

int *MAX3 ( int *tab, int N ) {
    int max = *tab;
    for ( int i = 0; i < N; i++ ) {
        if ( *( tab + i ) > max ) {
            max = i;
        }
    }
    return tab + max;
}
