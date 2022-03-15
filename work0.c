#include <stdio.h>
#include <stdlib.h>

extern const int x;

int main(void)
{
	printf("%d", x);
	const int x = 1;
	{
		printf(" %d", x);
		const int x = 2;
		{
			printf(" %d", x);
			const int x = 3;
			{
				printf(" %d", x);
				const int x = 4;
				{
					printf(" %d", x);
					const int x = 5;
					{
						printf(" %d", x);
						const int x = 6;
						{
							printf(" %d", x);
							const int x = 7;
							{
								printf(" %d", x);
								const int x = 8;
								{
									printf(" %d", x);
									const int x = 9;
									printf(" %d", x);
								}
								printf(" %d", x);
							}
							printf(" %d", x);
						}
						printf(" %d", x);
					}
					printf(" %d", x);
				}
				printf(" %d", x);
			}
			printf(" %d", x);
		}
		printf(" %d", x);
	}
	printf(" %d\n", x);
	return EXIT_SUCCESS;
}

const int x;
