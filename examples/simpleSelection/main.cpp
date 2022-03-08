#include <iostream>
#include "autograding.h" // Must be included after iostream

int main()
{
	std::cout << "hello would you like to continue? (y/n) ";
	char answer;

	std::cin >> answer;
	if (answer == 'y' || answer == 'Y')
	{
		std::cout << "Thank you I will continue" << std::endl;
	}
	else if (answer == 'n' || answer == 'N')
	{
		std::cout << "Then I shall stop" << std::endl;
	}
	else
	{
		std::cout << "I did not understand your answer" << std::endl;
	}
	return 0;
}

