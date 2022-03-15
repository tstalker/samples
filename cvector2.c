#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef const int cint;
typedef const size_t cszt;
typedef const char* cpchr;
typedef const void* cpvd;

struct sEntry
{
	cpchr Name;
	cint Number;
};

typedef struct sEntry Entry;
typedef Entry* pEntry;
typedef const Entry* cpEntry;

void PrintEntry(cpEntry e)
{
	printf("%s %d\n", e->Name, e->Number);
}

void PrintBook(cpchr Title, cpEntry Book, cszt Max)
{
	printf("%s phone book:\n", Title);
	for(size_t i = 0; i < Max; i++)
		PrintEntry(Book + i);
}

int Cmp(cpvd a, cpvd b)
{
	return strcmp(((cpEntry)a)->Name, ((cpEntry)b)->Name);
}

void SortBook(pEntry Book, cszt Max)
{
	qsort(Book, Max, sizeof(Entry), Cmp);
}

int main(void)
{
	Entry PhoneBook[] =
	{
		{ "Ivan", 12345 },
		{ "Petr", 23456 },
		{ "Vasily", 34567 },
		{ "Dmitry", 45678 },
		{ "Alexey", 56789 }
	};

	cszt MAX = sizeof PhoneBook / sizeof PhoneBook[0];

	PrintBook("Original", PhoneBook, MAX);
	SortBook(PhoneBook, MAX);
	putchar('\n');
	PrintBook("Sorted", PhoneBook, MAX);
	return 0;
}
