#include "Calc.hpp"

double Calc::Expression(bool get)
{
	auto Left(Term(get));

	for(auto Again(true); Again;)
	{
		switch(Global::CurrentToken)
		{
		case Token::PLUS:
			Left += Term(true);
			break;

		case Token::MINUS:
			Left -= Term(true);
			break;

		default:
			Again = false;
		}
	}

	return Left;
}
