#pragma once

#include <iostream>

namespace gen
{
	class abc;

	std::ostream& operator << (std::ostream&, const abc&);
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

	char& operator[] (const std::size_t&);
	const char& operator[] (const std::size_t&) const;

	std::size_t size(void) const
	{
		return n;
	}

	void print(void) const;

private:
	std::size_t n{};
	char* s{nullptr};

	friend std::ostream& operator << (std::ostream&, const abc&);
};
