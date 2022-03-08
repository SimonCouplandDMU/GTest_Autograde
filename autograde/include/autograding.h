#pragma once

#ifdef AUTOGRADING
#include <sstream>
#include <string>

namespace std {
	std::stringstream std_input;
#define cin std_input
	std::stringstream std_output;
#define cout std_output
}

#endif