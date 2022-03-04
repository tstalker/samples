#pragma once

#include "base.hpp"

namespace ier
{
template <typename T, typename U>
	class Derived;
template <typename T, typename U>
	decltype(auto) operator << (ostream&, const Derived<T, U>&);
}

template <typename T, typename U>
class ier::Derived final:
	public Base<T>
{
	using Base<T>::get;

public:
	Derived(void);
	explicit Derived(const U&);
	Derived(const T&, const U&);
	Derived(const Derived&);
	Derived(Derived&&);
	~Derived(void) override final;

	decltype(auto) operator = (const Derived&);
	decltype(auto) operator = (Derived&&);

	void Print(void) const;
	auto Value(void) const;

	ostream& PrintBraces(ostream&) const override final;

private:
	U* p{nullptr};
};

template <typename T, typename U>
ier::Derived<T, U>::Derived(void)
{
#ifdef DEBUG
	cout << "Derived::Derived() -> " << *this << endl;
#endif
}

template <typename T, typename U>
ier::Derived<T, U>::Derived(const U& x):
	p(x.p ? new U(*x.p) : nullptr)
{
#ifdef DEBUG
	cout << "Derived::Derived(" << x << ") -> " << *this << endl;
#endif
}

template <typename T, typename U>
ier::Derived<T, U>::Derived(const T& x, const U& y):
	Base<T>(x), p(new U(y))
{
#ifdef DEBUG
	cout << "Derived::Derived(" << x << ", " << y << ") -> " << *this << endl;
#endif
}

template <typename T, typename U>
ier::Derived<T, U>::Derived(const Derived& x):
	Base<T>(x), p(x.p ? new U(*x.p) : nullptr)
{
#ifdef DEBUG
	cout << "Derived::Derived(" << x << ") -> " << *this << endl;
#endif
}

template <typename T, typename U>
ier::Derived<T, U>::Derived(Derived&& x):
	Base<T>(x), p(x.p)
{
#ifdef DEBUG
	cout << "Derived::Derived(&&" << x << ") -> " << *this << endl;
#endif

	x.p = nullptr;
}

template <typename T, typename U>
ier::Derived<T, U>::~Derived(void)
{
#ifdef DEBUG
	cout << "Derived::~Derived() -> " << *this << endl;
#endif

	delete p;
}

template <typename T, typename U>
decltype(auto)
ier::Derived<T, U>::operator = (const Derived& x)
{
#ifdef DEBUG
	cout << "Derived::operator = (" << x << "): " << *this << " -> ";
#endif

	get() = x;
	delete p;
	p = x.p ? new U(*x.p) : nullptr;

#ifdef DEBUG
	cout << *this << endl;
#endif

	return *this;
}

template <typename T, typename U>
decltype(auto)
ier::Derived<T, U>::operator = (Derived&& x)
{
#ifdef DEBUG
	cout << "Derived::operator = (&&" << x << "): " << *this << " -> ";
#endif

	get() = x;
	delete p;
	p = x.p;
	x.p = nullptr;

#ifdef DEBUG
	cout << *this << endl;
#endif

	return *this;
}

template <typename T, typename U>
void ier::Derived<T, U>::Print(void) const
{
	Derived::PrintSpace(cout) << *this;
}

template <typename T, typename U>
auto ier::Derived<T, U>::PrintBraces(ostream& s) const
-> ostream&
{
	Base<T>::PrintBraces(s << '{') << ' ';

	if constexpr(is_floating_point_v<U>)
	{
		s << showpoint << setprecision(PRECISION);
	}

	s << Value() << '}';
	return s;
}

template <typename T, typename U>
auto ier::Derived<T, U>::Value(void) const
{
	return p ? *p : U();
}

template <typename T, typename U>
decltype(auto)
ier::operator << (ostream& s, const Derived<T, U> &x)
{
	return x.PrintBraces(s);
}
