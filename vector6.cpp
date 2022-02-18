#include <array>
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

int main(void)
{
	const size_t MAX(10);
	using type = char;

	type a[MAX], n('a');
	std::generate(std::begin(a), std::end(a), [&n] { return n++; });
	std::copy(std::begin(a), std::end(a), std::ostream_iterator <type> (std::cout, " "));
	std::cout << std::endl;

	std::array <type, MAX> b;
	std::generate(std::begin(b), std::end(b), [&n] { return n++; });
	std::copy(std::begin(b), std::end(b), std::ostream_iterator <type> (std::cout, " "));
	std::cout << std::endl;

	std::vector <type> v(MAX);
	std::generate(std::begin(v), std::end(v), [&n] { return n++; });
	std::copy(std::begin(v), std::end(v), std::ostream_iterator <type> (std::cout, " "));
	std::cout << std::endl;
}
