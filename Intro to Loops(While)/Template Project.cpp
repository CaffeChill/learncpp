#include <iostream>

// Assignment: Write a program that prints out the letters a through z along with their ASCII codes.

/*
void printAscii()
{
    int count = 97;
    std::cout << "ASCII convert from int to char btw. 97 and 122:\n";
    while (count <= 122)
    {
        std::cout << count << ' ' << static_cast<char>(count) << '\n';
        count++;
    }

    char convert = 'a';
    std::cout << "ASCII convert from char to int btw. 'a' and 'z':\n";
    while (convert <= 'z')
    {
        std::cout << convert << ' ' << static_cast<int>(convert) << '\n';
        convert++;
    }
}

int main()
{
    printAscii();
    return 0;
}*/

/* Assignment: Invert the nested loops example so it prints the following :
    5 4 3 2 1
    4 3 2 1
    3 2 1
    2 1
    1
*/

/*
void invertLoop()
{
    int outer = 5;
    
    while (outer >= 1)
    {
        int inner = 0;
        
        while (inner < outer)
        {
            std::cout << outer - inner << ' ';
            inner++;
        }

        std::cout << '\n';
        outer--;
    }

    // or like this:
	int outer{ 5 };
	while (outer >= 1)
	{
		// loop between outer and 1
		int inner{ outer };
		while (inner >= 1)
        {
			std::cout << inner-- << ' ';
        }

		// print a newline at the end of each row
		std::cout << '\n';
		--outer;
	}
}

int main()
{
    invertLoop();
    return 0;
}
*/

/* Assignment: Now make the numbers print like this:
*                      1
*                    2 1
*                  3 2 1
*                4 3 2 1
*              5 4 3 2 1
*/

int main()
{
    int outer = 1;

    while (outer <= 5)
    {
        int inner = 5;

        while (inner > outer)
        {
            std::cout << "X ";
            inner--;
        }
        outer++;
    }


    return 0;
}