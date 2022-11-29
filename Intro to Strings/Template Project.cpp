#include <iostream>
#include <string>
#include <string_view>

int main()
{
    //std::string name;
    std::string_view name = "Alphan Akyuz";
    int age = 0;

    std::cout << "Enter your full name: \n";
    //std::getline(std::cin >> std::ws, name);
    std::cout << "My name is: " << name << '\n';
    std::cout << "Enter your age: \n";
    std::cin >> age;
    
    //std::cout << "Name: " << name << " Age: " << age;
    std::cout << "Your age + length of name is: " << std::ssize(name) + age;

    return 0;
}
