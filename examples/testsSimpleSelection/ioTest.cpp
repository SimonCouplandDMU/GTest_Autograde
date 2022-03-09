#include <gtest/gtest.h>
#include "utils.h"

int main();

extern utils::Grade grade;

GRADED_TEST(IOTest, CaptialN, 2) {
	setInputString("N");
	main();
	auto lastString = utils::getLastString(std::std_output);
	EXPECT_EQ(lastString, "stop");
}

GRADED_TEST(IOTest, LowerN, 2) {
	setInputString("n");
	main();
	auto lastString = utils::getLastString(std::std_output);
	ASSERT_EQ(lastString, "stop");
}

GRADED_TEST(IOTest, CaptialY, 2) {
	setInputString("Y");
	main();
	auto lastString = utils::getLastString(std::std_output);
	ASSERT_EQ(lastString, "continue");
}

GRADED_TEST(IOTest, LowerY, 2) {
	setInputString("y");
	main();
	auto lastString = utils::getLastString(std::std_output);
	ASSERT_EQ(lastString, "continue");
}

GRADED_TEST(IOTest, CaptialZ,2 ) {
	setInputString("Z");
	main();
	auto lastString = utils::getLastString(std::std_output);
	ASSERT_EQ(lastString, "answer");
}

GRADED_TEST(IOTest, lowerZ, 2) {
	setInputString("z");
	main();
	auto lastString = utils::getLastString(std::std_output);
	ASSERT_EQ(lastString, "answer");
}

GRADED_TEST(IOTest, number, 2) {
	setInputString("9.4");
	main();
	auto lastString = utils::getLastString(std::std_output);
	ASSERT_EQ(lastString, "answer");
}

GRADED_TEST(IOTest, symbol, 2) {
	setInputString("@");
	main();
	auto lastString = utils::getLastString(std::std_output);
	ASSERT_EQ(lastString, "answer");
}


