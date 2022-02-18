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

bool Even(const pair <string, int> &e)
{
	return e.second % 2;
}

int main(void)
{
	map <string, int> PhoneBook
	{
		{ "Ivan", 1 },
		{ "Petr", 2 },
		{ "Vasily", 3 },
		{ "Dmitry", 4 },
		{ "Alexey", 5 },
		{ "Alexandr", 6 },
		{ "Mikhail", 7 }
	};

	cout << "Source list:" << endl;
	for_each(PhoneBook.cbegin(), PhoneBook.cend(), PrintEntry);

	cout << endl << "Odd list:" << endl;
	for(typename map <string, int> ::iterator
		i(find_if(PhoneBook.begin(), PhoneBook.end(), Even));
		i != PhoneBook.cend(); i = find_if(++i, PhoneBook.end(), Even))
		PrintEntry(*i);

	cout << "Total odd: "
		<< count_if(PhoneBook.cbegin(), PhoneBook.cend(), Even) << endl
		<< endl << "Even list:" << endl;

	for(typename map <string, int> ::iterator
		i(find_if_not(PhoneBook.begin(), PhoneBook.end(), Even));
		i != PhoneBook.cend(); i = find_if_not(++i, PhoneBook.end(), Even))
		PrintEntry(*i);

	cout << "Total even: " << PhoneBook.size()
		- count_if(PhoneBook.cbegin(), PhoneBook.cend(), Even) << endl;
	return int();
}
