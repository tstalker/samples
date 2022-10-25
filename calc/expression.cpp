#include "generic.hpp"

#include <iostream>

double gen::expression(void)
{
	auto left(term());  // read and evaluate a Term
	auto t(gettoken()); // get the next token

	while(true)
	{
		switch(t.kind)
		{
		case '+':
			left += term(); // evaluate Term and add
			t = gettoken();
			break;
		case '-':
			left -= term(); // evaluate Term and subtract
			t = gettoken();
			break;
		default:
			return left;    // finally: no more + or -: return the answer
		}
	}
}
