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

	bool operator < (const Entry &s) const
	{
		return Name < s.Name;
	}
};

int main(void)
{
	vector <Entry> PhoneBook
	{
		{ "Ivan", 12345 },
		{ "Petr", 23456 },
		{ "Vasily", 34567 },
		{ "Dmitry", 45678 },
		{ "Alexey", 56789 }
	};

	cout << "Source phone book:" << endl;
	for_each(PhoneBook.cbegin(), PhoneBook.cend(), mem_fn(&Entry::Print));

	sort(PhoneBook.begin(), PhoneBook.end());
	cout << endl << "Sorted phone book:" << endl;
	for_each(PhoneBook.cbegin(), PhoneBook.cend(), mem_fn(&Entry::Print));
	return int();
}
