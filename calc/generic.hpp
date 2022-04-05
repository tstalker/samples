#pragma once

#include <cstddef>

namespace gen
{
	using namespace std;
	class Token;

	double expression(void);	// read and evaluate a Expression
	double primary(void);		// read and evaluate a Primary
	double term(void);			// read and evaluate a Term
	Token gettoken(void);		// read a token from cin
	void error(const char*);
}

class gen::Token
{
public:
	char kind{};	// what kind of token
	double value{};	// for numbers: a value

	Token(const char ch): // make a Token from a char
		kind(ch)
	{}

	Token(const char ch, const double val): // make a Token from a char and a double
		kind(ch),
		value(val)
	{}
};
