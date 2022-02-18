#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main(void)
{
	string s;
	s += 'a';
	s += 'b';
	s += 'c';
	s += 'd';
	cout << "s value: " << s << endl << "s size: " << s.size() << endl;

	string t("abcd");
	cout << "t value: " << t << endl << "t size: " << t.size() << endl;
	return int();
}
