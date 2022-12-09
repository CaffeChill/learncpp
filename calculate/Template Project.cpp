#include <iostream>

/* Assignment: Write a function called calculate() that takes two integers and a char representing one of the following mathematical operations : +, -, *, / , or % (modulus).
Use a switch statement to perform the appropriate mathematical operation on the integers, and return the result. 
If an invalid operator is passed into the function, the function should print an error. 
For the division operator, do an integer division.*/

void calculate(int x, int y, char op)
{
    switch (op)
    {
    case '+':
        std::cout << x << " + " << y << " = " << x + y << '\n';
        break;
    case '-':
        std::cout << x << " - " << y << " = " << x - y << '\n';
        break;
    case '*':
        std::cout << x << " * " << y << " = " << x * y << '\n';
        break;
    case '%':
        std::cout << x << " % " << y << " = " << x % y << '\n';
        break;
    default:
        std::cout << "No valid operator is selected.\n";
    } 
}

int main()
{
    int x, y;
    char op;

    std::cout << "Enter an integer: \n";

    std::cin >> x;

    std::cout << "Enter a second integer: \n";

    std::cin >> y;

    std::cout << "Enter an operator: \n";

    std::cin >> op;

    calculate(x, y, op);

    return 0;
}