#include "Calc.hpp"

double Calc::Primary(bool get)
{
	double Left{};

	if(get)
	{
		GetToken();
	}

	switch(CurrentToken)
	{
	case TokenValue::NUMBER:
		Left = NumberValue;
		GetToken();
		break;

	case TokenValue::NAME:
		if(auto& Value(TableName[StringValue]);
			GetToken() == TokenValue::ASSIGN)
		{
			Left = Value = Expression(true);
		}
		else
		{
			Left = Value;
		}

		break;

	case TokenValue::MINUS:
		Left = -Primary(true);
		break;

	case TokenValue::LEFT_PAREN:
		Left = Expression(true);

		if(CurrentToken != TokenValue::RIGHT_PAREN)
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
