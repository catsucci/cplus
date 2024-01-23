#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void LIRE_TAB ( int [], int );
void ECRIRE_TAB ( int [], int );
int SOMME_TAB ( int [], int );
int MIN_ELEM ( int [], int );
int MAX_ELEM ( int [], int );

int main ( int argc, char *argv[] ) {
    int tab[20], N;
    cout << "N = ";
    cin >> N;
    LIRE_TAB ( tab, N );
    ECRIRE_TAB ( tab, N );
    cout << "Somme = " << SOMME_TAB ( tab, N ) << endl;
    cout << "Min = " << MIN_ELEM ( tab, N ) << endl;
    cout << "Max = " << MAX_ELEM ( tab, N ) << endl;
    return 0;
}

void LIRE_TAB ( int tab[20], int N ) {
    for ( int i = 0; i < N; i++ ) {
        cout << "tab[" << i << "] = ";
        cin >> tab[i];
    }
}

void ECRIRE_TAB ( int tab[20], int N ) {
    for ( int i = 0; i < N; i++ ) {
        if ( 0 == i ) {
            cout << "[" << tab[i] << ", ";
            continue;
        }
        if ( N - 1 == i ) {
            cout << tab[i] << "]" << endl;
            break;
        }
        cout << tab[i] << ", ";
    }
}

int SOMME_TAB ( int tab[20], int N ) {
    int sum = 0;
    for ( int i = 0; i < N; i++ ) {
        sum += tab[i];
    }
    return sum;
}

int MIN_ELEM ( int tab[20], int N ) {
    int min = tab[0];
    for ( int i = 0; i < N; i++ ) {
        if ( tab[i] < min ) {
            min = tab[i];
        }
    }
    return min;
}

int MAX_ELEM ( int tab[20], int N ) {
    int max = tab[0];
    for ( int i = 0; i < N; i++ ) {
        if ( tab[i] > max ) {
            max = tab[i];
        }
    }
    return max;
}
