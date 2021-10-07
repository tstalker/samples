#include <cstdlib>
#include <iostream>

class abc
{
public:
	abc(void);
	explicit abc(const int);
	abc(const abc&);
	~abc(void);
	const abc& operator = (const abc&);

private:
	int* p;

	friend std::ostream& operator << (std::ostream&, const abc&);
};

int main(void)
{
	const abc x(42);
	std::cout << "x: " << x << std::endl;
	abc y;
	std::cout << "y: " << y << std::endl;
	y = x;
	std::cout << "y: " << y << std::endl;
	return EXIT_SUCCESS;
}

abc::abc(void): p(nullptr)
{
	std::cout << "abc::abc(): " << *this << std::endl;
}

abc::abc(const int i): p(new int(i))
{
	std::cout << "abc::abc(" << i << "): " << *this << std::endl;
}

abc::abc(const abc& x): p(x.p ? new int(*x.p) : nullptr)
{
	std::cout << "abc::abc(" << x << "): " << *this << std::endl;
}

abc::~abc(void)
{
	std::cout << "abc::~abc(): " << *this << std::endl;
	delete p;
}

const abc& abc::operator = (const abc& x)
{
	std::cout << "abc::operator = (" << x << "): " << *this << " -> ";
	delete p;
	p = x.p ? new int(*x.p) : nullptr;
	std::cout << *this << std::endl;
	return *this;
}

std::ostream& operator << (std::ostream& o, const abc& x)
{
	std::cout << "[";
	if(x.p)
		o << *x.p;
	else
		o << "<nullptr>";
	std::cout << "]";
	return o;
}
