#include <iostream>
#include <algorithm>

int main(void)
{
	const auto SIZE(10u);
	using std::vector;
	vector <unsigned> v(SIZE);
	auto count = unsigned();
	
	generate(v.begin(), v.end(), [=](void) mutable
	{
		return count++;
	});
	
	using std::cout;
	using std::endl;
	cout << "count: " << count << endl << "source: ";
	for_each(v.cbegin(), v.cend(), [](const unsigned &x)
	{
		cout << x << ' ';
	});
	cout << endl;
	return int();
}