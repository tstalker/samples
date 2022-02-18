#include <vector>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <iterator>
#include <algorithm>

class abc
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

private:
	size_t n{};
	char* s{nullptr};

	friend std::ostream& operator << (std::ostream&, const abc&);
};

class def
{
public:
private:
	size_t n{};
	int* p{nullptr};
};

int main(void)
{
	std::vector <abc> v;
	v.push_back("abcde");
	v.push_back("fghij");
	v.push_back("klmno");
	v.push_back("pqrst");
	v.push_back("uvwxy");

	for(const auto& r: v)
	{
		std::cout << r << std::endl;
	}

	return EXIT_SUCCESS;
}

std::ostream& operator << (std::ostream& os, const abc& x)
{
	if(x.n)
	{
		std::copy_n(x.s, x.n, std::ostream_iterator <std::remove_pointer_t<decltype(abc::s)>> (os));
	}
	return os;
}

abc::abc(const char* s):
	n(s ? strlen(s) : 0),
	s(n ? new char[n] : nullptr)
{
	if(n)
	{
		std::copy_n(s, n, abc::s);
	}
}

abc::abc(const abc& x):
	n(this != &x ? x.n : 0),
	s(n ? new char[n] : nullptr)
{
	if(n)
	{
		std::copy_n(x.s, n, s);
	}
}
