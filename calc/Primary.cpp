#include "Calc.hpp"

double Calc::Primary(bool get)
{
	double Left{};

	if(get)
	{
		GetToken();
	}

	switch(Global::CurrentToken)
	{
	case Token::NUMBER:
		Left = Global::NumberValue;
		GetToken();
		break;

	case Token::NAME:
		if(auto& Value(Global::TableName[Global::StringValue]);
			GetToken() == Token::ASSIGN)
		{
			Left = Value = Expression(true);
		}
		else
		{
			Left = Value;
		}

		break;

	case Token::MINUS:
		Left = -Primary(true);
		break;

	case Token::LEFT_PAREN:
		Left = Expression(true);

		if(Global::CurrentToken != Token::RIGHT_PAREN)
		{
			Left = Error("')' expected");
		}
		else
		{
			GetToken();
		}

		break;

	default:
		Left = Error("Primary Expression expected");
	}

	return Left;
}
