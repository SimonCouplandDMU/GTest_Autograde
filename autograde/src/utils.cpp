#include "utils.h"


namespace utils {

	std::string getFirstString(std::stringstream& ss)
	{
		std::string result = "";
		if (ss.rdbuf()->in_avail() != 0)
		{
			ss >> result;
		}
		return result;
	}

	std::string getLastString(std::stringstream& ss)
	{
		std::string result = "";
		if (ss.rdbuf()->in_avail() != 0)
		{
			while (ss >> result);
		}
		return result;
	}

	int getFirstInt(std::stringstream& ss)
	{
		std::string str = "";
		if (ss.rdbuf()->in_avail() != 0)
		{
			ss >> str;
		}
		return std::atoi(str.c_str());
	}

	int getLastInt(std::stringstream& ss)
	{
		std::string str = "";
		if (ss.rdbuf()->in_avail() != 0)
		{
			while (ss >> str);
		}
		return std::atoi(str.c_str());
	}

	float getFirstFloat(std::stringstream& ss)
	{
		std::string str = "";
		if (ss.rdbuf()->in_avail() != 0)
		{
			ss >> str;
		}
		return std::atof(str.c_str());
	}

	float getLastFloat(std::stringstream& ss)
	{
		std::string str = "";
		if (ss.rdbuf()->in_avail() != 0)
		{
			while (ss >> str);
		}
		return std::atof(str.c_str());
	}
}