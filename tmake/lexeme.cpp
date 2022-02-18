#include "parse.hpp"

#include <cctype>

tmk::lexeme(ifstream& f)
{
	while(!f.eof())
	{
		const auto c(f.get());
		if(isalnum(c))
			word += c;
		else break;
	}
}
