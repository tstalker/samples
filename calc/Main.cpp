#include "Calc.hpp"

#include <iostream>
#include <numbers>

int main(void)
{
	Global::TableName["pi"] = std::numbers::pi;
	Global::TableName["e"] = std::numbers::e;

	while(std::cin)
	{
		Calc::GetToken();

		if(Global::CurrentToken == Calc::Token::END)
		{
			break;
		}

		if(Global::CurrentToken == Calc::Token::PRINT)
		{
			continue;
		}

		std::cout << Calc::Expression(false) << std::endl;
	}

	return EXIT_SUCCESS;
}

double Global::NumberValue{};
std::string Global::StringValue;
Calc::Token Global::CurrentToken(Calc::Token::PRINT);
Type::Table Global::TableName;
