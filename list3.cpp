#include <map>
#include <list>
#include <iostream>
#include <algorithm>

using std::map;
using std::cout;
using std::endl;
using std::list;
using std::pair;
using std::string;

void PrintEntry(const pair <string, int> &e)
{
	cout << e.first << ' ' << e.second << endl;
}

int main(void)
{
	const list <pair <string, int>> PhoneBookList
	{
		{ "Ivan", 11111 },
		{ "Petr", 22222 },
		{ "Vasily", 33333 },
		{ "Dmitry", 44444 },
		{ "Alexey", 55555 }
	};

	cout << "PhoneBookList:" << endl;
	for_each(PhoneBookList.cbegin(), PhoneBookList.cend(), PrintEntry);

	map <string, int> PhoneBookMap;
	copy(PhoneBookList.cbegin(), PhoneBookList.cend(),
		inserter(PhoneBookMap, PhoneBookMap.begin()));
	cout << endl << "PhoneBookMap:" << endl;
	for_each(PhoneBookMap.cbegin(), PhoneBookMap.cend(), PrintEntry);

	PhoneBookMap.clear();
	for(typename list <pair <string, int>>::const_iterator
		i(PhoneBookList.cbegin()); i != PhoneBookList.cend(); i++)
		PhoneBookMap.insert(*i);
	cout << endl << "PhoneBookMap:" << endl;
	for_each(PhoneBookMap.cbegin(), PhoneBookMap.cend(), PrintEntry);
	return int();
}
