#include <cstdarg>
#include <iostream>

void print(int n, ...)
{
	using namespace std;
	va_list v;
	va_start(v, n);

	for(auto i = int(); i < n; i++)
	{
		int x(va_arg(v, decltype(x)));
		cout << x << ' ';
	}

	va_end(v);
	cout << endl;
}

int main(void)
{
	print(5, 1, 2, 3, 4, 5);
}
