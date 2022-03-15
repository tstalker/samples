#include <stdio.h>

int main(void)
{
	__label__ out;

	void nested(const int x)
	{
		if(!x)
			goto out;

		printf("%d\n", x);
	}

	for(int i = 9; i >= 0; i--)
		nested(i);

	puts("Ok");
	return 0;

out:
	fputs("Error: NULL\n", stderr);
}
