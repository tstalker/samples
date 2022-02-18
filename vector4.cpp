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

	Entry(const Entry &e): Entry(e.Name, e.Number)
	{}

	~Entry(void)
	{}

	bool operator < (const Entry &e) const
	{
		return Name == e.Name ? Number < e.Number : Name < e.Name;
	}

	void Print(void) const
	{
		cout << Name << ' ' << Number << endl;
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

	{
		const Entry e("Ivan", 23456);
		PhoneBook.push_back(e);
	}
	{
		const Entry &e{"Petr", 12345};
		PhoneBook.push_back(e);
	}
	{
		Entry &&e{"Vasily", 12345};
		PhoneBook.push_back(e);
	}
	PhoneBook.push_back(Entry("Dmitry", 12345));
	PhoneBook.push_back({"Alexey", 12345});
	PhoneBook.emplace_back("Alexander", 34567);
	PhoneBook.emplace(PhoneBook.end(), "Alexander", 23456);
	PhoneBook.insert(PhoneBook.end(), {"Alexander", 12345});

	cout << "Source phone book:" << endl;
	for_each(PhoneBook.cbegin(), PhoneBook.cend(), mem_fn(&Entry::Print));

	cout << endl << "Sorted phone book:" << endl;
	sort(PhoneBook.begin(), PhoneBook.end());
	for_each(PhoneBook.cbegin(), PhoneBook.cend(), mem_fn(&Entry::Print));
	return int();
}
