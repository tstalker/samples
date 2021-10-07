#include <cstdlib>
#include <iostream>

class Heralt
{
public:
	Heralt(void);
	explicit Heralt(const int);
	explicit Heralt(const Heralt&);
	~Heralt(void);
	Heralt& operator = (const Heralt&);
	void Print(void) const;

private:
	int* p;
};

int main(void)
{
	std::cout << "main() start" << std::endl;
	const Heralt x(5);
	std::cout << "x: ";
	x.Print();
	std::cout << std::endl;
	Heralt y;
	std::cout << "y: ";
	y.Print();
	std::cout << std::endl;
	y = x;
	std::cout << "y: ";
	y.Print();
	std::cout << std::endl;
	std::cout << "main() finish" << std::endl;
	return EXIT_SUCCESS;
}

Heralt::Heralt(void): p(nullptr)
{
	std::cout << "Heralt::Heralt(): ";
	Print();
	std::cout << std::endl;
}

Heralt::Heralt(const int i): p(new int(i))
{
	std::cout << "Heralt::Heralt(" << i << "): ";
	Print();
	std::cout << std::endl;
}

Heralt::Heralt(const Heralt& h): p(h.p ? new int(*h.p) : nullptr)
{
	std::cout << "Heralt::Heralt([";
	h.Print();
	std::cout << "]): ";
	Print();
	std::cout << std::endl;
}

Heralt::~Heralt(void)
{
	std::cout << "Heralt::~Heralt(): ";
	Print();
	std::cout << std::endl;
	delete p;
}

Heralt& Heralt::operator = (const Heralt& h)
{
	std::cout << "Heralt::Heralt([";
	h.Print();
	std::cout << "]): ";
	Print();
	delete p;
	p = h.p ? new int(*h.p) : nullptr;
	std::cout << " -> ";
	Print();
	std::cout << std::endl;
	return *this;
}

void Heralt::Print(void) const
{
	if(p)
		std::cout << *p;
	else
		std::cout << "<nullptr>";
}
