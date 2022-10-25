#pragma once

namespace token
{
	enum class decision: char;
}

enum class token::decision: char
{
	END = 1,
	LEFT,
	RIGHT,
	LEFT_LEFT,
	LEFT_RIGHT,
	RIGHT_RIGHT
};
