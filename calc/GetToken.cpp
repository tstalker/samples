#include "Calc.hpp"

#include <cctype>
#include <iostream>

auto Calc::GetToken(void)
-> Token
{
	char c{};

	do
	{
		Global::CurrentToken = std::cin.get(c) ? static_cast<Token>(c) : Token::END;
	}
	while(Global::CurrentToken != Token::END && Global::CurrentToken != Token::NEW_LINE && std::isspace(c));

	switch(Global::CurrentToken)
	{
	case Token::EMPTY:
		Global::CurrentToken = Token::END;
		break;

	case Token::NEW_LINE:
		Global::CurrentToken = Token::PRINT;
		break;

	case Token::ASSIGN:
	case Token::LEFT_PAREN:
	case Token::RIGHT_PAREN:
	case Token::PLUS:
	case Token::MINUS:
	case Token::STAR:
	case Token::SLASH:
	case Token::PRINT:
	case Token::END:
		break;

	case Token::POINT:
	case Token::DIGIT_0:
	case Token::DIGIT_1:
	case Token::DIGIT_2:
	case Token::DIGIT_3:
	case Token::DIGIT_4:
	case Token::DIGIT_5:
	case Token::DIGIT_6:
	case Token::DIGIT_7:
	case Token::DIGIT_8:
	case Token::DIGIT_9:
		Global::CurrentToken = Token::NUMBER;
		std::cin.putback(c);
		std::cin >> Global::NumberValue;
		break;

	default:
		if(std::isalpha(c))
		{
			Global::CurrentToken = Token::NAME;
			Global::StringValue = c;

			while(std::cin.get(c) && std::isalnum(c))
			{
				Global::StringValue.push_back(c);
			}

			std::cin.putback(c);
		}
		else
		{
			Global::CurrentToken = Token::PRINT;
			Error("Primary Expression expected");
		}
	}

	return Global::CurrentToken;
}
