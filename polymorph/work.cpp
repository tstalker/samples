#include "work.hpp"
#include "derived.hpp"

#include <cmath>

gen::work::work(const size_t n)
{
	generate_n(back_inserter(v), n,
		[i(0)] (void) mutable
		-> decltype(v)::value_type
	{
		const auto f(fma(i, 1.e-1, i));
		const auto p(div(i, 2).rem ? new derived(f, i) : new base(f));
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
gen::work::print(ostream& os) const
{
	op = true;

	for_each(v.cbegin(), v.cend(),
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
gen::operator << (ostream& os, const work& w)
-> ostream&
{
	w.print(os);
	return os;
}
