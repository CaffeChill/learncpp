#include <iostream>

int smallerValue()
{
    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;

    return x;
}
int largerValue()
{
    int x;
    std::cout << "Enter a larger integer: ";
    std::cin >> x;

    return x;
}

int main()
{
    int smaller, larger;
    smaller = smallerValue();
    larger = largerValue();

    if (smaller > larger)
    {
        int temp = larger;
        larger = smaller;
        smaller = temp;
        std::cout << "Swapping the values" << '\n';
        std::cout << "The smaller value is: " << smaller << '\n';
        std::cout << "The larger value is: " << larger << '\n';
        // temp dies here
    }
    else
    {
        std::cout << "The smaller value is: " << smaller << '\n';
        std::cout << "The larger value is: " << larger << '\n';
    }

    return 0;
}
// smaller and larger die here