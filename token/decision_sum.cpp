#include "token.hpp"

int token::decision_sum(cdecision d, crivector v)
{
	switch(d)
	{
	default:
		outerror("Invalid decision");
	case decision::END:
		return 0;
	case decision::LEFT:
		return v.front();
	case decision::RIGHT:
		return v.back();
	case decision::LEFT_RIGHT:
		return decision_sum(decision::LEFT, v) + decision_sum(decision::RIGHT, v);
	case decision::LEFT_LEFT:
		return decision_sum(decision::LEFT, v) + decision_sum(decision::LEFT, ivector(v.cbegin() + 1, v.cend()));
	case decision::RIGHT_RIGHT:
		return decision_sum(decision::RIGHT, v) + decision_sum(decision::RIGHT, ivector(v.cbegin(), v.cend() - 1));
	}
}
