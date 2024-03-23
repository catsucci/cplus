#include <cmath>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void
saisie (int &a, int &b, int &c)
{
    cout << "Type respectivly a, b and c of ax2 + bx + c = 0" << endl;
    cin >> a >> b >> c;
}

void
calcul (const int &a, const int &b, const int &c)
{
    // if any of a,b || c are = to 0 checks
    if (0 == a)
        {
            if (0 == b)
                {
                    if (0 == c)
                        {
                            cout << "S = set of real numbers R" << endl;
                        }
                    else
                        {
                            cout << "c can't be = to 0, S = empty set" << endl;
                        }
                }
            else
                {
                    cout << "S = -c/b = {" << (double)-c / b << "}" << endl;
                }
        }
    else if (0 == b)
        {
            if ((0 < a && 0 < c) || (0 > a && 0 > c))
                {
                    cout << "S = sqrt(negative number), so it's eaither "
                            "unsolvable or you need to use complexe numbers "
                         << endl;
                }
            else if ((0 < a && 0 > c) || (0 > a && 0 < c))
                {
                    cout << "S = sqrt(-c/a) || -sqrt(-c/a) = {"
                         << sqrt ((double)-c / a) << ", "
                         << -sqrt ((double)-c / a) << "}" << endl;
                }
        }
    else if (0 == c)
        {
            cout << "ax^2 + bx = x(ax + b) = 0"
                    "S = {0, "
                 << (double)-b / a << "}" << endl;
        }
    // none of a,b & c are = 0 bellow
    else
        {
            int discriminant = b * b - 4 * a * c;
            if (0 == discriminant)
                {
                    cout << "S = {" << (double)-b / 2 * a << "}" << endl;
                }
            else if (0 < discriminant)
                {
                    cout << "S = {"
                         << ((double)-b - sqrt (discriminant)) / 2 * a << ", "
                         << ((double)-b + sqrt (discriminant)) / 2 * a << "}"
                         << endl;
                }
            else
                {
                    cout << "discriminant < 0, so it's eaither unsolvable "
                            "or you need to use complexe numbers "
                         << endl;
                }
        }
}

int
main (int argc, char *argv[])
{
    int a, b, c;
    saisie (a, b, c);
    calcul (a, b, c);
    return 0;
}
