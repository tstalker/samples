#ifdef DECISION_HPP
#error Redefined header decision.hpp
#endif

#define DECISION_HPP

namespace token
{
	enum class decision: char;
	using cdecision = const decision;
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
