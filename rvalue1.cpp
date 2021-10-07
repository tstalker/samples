#include <iostream>

using std::cout;
using std::endl;
using std::string;

template <typename T> class X
{
	T *z{nullptr};

public:
	X(const T &s): z(new T(s))
	{
		cout << "X::X(const T&)";
		if(z) cout << ": " << *z;
		cout << endl;
	}

	X(const X &s)
	{
		cout << "X::X(const X&)";
		if(this == &s)
		{
			if(s) cout << ": " << *s.z;
			cout << ": Initialization itself";
		}
		else
		{
			if(s) z = new T(*s.z);
			if(z) cout << ": " << *z;
		}
		cout << endl;
	}

	X(X &&s)
	{
		cout << "X::X(X&&)";
		if(this == &s)
		{
			if(s) cout << ": " << *s.z;
			cout << ": Initialization itself";
		}
		else
		{
			z = s.z;
			s.z = nullptr;
			if(z) cout << ": " << *z;
		}
		cout << endl;
	}

	~X(void)
	{
		cout << "X::~X()";
		if(z)
		{
			cout << ": " << *z;
			delete z;
			z = nullptr;
		}
		cout << endl;
	}

	X& operator=(const X &s)
	{
		cout << "X::operator=(const X&)";
		if(this == &s)
		{
			if(z) cout << ": " << *z;
			cout << ": Assign itself";
		}
		else
		{
			if(z)
			{
				cout << ": " << *z;
				delete z;
				z = nullptr;
			}
			if(s) z = new T(*s.z);
			cout << " ->";
			if(z) cout << ' ' << *z;
		}
		cout << endl;
		return *this;
	}

	X& operator=(X &&s)
	{
		cout << "X::operator=(X&&)";
		if(this == &s)
		{
			if(z) cout << ": " << *z;
			cout << ": Assign itself";
		}
		else
		{
			if(z)
			{
				cout << ": " << *z;
				delete z;
			}
			z = s.z;
			s.z = nullptr;
			cout << " ->";
			if(z) cout << ' ' << *z;
		}
		cout << endl;
		return *this;
	}

	operator bool(void) const
	{
		return z;
	}

	T& get(void)
	{
		return *z;
	}
	
	const T& get(void) const
	{
		return *z;
	}
};

template <typename T> X <T> f(const X <T> &s)
{
	cout << "f(const X<T>&)";
	if(s) cout << ": " << s.get();
	cout << endl;
	return s; // new object!
}

int main(void)
{
	X <string> a("abcde");
	if(a) cout << "a: " << a.get() << endl;
//	X <string> &b(a);
//	if(b) cout << "b: " << b.get() << endl;
//	X <string> &&c(f(a));
//	if(c) cout << "c: " << c.get() << endl;
//	X <string> d(move(b));
//	if(c) cout << "d: " << d.get() << endl;
//	a = a;
	return int();
}
