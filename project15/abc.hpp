#pragma once

#include <iostream>

namespace gen
{
	using namespace std;
	class abc;

	ostream& operator << (ostream&, const abc&);
}

using gen::operator <<;

class gen::abc
{
public:
	abc(void)
	{}

	abc(const char*);
	abc(const abc&);

	~abc(void)
	{
		delete[] s;
	}

	char& operator[] (const size_t&);
	const char& operator[] (const size_t&) const;

	size_t size(void) const
	{
		return n;
	}

	void print(void) const;

private:
	size_t n{};
	char* s{nullptr};

	friend ostream& operator << (ostream&, const abc&);
};
