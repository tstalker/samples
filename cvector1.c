#include <stdio.h>

typedef const int cint;
typedef const size_t cszt;
typedef const char* cpchr;
typedef struct sEntry Entry;
typedef const Entry cEntry;
typedef cEntry* cpEntry;
typedef void (*pf)(cpEntry);

struct sEntry
{
	cpchr Name;
	cint Number;
	pf Print;
};

void PrintEntry(cpEntry e)
{
	printf("%s %d\n", e->Name, e->Number);
}

int main(void)
{
	cEntry PhoneBook[] =
	{
		{ "Ivan", 12345, PrintEntry },
		{ "Petr", 23456, PrintEntry },
		{ "Vasily", 34567, PrintEntry },
		{ "Dmitry", 45678, PrintEntry },
		{ "Alexey", 56789, PrintEntry }
	};

	cszt MAX = sizeof PhoneBook / sizeof PhoneBook[0];

	for(size_t i = 0; i < MAX; i++)
		PhoneBook[i].Print(PhoneBook + i);

	return 0;
}
