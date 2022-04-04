#include <stdio.h>
#include <stdlib.h>

int main(void)
{
__label__ err;
	void nested(const int x)
	{
		if(!x)
		{
			putchar('\n');
			goto err;
		}

		printf("%d ", x);
	}

	for(int i = 9; i >= 0; i--)
	{
		nested(i);
	}

	puts("Success");
	return EXIT_SUCCESS;

err:
	fputs("Error\n", stderr);
	return EXIT_FAILURE;
}
