#pragma once

#include "TokenType.hpp"

#include <map>
#include <string>

namespace Calc
{
	extern TokenValue CurrentToken;
	extern double NumberValue;
	extern std::string StringValue;
	extern std::map<std::string, double> TableName;

	TokenValue GetToken(void);
	double Error(const std::string&);
	double Expression(bool);
	double Primary(bool);
	double Term(bool);
}
