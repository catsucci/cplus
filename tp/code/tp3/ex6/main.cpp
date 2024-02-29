#include <iostream>

void EchangeA (int &, int &);
void EchangeB (int &, int &);

int
main (int argc, char *argv[])
{
    int x, y;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;
    std::cout << "Before swaping" << std::endl;
    std::cout << "x = " << x << " & y = " << y << std::endl;
    std::cout << "Swaping x & y" << std::endl;
    EchangeA (x, y);
    std::cout << "x = " << x << " & y = " << y << std::endl;
    std::cout << "Reswaping x & y" << std::endl;
    EchangeB (x, y);
    std::cout << "x = " << x << " & y = " << y << std::endl;
    return 0;
}

void
EchangeA (int &x, int &y)
{
    x += y;
    y = x - y;
    x -= y;
}

void
EchangeB (int &x, int &y)
{
    int *temp = new int;
    *temp = x;
    x = y;
    y = *temp;
    delete temp;
}
