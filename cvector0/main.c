#include "generic.h"

#include <stdlib.h>

int main(void)
{
	const entry book[] =
	{
		{"Vasily", 11111},
		{"Petr", 22222},
		{"Ivan", 33333},
		{"Dmitry", 44444},
		{"Alexey", 55555}
	};

	const size_t size = sizeof book / sizeof *book;
	print(book, size);
	return EXIT_SUCCESS;
}
