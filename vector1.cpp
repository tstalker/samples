#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

using cpvd = const void*;
using crstr = const string&;

class Entry
{
	string Name;
	int Number;

public:
	Entry(crstr Name, int Number): Name(Name), Number(Number)
	{}

	Entry(const Entry &s): Entry(s.Name, s.Number)
	{}

	~Entry(void)
	{}

	void Print(void) const
	{
		cout << Name << ' ' << Number << endl;
	}

	crstr GetName(void) const
	{
		return Name;
	}

	int GetNumber(void) const
	{
		return Number;
	}
};

using cpEntry = const Entry*;

int Cmp(cpvd a, cpvd b)
{
	return static_cast <cpEntry> (a)->GetName()
		> static_cast <cpEntry> (b)->GetName();
}

int main(void)
{
	Entry PhoneBook[]
	{
		{ "Ivan", 12345 },
		{ "Petr", 23456 },
		{ "Vasily", 34567 },
		{ "Dmitry", 45678 },
		{ "Alexey", 56789 }
	};

	const auto MAX(sizeof PhoneBook / sizeof PhoneBook[0]);

	cout << "Source phone book:" << endl;
	for(const auto &e: PhoneBook)
		e.Print();

	qsort(PhoneBook, MAX, sizeof(Entry), Cmp);

	cout << endl << "Sorted phone book:" << endl;
	for(const auto &e: PhoneBook)
		e.Print();

	return int();
}
