#include "generic.hpp"

#include <iostream>

double gen::term(void)
{
	auto left(primary());
	auto t(gettoken()); // get the next token

	while(true)
	{
		switch(t.kind)
		{
		case '*':
			left *= primary();
			t = gettoken();
			break;
		case '/':
		{
			auto d(primary());
			if(d == 0)
			{
				error("divide by zero");
			}
			left /= d;
			t = gettoken();
			break;
		}
		default:
			return left;
		}
	}
}
