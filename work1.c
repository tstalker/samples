#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char c;
	int i;
	float f;
}
abc;

void Print(const abc*);
long SquareInt(const abc*);
double SquareFloat(const abc*);
void Init(abc*, const char, const int, const float);

int main(void)
{
	abc* p = malloc(sizeof(abc));
	Init(p, 'a', 42, 3.14f);
	Print(p);
	printf("Square Int: %ld\n", SquareInt(p));
	printf("Square Float: %.2lf\n", SquareFloat(p));
	free(p);
	p = NULL;
	return EXIT_SUCCESS;
}

void Init(abc* p, const char c, const int i, const float f)
{
	p->c = c;
	p->i = i;
	p->f = f;
}

void Print(const abc* p)
{
	printf("{ %c, %d, %.2f }\n", p->c, p->i, p->f);
}

long SquareInt(const abc* p)
{
	return pow(p->i, 2);
}

double SquareFloat(const abc* p)
{
	return pow(p->f, 2);
}
