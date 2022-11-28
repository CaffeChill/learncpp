#include <iostream>
#include <plog/Log.h> // Step 1: include the logger headers
#include <plog/Initializers/RollingFileInitializer.h>

/*
int readNumber()
{
	//PLOGD << "readNumber() called";
	
	int x = 0;
	std::cout << "Please enter a number: ";
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	//PLOGD << "writeAnswer() called";

	std::cout << "The sum is: " << x << '\n';
}

int main()
{
	//plog::init(plog::debug, "Logfile.txt"); // Step 2: initialize the logger

	//PLOGD << "main() called"; // Step 3: Output to the log as if you were writing to the console

	int x = readNumber();
	x = x + readNumber();
	writeAnswer(x);

	return 0;
}
*/

int readNumber()
{
	std::cout << "Please enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The quotient is: " << x << '\n';
}

int main()
{
	int x{ };
	int y{ };
	x = readNumber();
	y = readNumber();
	writeAnswer(x / y);

	return 0;
}
