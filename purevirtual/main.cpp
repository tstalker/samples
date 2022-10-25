#include <iostream>

struct Base
{
	Base(void)
	{
		std::cout << "Base::Base()" << std::endl;
	}

	virtual ~Base(void) = 0;

	virtual int f(void) const = 0;
};

Base::~Base(void)
{
	std::cout << "Base::~Base()" << std::endl;
}

int Base::f(void) const
{
	return 1;
}

struct Derived final: Base
{
	Derived(void)
	{
		std::cout << "Derived::Derived()" << std::endl;
	}

	~Derived(void)
	{
		std::cout << "Derived::~Derived()" << std::endl;
	}

	int f(void) const override
	{
		return 2;
	}
};

int main(void)
{
	const Derived d;
	const Base* pb(&d);
	std::cout << pb->f();
	std::cout << pb->Base::f() << std::endl;

	const Base& rb(d);
	std::cout << rb.f();
	std::cout << rb.Base::f() << std::endl;

	std::cout << d.f();
	std::cout << d.Base::f() << std::endl;
	return EXIT_SUCCESS;
}
