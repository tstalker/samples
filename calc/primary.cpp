#include "generic.hpp"

#include <iostream>

double
gen::primary(void) // read and evaluate a Primary
{
	auto t(gettoken());

	switch(t.kind)
	{
	case '(': // handle '(' expression ')'
	{
		auto d(expression());
		t = gettoken();
		if(t.kind != ')')
		{
			error("')' expected");
		}
		return d;
	}
	case '8':           // we use '8' to represent a number
		return t.value; // return the number's value
	default:
		error("primary expected");
	}
	return t.value;
}
