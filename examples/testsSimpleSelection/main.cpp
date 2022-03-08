#include <gtest/gtest.h>
#include <iostream>
#include "utils.h"

utils::Grade grade;

int wmain(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);

	RUN_ALL_TESTS();

	std::cout << std::endl << "Score: " << grade.total() << "/" << grade.possible() << std::endl;
	std::getchar();
	return 0;
}