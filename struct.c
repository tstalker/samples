#include <stdio.h>

typedef struct
{
	long l;
	char c[10];
} t1;

typedef struct
{
	char c1[10];
	char c2[10];
} t2;

typedef struct
{
	char c;
	short s;
} t3;

void print1(const t1 *p)
{
	puts("t1:");
	printf("%ld\n", p->l);
	puts(p->c);
}

void print2(const t2 *p)
{
	puts("t2:");
	puts(p->c1);
	puts(p->c2);
}

int main(void)
{
	printf("sizeof long: %zd\n", sizeof(long));
	printf("sizeof t1: %zd\n", sizeof(t1));
	printf("sizeof t2: %zd\n", sizeof(t2));
	printf("sizeof t3: %zd\n", sizeof(t3));

	const t1 z1 = { 1234567890123456789l, "abcdefghi" };
	const t2 z2 = { "abcdefghij", "klmnopqrst" };

	putchar('\n');
	print1(&z1);
	putchar('\n');
	print2(&z2);
	putchar('\n');
	print1((t1*)&z2);
}
