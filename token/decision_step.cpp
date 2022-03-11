#include "token.hpp"

void token::decision_step(cdecision d, rivector v)
{
	csizet MAX(2);
	switch(d)
	{
	default:
		outerror("Invalid decision");
	case decision::END:
		break;
	case decision::LEFT:
		v.erase(v.begin());
		break;
	case decision::RIGHT:
		v.pop_back();
		break;
	case decision::LEFT_LEFT:
		for(size_t i{}; i < MAX; i++)
		{
			decision_step(decision::LEFT, v);
		}
		break;
	case decision::LEFT_RIGHT:
		decision_step(decision::LEFT, v);
		decision_step(decision::RIGHT, v);
		break;
	case decision::RIGHT_RIGHT:
		for(size_t i{}; i < MAX; i++)
		{
			decision_step(decision::RIGHT, v);
		}
	}
}
