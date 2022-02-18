#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

const auto MAX(99u);
const auto SIZE(10u);

int main(void)
{
	vector <float> Data;
	fstream fs;
	fs.exceptions(ios_base::badbit | ios_base::eofbit | ios_base::failbit);

	try
	{
		fs.open("data.txt", ios::in | ios::out);
		auto x = float();
		fs >> x;
		cout << x << endl;
		fs << 7.77;
	}
	catch(ios_base::failure)
	{
		cerr << "(): ios_base::failure exception" << endl;
		if(fs.eof()) cerr << "eof" << endl;
		for(auto &x : Data)
			cerr << x << ' ';
		cerr << endl;
	}
	catch(...)
	{
		cerr << "(): Unknown exception" << endl;
	}
}
