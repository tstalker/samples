#include "generic.h"

#include <stdlib.h>

int main(void)
{
	const entry book[] =
	{
		{"Vasily", 11111, printelem},
		{"Petr", 22222, printelem},
		{"Ivan", 33333, printelem},
		{"Dmitry", 44444, printelem},
		{"Alexey", 55555, printelem}
	};
	const size_t size = sizeof book / sizeof *book;
	print(book, size);
	return EXIT_SUCCESS;
}
