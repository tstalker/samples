#pragma once

#include <iomanip>
#include <iostream>
#include <optional>

namespace ier
{
	using namespace std;

	const auto PRECISION(2);

template <typename T>
	class Base;
template <typename T>
	decltype(auto) operator << (ostream&, const Base<T>&);
template <typename T>
	decltype(auto) operator << (ostream&, const unique_ptr<T>&);
}

template <typename T>
class ier::Base
{
public:
	using element_type = T;

	Base(void);
	explicit Base(const element_type&);
	Base(const Base&);
	Base(Base&&);
	virtual ~Base(void);

	decltype(auto) operator = (const Base&);
	decltype(auto) operator = (Base&&);

	auto Value(void) const;
	void Print(void) const;

private:
	element_type* p{nullptr};

public:
	static optional<bool> FlagSpace;

protected:
	decltype(auto) get(void);

public:
	virtual ostream& PrintBraces(ostream&) const;
	static decltype(auto) PrintSpace(ostream&);
};

template <typename T>
decltype(auto)
ier::Base<T>::get(void)
{
	return *this;
}

template <typename T>
ier::Base<T>::Base(void)
{
#ifdef DEBUG
	cout << "Base::Base() -> " << *this << endl;
#endif
}

template <typename T>
ier::Base<T>::Base(const element_type& x):
	p(new element_type(x))
{
#ifdef DEBUG
	cout << "Base::Base(" << x << ") -> " << *this << endl;
#endif
}

template <typename T>
ier::Base<T>::Base(const Base& x):
	p(x.p ? new element_type(*x.p) : nullptr)
{
#ifdef DEBUG
	cout << "Base::Base(" << x << ") -> " << *this << endl;
#endif
}

template <typename T>
ier::Base<T>::Base(Base&& x):
	p(x.p)
{
#ifdef DEBUG
	cout << "Base::Base(&&" << x << ") -> " << *this << endl;
#endif

	x.p = nullptr;
}

template <typename T>
ier::Base<T>::~Base(void)
{
#ifdef DEBUG
	cout << "Base::~Base() -> " << *this << endl;
#endif

	delete p;
}

template <typename T>
decltype(auto)
ier::Base<T>::operator = (const Base& x)
{
#ifdef DEBUG
	cout << "Base::operator = (" << x << "): " << *this << " -> ";
#endif

	delete p;
	p = x.p ? new element_type(*x.p) : nullptr;

#ifdef DEBUG
	cout << *this << endl;
#endif

	return *this;
}

template <typename T>
decltype(auto)
ier::Base<T>::operator = (Base&& x)
{
#ifdef DEBUG
	cout << "Base::operator = (&&" << x << "): " << *this << " -> ";
#endif

	delete p;
	p = x.p;
	x.p = nullptr;

#ifdef DEBUG
	cout << *this << endl;
#endif

	return *this;
}

template <typename T>
void
ier::Base<T>::Print(void) const
{
	PrintSpace(cout) << *this;
}

template <typename T>
decltype(auto)
ier::Base<T>::PrintSpace(ostream& s)
{
	if(FlagSpace)
	{
		s << ' ';
	}
	else
	{
		FlagSpace.emplace(true);
	}

	return s;
}

template <typename T>
auto
ier::Base<T>::PrintBraces(ostream& s)
const
-> ostream&
{
	s << '{';

	if constexpr(is_floating_point_v<element_type>)
	{
		s << showpoint << setprecision(PRECISION);
	}

	return s << Value() << '}';
}

template <typename T>
auto
ier::Base<T>::Value(void)
const
{
	return p ? *p : element_type();
}

template <typename T>
decltype(auto)
ier::operator << (ostream& s, const Base<T> &x)
{
	return x.PrintBraces(s);
}

template <typename T>
decltype(auto)
ier::operator << (ostream& s, const unique_ptr<T> &p)
{
	return s << *p;
}
