#include "io.h"
#include <iostream>

// forward declarations
//int readNumber();
//void writeAnswer(int x);

int main()
{
    int x = readNumber();
    int y = readNumber();

    std::cout << "x = " << x << '\n';
    std::cout << "y = " << y << '\n';

    writeAnswer(x + y);

    return 0;
}
