#include <new>
#include <iostream>
#include <string_view>

class A
{
public:
	A(void)
	{
		debug("A");
	}

	~A(void)
	{
		debug("~A");
	}

	void debug(std::string_view s) const
	{
		std::cout << "A::" << s << "()\t[" << this << ']' << std::endl;
	}

private:
	int data[100] {};
};

int main(void)
{
try
{
	auto p1(new A);
	auto p2(new (std::nothrow) A);
	auto p3(static_cast <A*> (operator new(sizeof(A))));
	new (p3) A;

	delete p3;
	delete p2;
	delete p1;
}
catch(const std::bad_alloc& e)
{
	std::cerr << "Error: " << e.what() << std::endl;
}
catch(...)
{
	std::cerr << "Error: Unknown exception" << std::endl;
}
}
