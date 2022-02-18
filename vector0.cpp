#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;
using std::mem_fn;
using std::string;
using std::for_each;

struct Entry
{
	string Name;
	int Number;

	void Print(void) const
	{
		cout << Name << ' ' << Number << endl;
	}
};

void PrintEntry(const Entry &e)
{
	e.Print();
}

int main(void)
{
	const Entry PhoneBook[]
	{
		{ "Ivan", 12345 },
		{ "Petr", 23456 },
		{ "Vasily", 34567 },
		{ "Dmitry", 45678 },
		{ "Alexey", 56789 }
	};

	const auto MAX(sizeof PhoneBook / sizeof PhoneBook[0]);

	cout << "Phone book v.1:" << endl;
	for(auto i = size_t(); i < MAX; i++)
		PhoneBook[i].Print();

	cout << endl << "Phone book v.2:" << endl;
	for(const auto &e: PhoneBook)
		e.Print();

	cout << endl << "Phone book v.3:" << endl;
	for_each(PhoneBook, PhoneBook + MAX, PrintEntry);

	cout << endl << "Phone book v.4:" << endl;
	for_each(PhoneBook, PhoneBook + MAX, mem_fn(&Entry::Print));
	return int();
}
