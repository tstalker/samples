#include "token.hpp"

#include <map>

auto token::decision_get(crdvector dv, crivector iv)
-> decision
{
	map<int, decision> m;
	for(const auto& d: dv)
	{
		m.emplace(decision_sum(d, iv), d);
	}
	return m.crbegin()->second;
}
