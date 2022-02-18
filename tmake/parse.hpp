#ifdef PARSE_HPP
#error Redefined header parse.hpp
#endif

#define PARSE_HPP

#include <string>
#include <fstream>

namespace tmk
{
	void parse(ifstream&);
	lexeme getlex(ifstream&);
}
