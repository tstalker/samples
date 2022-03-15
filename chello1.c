#include <stdio.h>

const char* hello(void);

int main(void)
{
	puts(hello());
}

const char* hello(void)
{
	return "Hello, world";
}
