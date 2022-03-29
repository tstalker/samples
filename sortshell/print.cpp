#include "header.hpp"

#include <iostream>
#include <iterator>

void gen::print(const string_view s, const vector<int> &v)
{
	cout << s << ": ";
	auto it(ostream_iterator<remove_reference_t<decltype(v)>::value_type>(cout, " "));
	copy(v.cbegin(), v.cend(), it);
	cout << endl;
}
