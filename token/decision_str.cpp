#include "token.hpp"

auto token::decision_str(cdecision d) -> string
{
	switch(d)
	{
	default:
		outerror("Invalid decision");
		return nullptr;
	case decision::END:
		return "END";
	case decision::LEFT:
		return "LEFT";
	case decision::RIGHT:
		return "RIGHT";
	case decision::LEFT_LEFT:
		return "LEFT_LEFT";
	case decision::LEFT_RIGHT:
		return "LEFT_RIGHT";
	case decision::RIGHT_RIGHT:
		return "RIGHT_RIGHT";
	}
}
