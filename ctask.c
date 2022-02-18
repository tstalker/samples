#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
	pid_t pid = fork();
	if(pid)
		puts("parent");
	else
		puts("daugter");
}
