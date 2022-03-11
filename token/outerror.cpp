#include "token.hpp"

void token::outerror(cpchar s)
{
	cerr << "Error: " << s << endl;
	exit(EXIT_FAILURE);
}
