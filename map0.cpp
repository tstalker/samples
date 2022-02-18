#include <map>
#include <iostream>
#include <algorithm>

using std::map;
using std::cout;
using std::endl;
using std::pair;
using std::string;

void PrintEntry(const pair <string, int> &e)
{
	cout << e.first << ' ' << e.second << endl;
}

int main(void)
{
	map <string, int> PhoneBook
	{
		{ "Ivan", 11111 },
		{ "Petr", 22222 },
		{ "Vasily", 33333 },
		{ "Dmitry", 44444 },
		{ "Alexey", 55555 }
	};

	for(const auto &x: PhoneBook)
		cout << x.first << ' ' << PhoneBook[x.first] << endl;

	cout << endl;
	PhoneBook["Paramon"] = 66666;

	const pair <string, int> p { "Filaret", 77777 };
	PhoneBook.insert(p);
	PhoneBook.insert({"Filimon", 88888});
	PhoneBook.emplace("Akaky", 99999);

	for(const auto &x: PhoneBook)
		cout << x.first << ' ' << PhoneBook[x.first] << endl;

	cout << endl;
	for_each(PhoneBook.cbegin(), PhoneBook.cend(), PrintEntry);
	return int();
}
