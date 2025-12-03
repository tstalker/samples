#include "Calc.hpp"

#include <cmath>

double Calc::Term(bool get)
{
	constexpr auto e(1e-6);
	auto Left(Primary(get));

	for(auto Again(true); Again;)
	{
		switch(Global::CurrentToken)
		{
		case Token::STAR:
			Left *= Primary(true);
			break;

		case Token::SLASH:
			if(const auto d(Primary(true));
				std::abs(d) < e)
			{
				Again = false;
				Left = Error("Division by 0");
			}
			else
			{
				Left /= d;
			}

			break;

		default:
			Again = false;
		}
	}

	return Left;
}
