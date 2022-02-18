#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>

class abc
{
public:
	abc(const char c, const int i, const float f): c(c), i(i), f(f)
	{}

	~abc(void)
	{}

	void Print(void) const;
	long SquareInt(void) const;
	double SquareFloat(void) const;

private:
	char c;

public:
	char GetChar(void) const
	{
		return c;
	}

private:
	int i;

public:
	int GetInt(void) const
	{
		return i;
	}

private:
	float f;

public:
	float GetFloat(void) const
	{
		return f;
	}
};

void Print(const abc*);
long SquareInt(const abc*);
double SquareFloat(const abc*);

int main(void)
{
	auto p(new abc('a', 42, 12.34));
	Print(p);
	std::cout << "Square Int: " << SquareInt(p) << std::endl;
	std::cout << "Square Float: " << std::setprecision(5) << SquareFloat(p) << std::endl;

	p->Print();
	std::cout << "Square Int: " << p->SquareInt() << std::endl;
	std::cout << "Square Float: " << std::setprecision(5) << p->SquareFloat() << std::endl;
	delete p;
	p = nullptr;
	return EXIT_SUCCESS;
}

long SquareInt(const abc* p)
{
	return pow(p->GetInt(), 2);
}

long abc::SquareInt(void) const
{
	return pow(i, 2);
}

double SquareFloat(const abc* p)
{
	return pow(p->GetFloat(), 2);
}

double abc::SquareFloat(void) const
{
	return pow(f, 2);
}

void Print(const abc* p)
{
	std::cout << "{ " << p->GetChar() << ", " << p->GetInt() << ", " << std::setprecision(4) << p->GetFloat() << " }" << std::endl;
}

void abc::Print(void) const
{
	std::cout << "{ " << c << ", " << i << ", " << std::setprecision(4) << f << " }" << std::endl;
}
