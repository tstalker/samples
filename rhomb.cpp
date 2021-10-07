#include <cstdlib>
#include <iostream>

class A
{
public:
	A(const int i): i(i)
	{
		std::cout << "A::A(" << i << ')' << std::endl;
	}

	virtual ~A(void)
	{}

	virtual void print(void) const = 0;

protected:
	int i;
};

class B: virtual public A
{
public:
	B(const int i): A(i)
	{
		std::cout << "B::B(" << i << ')' << std::endl;
	}

	void print(void) const override
	{
		std::cout << "B::print(): " << i << std::endl;
	}
};

class C: virtual public A
{
public:
	C(const int i): A(i)
	{
		std::cout << "C::C(" << i << ')' << std::endl;
	}

	void print(void) const override
	{
		std::cout << "C::print(): " << i << std::endl;
	}
};

class D: public B, public C
{
public:
	D(const int i): A(i), B(i), C(i)
	{
		std::cout << "D::D(" << i << ')' << std::endl;
	}

	void print(void) const override final
	{
		std::cout << "D::print(): " << i << std::endl;
	}
};

int main(void)
{
	const A* pa(new D(12345));
	pa->print();
	delete pa;
	return EXIT_SUCCESS;
}
