#include "work.hpp"
#include "derived.hpp"

#include <algorithm>
#include <cmath>

gen::work::work(
	const std::size_t n)
{
	std::generate_n(std::back_inserter(v), n,
		[i{int()}](void)
		mutable
		-> decltype(v)::value_type
	{
		const auto f(std::fma(i, 1.e-1, i));
		const auto p(std::div(i, 2).rem ? new derived(f, i) : new base(f));
		i++;
		return p;
	});
}

gen::work::~work(void)
{
	for(auto p: v)
	{
		delete p;
	}
}

void
gen::work::print(
	std::ostream& os)
const
{
	op = true;
	std::for_each(v.cbegin(), v.cend(),
		[this, &os](const auto p)
	{
		if(op)
		{
			op.reset();
		}
		else
		{
			os << ' ';
		}

		p->print(os);
	});
}

auto
gen::operator << (
	std::ostream& os,
	const work& w)
-> std::ostream&
{
	w.print(os);
	return os;
}
