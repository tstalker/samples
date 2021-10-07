#include <map>
#include <iostream>
#include <algorithm>

using std::map;
using std::cout;
using std::endl;
using std::pair;
using std::string;
using std::vector;

void PrintHobby(const string &h)
{
	cout << ' ' << h;
}

void PrintEntry(const pair <string, vector <string>> &e)
{
	cout << e.first << ':';
	for_each(e.second.cbegin(), e.second.cend(), PrintHobby);
	cout << endl;
}

int main(void)
{
	map <string, vector <string>> Hobby;

	Hobby["Ivan"].push_back("Udochka");
	Hobby["Petr"].push_back("Drobovik");
	Hobby["Vasiliy"].push_back("Pivo");
	Hobby["Mikhail"].push_back("AC/DC");

	Hobby["Ivan"].push_back("Spinning");
	Hobby["Petr"].push_back("Patrontash");
	Hobby["Vasiliy"].push_back("Vino");
	Hobby["Mikhail"].push_back("Metallica");

	Hobby["Ivan"].push_back("Donka");
	Hobby["Petr"].push_back("Poroh");
	Hobby["Vasiliy"].push_back("Vodka");
	Hobby["Mikhail"].push_back("Sepultura");

	for_each(Hobby.cbegin(), Hobby.cend(), PrintEntry);
	return int();
}
