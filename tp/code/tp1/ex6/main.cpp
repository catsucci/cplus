#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main ( int argc, char * argv[] ) {
    int N, num;
    int sum = 0;
    int product = 1;
    int averge;
    cout << "How many numbers you want to insert? ";
    cin >> N;

    int i = 0;

    /* while */
    cout << "*** while ***" << endl;
    while ( i < N ) {
        cout << "number " << i + 1 << " = ";
        cin >> num;
        sum += num;
        product *= num;
        i++;
    }
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Average: " << ( float ) sum / N << endl;

    /* do...while */
    cout << "*** do...while ***" << endl;
    sum = 0;
    product = 1;
    i = 0;
    do {
        cout << "number " << i + 1 << " = ";
        cin >> num;
        sum += num;
        product *= num;
        i++;
    } while ( i < N );
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Average: " << ( float ) sum / N << endl;

    /* for */
    cout << "*** for ***" << endl;
    sum = 0;
    product = 1;
    for ( i = 0; i < N; i++ ) {
        cout << "number " << i + 1 << " = ";
        cin >> num;
        sum += num;
        product *= num;
    }
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Average: " << ( float ) sum / N << endl;

    return 0;
}
