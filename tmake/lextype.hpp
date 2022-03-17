#pragma once

namespace tmk
{
	enum class lextype: char;
}

enum class tmk::lextype: char
{
	WORD = 'w',
	OPERATOR = 'o'
};
