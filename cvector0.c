#include <stdio.h>

typedef const int cint;
typedef const size_t cszt;
typedef const char* cpchr;

struct sEntry
{
	cpchr Name;
	cint Number;
};

typedef struct sEntry Entry;
typedef const Entry cEntry;
typedef cEntry* cpEntry;

void PrintEntry(cpEntry e)
{
	printf("%s %d\n", e->Name, e->Number);
}

int main(void)
{
	cEntry PhoneBook[] =
	{
		{ "Ivan", 12345 },
		{ "Petr", 23456 },
		{ "Vasily", 34567 },
		{ "Dmitry", 45678 },
		{ "Alexey", 56789 }
	};

	cszt MAX = sizeof PhoneBook / sizeof PhoneBook[0];

	for(size_t i = 0; i < MAX; i++)
		PrintEntry(PhoneBook + i);

	return 0;
}
