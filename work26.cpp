#include <ctime>
#include <cstdlib>
#include <iostream>

void print(const int*, const size_t);

int main(void)
{
	const size_t MAX(10);
	int z[MAX];

	srand(time(nullptr));

	for(size_t i{}; i < MAX; i++)
	{
		z[i] = rand() % 100;
	}

	print(z, MAX);

	for(size_t i{}; i < MAX; i++)
	{
		for(size_t j{}; j < MAX; j++)
		{
			if(z[i] < z[j])
			{
				const auto t(z[i]);
				z[i] = z[j];
				z[j] = t;
			}
		}
	}

	print(z, MAX);
	return EXIT_SUCCESS;
}

void print(const int* x, const size_t n)
{
	for(size_t i{}; i < n; i++)
	{
		std::cout << x[i] << ' ';
	}
	std::cout << std::endl;
}
