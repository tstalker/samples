#include "work.hpp"
#include "derived.hpp"

#include <cmath>
#include <algorithm>

gen::work::work(const std::size_t n)
{
	std::generate_n(std::back_inserter(v), n,
		[i(0)] (void) mutable
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
	std::for_each(v.begin(), v.end(),
		[] (auto& p)
	{
		delete p;
		p = nullptr;
	});
}

void
gen::work::print(std::ostream& os)
const
{
	op = true;

	std::for_each(v.cbegin(), v.cend(),
		[this, &os] (const auto p)
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
operator << (std::ostream& os, const gen::work& w)
-> std::ostream&
{
	w.print(os);
	return os;
}
