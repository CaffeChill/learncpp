#include <iostream>

double enterValue()
{
    double value;
    std::cout << "Enter a double value: " << '\n';
    std::cin >> value;

    return value;
}

char mathSymbol()
{
    char symbol;
    std::cout << "Enter one of the following: +, -, * or /" << '\n';
    std::cin >> symbol;

    return symbol;
}

void calculateAndPrint(double x, double y, char symbol)
{
    //double x = enterValue();
    //double y = enterValue();
    double result;
    //char symbol = mathSymbol();
    
    if (symbol == '+')
    {
        result = x + y;
        std::cout << x << " " << symbol << " " << y << " is " << result;
    }
    else if (symbol == '-')
    {
        result = x - y;
        std::cout << x << " " << symbol << " " << y << " is " << result;
    }
    else if (symbol == '*')
    {
        result = x * y;
        std::cout << x << " " << symbol << " " << y << " is " << result;
    }
    else if (symbol == '/')
    {
        result = x / y;
        std::cout << x << " " << symbol << " " << y << " is " << result;
    }
}

int main()
{
    double x = enterValue();
    double y = enterValue();
    char symbol = mathSymbol();
    calculateAndPrint(x,y,symbol);

    return 0;
}
