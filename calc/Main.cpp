#include "Calc.hpp"

#include <iostream>
#include <numbers>

int main(void)
{
	Calc::TableName["pi"] = std::numbers::pi;
	Calc::TableName["e"] = std::numbers::e;

	while(std::cin)
	{
		Calc::GetToken();

		if(Calc::CurrentToken == Calc::TokenValue::END)
		{
			break;
		}

		if(Calc::CurrentToken == Calc::TokenValue::PRINT)
		{
			continue;
		}

		std::cout << Calc::Expression(false) << std::endl;
	}

	return EXIT_SUCCESS;
}

double Calc::NumberValue{};
std::string Calc::StringValue;
Calc::TokenValue Calc::CurrentToken(Calc::TokenValue::PRINT);
std::map<std::string, double> Calc::TableName;
