#include <iomanip>
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::ostream;
using std::setprecision;

template <typename Type> class MyClass
{
	Type x;

public:
	MyClass(const Type &x): x(x)
	{}

	MyClass(const MyClass &s): MyClass(s.x)
	{}

	~MyClass(void)
	{}

	const Type& get(void) const
	{
		return x;
	}

	void print(void) const;
};

template <typename Type> void MyClass <Type> ::print(void) const
{
	cout << x << endl;
}

template <> class MyClass <double>
{
	double x;

public:
	MyClass(const double x): x(x)
	{}

	MyClass(const MyClass &s): MyClass(s.x)
	{}

	~MyClass(void)
	{}

	double get(void) const
	{
		return x;
	}

	void print(void) const;
};

void MyClass <double> ::print(void) const
{
	cout << setprecision(8) << x << endl;
}

template <typename Type> ostream& operator << (ostream &s,
	const MyClass <Type> &d)
{
	return s << d.get();
}

ostream& operator << (ostream &s, const MyClass <double> &d)
{
	return s << setprecision(8) << d.get();
}

int main(void)
{
	MyClass <char> c('a');
	c.print();
	cout << c << endl;

	MyClass <string> s("abcdef");
	s.print();
	cout << s << endl;

	MyClass <int> i(123);
	i.print();
	cout << i << endl;

	MyClass <float> f(1.23f);
	f.print();
	cout << f << endl;

	MyClass <double> d(3.1415926);
	d.print();
	cout << d << endl;
	return int();
}
