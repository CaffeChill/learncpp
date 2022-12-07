// Assignment: Fix the following program

/*
#include <iostream>

int main()
{
	std::cout << "Enter a positive number: ";
	int num{};
	std::cin >> num;


	if (num < 0)
	{
		std::cout << "Negative number entered. Making positive.\n";
		num = -num;
	}

	std::cout << "You entered: " << num;

	return 0;
} */

/* Assignment: Write a file named constants.h that makes the following program run.
			   If your compiler is C++17 capable, use inline constexpr variables. 
			   Otherwise, use normal constexpr variables. 
			   max_class_size should be 35.
*/

/*
#include <iostream>
#include "constants.h"

int main()
{
	std::cout << "How many students are in your class? ";
	int students{};
	std::cin >> students;

	if (students > constants::max_class_size)
		std::cout << "There are too many students in this class";
	else
		std::cout << "This class isn't too large";

	return 0;
}*/

/* Assignment: Complete the following program by writing the passOrFail() function, which should return true for the first 3 calls, and false thereafter.
			   Do this without modifying the main() function.*/

#include <iostream>

bool passOrFail()
{
	static int pof = 0;
	if (pof < 3)
	{
		++pof;
		return true;
	} 
	else
	{
		return false;
	}

	/*
	static int s_passes { 3 };
	--s_passes;
	return (s_passes >= 0);
	*/
}

int main()
{
	std::cout << "User #1: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #2: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #3: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #4: " << (passOrFail() ? "Pass\n" : "Fail\n");
	std::cout << "User #5: " << (passOrFail() ? "Pass\n" : "Fail\n");

	return 0;
}