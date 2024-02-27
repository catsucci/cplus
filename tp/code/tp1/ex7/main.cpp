#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int
main (int argc, char *argv[])
{
    char z_operator;
    int leftOperand, rightOperand;
    do
        {
            cout << "Operator = ";
            cin >> z_operator;
        }
    while (z_operator != '+' && z_operator != '-' && z_operator != '*'
           && z_operator != '/');
    cout << "leftOperand = ";
    cin >> leftOperand;
    cout << "rightOperand = ";
    cin >> rightOperand;
    switch (z_operator)
        {
        case '+':
            cout << leftOperand << " " << z_operator << " " << rightOperand
                 << " = " << leftOperand + rightOperand << endl;
            break;
        case '-':
            cout << leftOperand << " " << z_operator << " " << rightOperand
                 << " = " << leftOperand - rightOperand << endl;
            break;
        case '*':
            cout << leftOperand << " " << z_operator << " " << rightOperand
                 << " = " << leftOperand * rightOperand << endl;
            break;
        case '/':
            cout << leftOperand << " " << z_operator << " " << rightOperand
                 << " = " << (float)leftOperand / rightOperand << endl;
            break;
        }
    return 0;
}
