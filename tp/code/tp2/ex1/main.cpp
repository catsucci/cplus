#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main ( int argc, char *argv [] ) {

    int *arr1, *arr2, n1, n2;

    cout << "n1 = ";
    cin >> n1;
    cout << "n2 = ";
    cin >> n2;

    arr1 = new int [n1];
    arr2 = new int [n2];

    for ( int i = 0; i < n1; i++ ) {
        cout << "arr1[" << i << "] = ";
        cin >> arr1[i];
    }

    for ( int i = 0; i < n2; i++ ) {
        cout << "arr2[" << i << "] = ";
        cin >> arr2[i];
    }

    for ( int i = 0; i < n1; i++ ) {
        if ( 0 == i ) {
            cout << "arr1: [" << arr1[i] << ", ";
            continue;
        } else if ( n1 - 1 == i ) {
            cout << arr1[i] << "]" << endl;
            break;
        }
        cout << arr1[i] << ", ";
    }

    for ( int i = 0; i < n2; i++ ) {
        if ( 0 == i ) {
            cout << "arr2: [" << arr2[i] << ", ";
            continue;
        } else if ( n2 - 1 == i ) {
            cout << arr2[i] << "]" << endl;
            break;
        }
        cout << arr2[i] << ", ";
    }

    int *temp = new int [ n1 + n2 ];

    for (int *pi = temp; pi - temp < n1; pi++ ) {
        *pi = *( arr1 + ( pi - temp ) );
    }
    for (int *pi = temp + n1; pi - temp < n1 + n2; pi++ ) {
        *pi = *( arr2 + ( pi - temp - n1) );
    }

    delete [] arr1;
    arr1 = new int [n1 + n2];
    for ( int i = 0; i < n1 + n2; i++ ) {
        arr1[i] = temp[i];
    }
    delete [] temp;
    for ( int i = 0; i < n1 + n2; i++ ) {
        if ( 0 == i ) {
            cout << "arr1: [" << arr1[i] << ", ";
            continue;
        } else if ( n1 + n2 - 1 == i ) {
            cout << arr1[i] << "]" << endl;
            break;
        }
        cout << arr1[i] << ", ";
    }

    delete [] arr1;
    delete [] arr2;
    return 0;
}

