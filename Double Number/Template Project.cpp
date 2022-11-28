#include <iostream>

int doubleNumber(int value)
{
    return value * 2;
}

int main()
{
    int x = 0;

    std::cout << "Enter an integer: ";

    std::cin >> x;

    std::cout << doubleNumber(x);

    return 0;
}