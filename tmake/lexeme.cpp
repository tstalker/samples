#include "parse.hpp"

#include <cctype>

tmk::lexeme(std::ifstream& f)
{
	while(!f.eof())
	{
		const auto c(f.get());
		if(std::isalnum(c))
			word += c;
		else break;
	}
}
