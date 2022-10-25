#include "generic.hpp"

#include <iostream>

void gen::error(const char* s)
{
	cerr << s << endl;
	exit(EXIT_FAILURE);
}
