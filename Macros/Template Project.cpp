#include <iostream>

#define MY_NAME "Alphan"

int main()
{
    std::cout << "This PC belongs to " << MY_NAME << " ";

    // identifier MY_SURNAME doesn't exist, not compiled
#ifdef MY_SURNAME
    std::cout << "and his surname is " << MY_SURNAME;
#endif

    // identifier MY_SURNAME not defined --> compile
#ifndef MY_SURNAME
    std::cout << "and his surname is " << "Akyuez";
#endif

    // #if 0 to comment out multiple lines
#if 0
    std::cout << "This PC doesn't belongt to " << MY_NAME;
#endif

    return 0;
}