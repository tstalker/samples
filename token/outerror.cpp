#include "token.hpp"

void token::outerror(const char* s)
{
	cerr << "Error: " << s << endl;
	exit(EXIT_FAILURE);
}
