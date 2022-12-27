/*
* Assignment: Take the program below and modify it so that the ball falls for as many seconds as needed until it reaches the ground. 

#include <iostream>
#include "constants.h"

double calculateHeight(double initialHeight, int seconds)
{
    double distanceFallen{ myConstants::gravity * seconds * seconds / 2 };
    double heightNow{ initialHeight - distanceFallen };

    // Check whether we've gone under the ground
    // If so, set the height to ground-level

    if (heightNow < 0.0)
    {
        return 0.0;
    }
    else
    {
        return heightNow;
    }
}

// if the ball hits the ground, return 0.0
bool hitGround(double initialHeight, int time)
{
    double heightNow = calculateHeight(initialHeight, time);
    std::cout << "At " << time << " seconds, the ball is at height: " << heightNow << "\n";
    
    return (heightNow == 0.0);
}

int main()
{
    std::cout << "Enter the initial height of the tower in meters: ";
    double initialHeight{};
    std::cin >> initialHeight;

    int seconds = 0;
    while (!hitGround(initialHeight, seconds))
    {
        ++seconds;
    }

    return 0;
}*/

/*
* 
* Assignment: A prime number is a natural number greater than 1 that is evenly divisible (with no remainder) only by 1 and itself. 
* Complete the following program by writing the isPrime() function using a for-loop. 
* When successful, the program will print “Success!”.
  
#include <iostream>
#include <cassert>
#include <cmath>

bool isPrime(int x)
{
    // write this function using a for loop
    if (x < 2)
    {
        return false;
    }
    // static cast into int, because sqrt of x can be with a decimal( number,...), we don't want that
    for (int i = 2; i <= static_cast<int>(std::sqrt(x)); i++)
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
    assert(!isPrime(0));
    assert(!isPrime(1));
    assert(isPrime(2));
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(isPrime(13417));

    std::cout << "Success!\n";

    return 0;
}*/

/* Assignment: Implement a game of hi - lo.First, your program should pick a random integer between 1 and 100. The user is given 7 tries to guess the number.
If the user does not guess the correct number, the program should tell them whether they guessed too high or too low.
If the user guesses the right number, the program should tell them they won.
If they run out of guesses, the program should tell them they lost, and what the correct number is.
At the end of the game, the user should be asked if they want to play again.If the user doesn’t enter ‘y’ or ‘n’, ask them again.
*/

#include <iostream>
#include <random>

void enterGame()
{
    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";
}

void hiloGame()
{
    std::mt19937 mt;
    std::uniform_int_distribution limit(1, 100);

    int guess = 0;
    std::cin >> guess;

    if (guess <= 0)
    {
        std::cout << "You should select a number greater than 0.\n";
        hiloGame();
    }
    else if (guess > 100)
    {
        std::cout << "You should select a number lower than 101.\n";
        hiloGame();
    }
    else
    {
        for (int i = 1; i <= 7; i++)
            {
                int temp = limit(mt);

                std::cout << "Guess #" << i << ": " << guess << '\n';

                if (guess == temp)
                {
                    std::cout << "Correct! You win!" << '\n';
                }
                else if (guess < temp)
                {
                    std::cout << "Your guess is too low." << '\n';
                }
                else
                {
                    std::cout << "Your guess is too high." << '\n';
                }
            }
    }
}

int main()
{
    enterGame();

    hiloGame();

    std::cout << "Would you like to play again (y/n)? ";

    char answer;
    std::cin >> answer;

    if (answer == 'y')
    {
        enterGame();
        hiloGame();
    }
    else if (answer == 'n')
    {
        std::cout << "Thank you for playing.\n";
    }
    else
    {
        std::cout << "Would you like to play again (y/n)? ";
        //std::cerr << "Error: Please enter 'y' for yes, 'n' for no.\n";
    }

    return 0;
}