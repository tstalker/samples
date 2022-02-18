#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;
using std::mem_fn;
using std::string;
using std::vector;

class Entry
{
	string Name;
	int Number;

public:
	Entry(const string &Name, int Number): Name(Name), Number(Number)
	{}

	Entry(const Entry &s): Entry(s.Name, s.Number)
	{}

	~Entry(void)
	{}

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
	const vector <Entry> PhoneBook
	{
		{ "Ivan", 12345 },
		{ "Petr", 23456 },
		{ "Vasily", 34567 },
		{ "Dmitry", 45678 },
		{ "Alexey", 56789 }
	};

	cout << "Phone book v1:" << endl;
	for(auto i = size_t(); i < PhoneBook.size(); i++)
		PhoneBook[i].Print();

	cout << endl << "Phone book v2:" << endl;
	for(typename vector <Entry> ::const_iterator e(PhoneBook.cbegin());
		e != PhoneBook.cend(); e++)
		e->Print();

	cout << endl << "Phone book v3:" << endl;
	for(const auto &e: PhoneBook)
		e.Print();

	cout << endl << "Phone book v4:" << endl;
	for_each(PhoneBook.cbegin(), PhoneBook.cend(), PrintEntry);

	cout << endl << "Phone book v5:" << endl;
	for_each(PhoneBook.cbegin(), PhoneBook.cend(), mem_fn(&Entry::Print));

	struct Abc
	{
		void operator () (const Entry &e) const
		{
			e.Print();
		}
	};

	cout << endl << "Phone book v6:" << endl;
	for_each(PhoneBook.cbegin(), PhoneBook.cend(), Abc());

	cout << endl << "Phone book v7:" << endl;
	for_each(PhoneBook.cbegin(), PhoneBook.cend(), [](const Entry &e)
	{
		e.Print();
	});

	return int();
}
