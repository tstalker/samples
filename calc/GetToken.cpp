#include "Calc.hpp"

#include <cctype>
#include <iostream>

auto Calc::GetToken(void)
-> TokenValue
{
	char c{};

	do
	{
		CurrentToken = std::cin.get(c) ? static_cast<TokenValue>(c) : TokenValue::END;
	}
	while(CurrentToken != TokenValue::END && CurrentToken != TokenValue::NEW_LINE && std::isspace(c));

	switch(CurrentToken)
	{
	case TokenValue::EMPTY:
		CurrentToken = TokenValue::END;
		break;

	case TokenValue::NEW_LINE:
		CurrentToken = TokenValue::PRINT;
		break;

	case TokenValue::ASSIGN:
	case TokenValue::LEFT_PAREN:
	case TokenValue::RIGHT_PAREN:
	case TokenValue::PLUS:
	case TokenValue::MINUS:
	case TokenValue::STAR:
	case TokenValue::SLASH:
	case TokenValue::PRINT:
	case TokenValue::END:
		break;

	case TokenValue::POINT:
	case TokenValue::DIGIT_0:
	case TokenValue::DIGIT_1:
	case TokenValue::DIGIT_2:
	case TokenValue::DIGIT_3:
	case TokenValue::DIGIT_4:
	case TokenValue::DIGIT_5:
	case TokenValue::DIGIT_6:
	case TokenValue::DIGIT_7:
	case TokenValue::DIGIT_8:
	case TokenValue::DIGIT_9:
		CurrentToken = TokenValue::NUMBER;
		std::cin.putback(c);
		std::cin >> NumberValue;
		break;

	default:
		if(std::isalpha(c))
		{
			CurrentToken = TokenValue::NAME;
			StringValue = c;

			while(std::cin.get(c) && std::isalnum(c))
			{
				StringValue.push_back(c);
			}

			std::cin.putback(c);
		}
		else
		{
			CurrentToken = TokenValue::PRINT;
			Error("Primary Expression expected");
		}
	}

	return CurrentToken;
}
