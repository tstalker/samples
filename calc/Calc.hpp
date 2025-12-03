#pragma once

#include "Token.hpp"

#include <map>
#include <string>

namespace Type
{
	using Table = std::map<std::string, double>;
}

namespace Global
{
	extern Calc::Token CurrentToken;
	extern double NumberValue;
	extern std::string StringValue;
	extern Type::Table TableName;
}

namespace Calc
{
	Token GetToken(void);
	double Error(const std::string&);
	double Expression(bool);
	double Primary(bool);
	double Term(bool);
}
