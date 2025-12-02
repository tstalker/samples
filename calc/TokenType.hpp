#pragma once

namespace Calc
{
	using TokenType = char;
	enum class TokenValue: TokenType;
}

enum class Calc::TokenValue:
	Calc::TokenType
{
	EMPTY,
	END,
	NAME,
	NUMBER,
	NEW_LINE = '\n',
	POINT = '.',
	PRINT = ';',
	LEFT_PAREN = '(',
	RIGHT_PAREN = ')',
	PLUS = '+',
	MINUS = '-',
	STAR = '*',
	SLASH = '/',
	ASSIGN = '=',
	DIGIT_0 = '0',
	DIGIT_1 = '1',
	DIGIT_2 = '2',
	DIGIT_3 = '3',
	DIGIT_4 = '4',
	DIGIT_5 = '5',
	DIGIT_6 = '6',
	DIGIT_7 = '7',
	DIGIT_8 = '8',
	DIGIT_9 = '9'
};
