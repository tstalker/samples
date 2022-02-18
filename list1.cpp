#include <iostream>
#include <algorithm>
#include <forward_list>

using std::cout;
using std::endl;
using std::string;
using std::forward_list;

struct Entry
{
	string Name;
	int Number;

	void Print(void) const
	{
		cout << Name << ' ' << Number << endl;
	}
};

void Print(const Entry &e)
{
	e.Print();
}

int main(void)
{
	const forward_list <Entry> PhoneBook
	{
		{ "Ivan", 11111 },
		{ "Petr", 22222 },
		{ "Vasily", 33333 },
		{ "Dmitry", 44444 },
		{ "Alexey", 55555 }
	};

	for(const auto &e: PhoneBook)
		e.Print();

	cout << endl;
	for(typename forward_list <Entry> ::const_iterator i(PhoneBook.cbegin());
		i != PhoneBook.cend(); i++)
		i->Print();

	cout << endl;
	for_each(PhoneBook.cbegin(), PhoneBook.cend(), Print);

	struct Abc
	{
		void operator () (const Entry &e) const
		{
			e.Print();
		}
	};

	cout << endl;
	for_each(PhoneBook.cbegin(), PhoneBook.cend(), Abc());

	cout << endl;
	for_each(PhoneBook.cbegin(), PhoneBook.cend(), [] (const Entry &e)
	{
		e.Print();
	});
	return int();
}
