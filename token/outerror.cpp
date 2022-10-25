#include "token.hpp"

void token::outerror(const char* s)
{
	std::cerr << "Error: " << s << std::endl;
	std::exit(EXIT_FAILURE);
}
