#include "Decode.hpp"

#include <fstream>
#include <iomanip>
#include <iostream>
#include <algorithm>

void Decode::Parse(string_view ifname, string_view ofname)
{
	ifstream ifs(ifname.data());
	if(!ifs)
	{
		cerr << "Error: can't open file \"" << ifname << '\"' << endl;
		return;
	}

	ofstream ofs(ofname.data(), ios::binary);
	if(!ofs)
	{
		cerr << "Error: can't create file \"" << ofname << '\"' << endl;
		return;
	}

	for(size_t n; ifs >> hex >> n;)
	{
		if(static auto first(true); first)
			first = false;
		else
		{
			cout << ' ';
			ofs << ' ';
		}

		for(; n; n -= min(n, MAXSIZE))
		{
			unsigned m;
			if(!(ifs >> hex >> m))
			{
				cerr << "Error: wrong format file \"" << ifname << '\"' << endl;
				return;
			}
			const auto w(GetWord(m));
			ofs << w;
			cout << w;
		}
	}
	ofs << endl;
	cout << endl;
}
