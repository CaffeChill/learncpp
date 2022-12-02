#include <iostream>
#include <cstdint>

// ball not moving at start --> velocity = 0
const double gravity = 9.8;

double heightOfTower()
{
    double height;

    std::cout << "Enter the height of the tower in meters: ";
    std::cin >> height;

    return height;
}

int main()
{   /*
    //std::cout << heightOfTower();

    double height = heightOfTower();

    for (int i = 0; i < 6; i++)
    {
        double distance_fallen = gravity * (i * i) / 2.0;
        if (height - distance_fallen < 0 || height - distance_fallen == 0)
        {
            std::cout << "At " << i << " seconds, the ball is on the ground." << '\n'; 
        }
        else
        {
            std::cout << "At " << i << " seconds, the ball is at height: " << height - distance_fallen << " meters." << '\n';
        }
    }*/

    std::cout << "How old are you?\n";
    // instead of unsigned int, int is enough to store the age.
    //std::uint8_t age{};
    int age;
    std::cin >> age;

    std::cout << "Allowed to drive a car in Texas [";

    if (age >= 16)
    {
        //std::cout << "x";
        std::cout << 'x';
    } 
    else
    {
        //std::cout << " ";
        std::cout << ' ';
    }

    std::cout << "]\n";
    
    return 0;
}