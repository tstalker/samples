#include "Calc.hpp"

double Calc::Expression(bool get)
{
	auto Left(Term(get));

	for(auto Again(true); Again;)
	{
		switch(CurrentToken)
		{
		case TokenValue::PLUS:
			Left += Term(true);
			break;

		case TokenValue::MINUS:
			Left -= Term(true);
			break;

		default:
			Again = false;
		}
	}

	return Left;
}
