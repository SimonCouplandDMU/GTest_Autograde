#pragma once
#include <gtest/gtest.h>

#include <stdint.h>
#include <sstream>

// Basic IO overriders for simulated keyboard input
#define clearIO() \
	std::std_input = std::stringstream();\
	std::std_output = std::stringstream();\

#define setInputString(STR)\
	clearIO();\
	std::std_input << STR;\

#define addInputString(STR)\
	std::std_input << STR;\

// Modified version of the google test main macro
#define GRADED_TEST(test_suite_name, test_name, points_possible)  \
  GTEST_TEST_(test_suite_name, test_name, ::utils::GradedTest<points_possible>, \
              ::testing::internal::GetTestTypeId())


namespace utils {

	// Could replace these with some work on type_traits and touch of metaprogramming
	std::string getFirstString(std::stringstream& ss);
	std::string getLastString(std::stringstream& ss);
	int getFirstInt(std::stringstream& ss);
	int getLastInt(std::stringstream& ss);
	float getFirstFloat(std::stringstream& ss);
	float getLastFloat(std::stringstream& ss);

	// Modified version fo the standard googletest class
	// Adds possible points on construction
	// Adds actual on on destruction if the test hasn't failed
	// Possible points is on an 8 bit unsigned int, so a low number
	template<uint8_t P>
	class GradedTest : public testing::Test
	{
	public:
		~GradedTest() 
		{
			if (!HasFailure()) 	grade.addScore(m_pointsPossible);
		}
	protected:
		GradedTest() : Test(), m_pointsPossible(P) 
		{
			grade.addPossible(P);
		}
		uint8_t m_pointsPossible;
	};


	// Simple grade class which keeps possible and actual points encapsulated
	class Grade
	{
	public: 
		Grade() : m_total(0), m_possible(0) {}
		uint32_t total() { 
			return m_total; 
		}
		uint32_t possible() { return m_possible; }
		void addScore(uint32_t add) { m_total += add; }
		void addPossible(uint32_t add) { m_possible += add;}
	private:
		uint32_t m_total;
		uint32_t m_possible;
	};



}