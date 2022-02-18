#include "token.hpp"

auto token::decision_get(crivector v) -> decision
{
	switch(v.size())
	{
	default:
	{
		return decision_get(dvector
		{
			decision::LEFT,
			decision::RIGHT,
			decision::LEFT_LEFT,
			decision::LEFT_RIGHT,
			decision::RIGHT_RIGHT
		}, v);
	}
	case 0:
		return decision::END;
	case 1:
		return decision::LEFT;
	case 2:
	{
		return decision_get(dvector
		{
			decision::LEFT,
			decision::RIGHT,
			decision::LEFT_RIGHT
		}, v);
	}
	}
}
