#include "abc.hpp"
#include "def.hpp"

#include <vector>

int main(void)
{
	std::vector <ghi*> v;
	v.push_back(new abc("abcde"));
	v.push_back(new abc("fghij"));
	v.push_back(new abc("klmno"));
	v.push_back(new abc("pqrst"));
	v.push_back(new abc("uvwxy"));

	for(const auto& p: v)
	{
		p->print();
		delete p;
	}

	std::vector <ghi*> w;
	const int i1[] { 1 };
	const int i2[] { 1, 2 };
	const int i3[] { 1, 2, 3 };
	const int i4[] { 1, 2, 3, 4 };
	const int i5[] { 1, 2, 3, 4, 5 };
	w.push_back(new def(i1, sizeof i1 / sizeof *i1));
	w.push_back(new def(i2, sizeof i2 / sizeof *i2));
	w.push_back(new def(i3, sizeof i3 / sizeof *i3));
	w.push_back(new def(i4, sizeof i4 / sizeof *i4));
	w.push_back(new def(i5, sizeof i5 / sizeof *i5));

	for(const auto& p: w)
	{
		p->print();
		delete p;
	}

	return EXIT_SUCCESS;
}
