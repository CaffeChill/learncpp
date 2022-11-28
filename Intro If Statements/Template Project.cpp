#include <iostream>
/*
int readNumber()
{
    int x = 0;
    std::cout << "Enter a number: ";
    std::cin >> x;
    return x;
}

bool isPrime(int x)
{
    if (x <= 1)
    {
        return false;
    }

    for (int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int x = readNumber();

    std::cout << "Is " << x << " a prime number?" <<'\n';
    if (isPrime(x) == true)
    {
        std::cout << "Yes, " << x << " is a prime number." << '\n';
    }
    else
    {
        std::cout << "No, " << x << " is not a prime number.";
    }
    
    return 0;
}
*/

bool isAllowedToTakeFunRide()
{
    std::cout << "How tall are you? (cm)\n";

    double height{};
    std::cin >> height;

    //if (height > 140.0)
    //  return true;
    // else
    //   return false;

    return(height > 140.0);
}

int main()
{
    if (isAllowedToTakeFunRide())
        std::cout << "Have fun!\n";
    else
        std::cout << "Sorry, you're too short.\n";

    return 0;
}
