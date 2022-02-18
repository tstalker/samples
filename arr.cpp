#include <iostream>
#include <iterator>
#include <algorithm>

int main(void)
{
	using namespace std;
	size_t v[10]{};

	generate(begin(v), end(v), []
	{
		static size_t n{};
		return n++;
	});

	copy(begin(v), end(v), ostream_iterator<size_t>(cout, " "));
	cout << endl;

	reverse(begin(v), end(v));
	copy(begin(v), end(v), ostream_iterator<size_t>(cout, " "));
	cout << endl;

	sort(begin(v), end(v));
	copy(begin(v), end(v), ostream_iterator<size_t>(cout, " "));
	cout << endl;
}
