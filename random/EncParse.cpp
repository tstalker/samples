#include "Encode.hpp"

#include <map>
#include <limits>
#include <fstream>
#include <iomanip>
#include <iostream>

void enc::Parse(string_view ifname, string_view ofname)
{
	const auto start(chrono::system_clock::now());
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

	auto first(true);
	map<string, unsigned> dict;
	const auto MAX(numeric_limits<decltype(dict)::mapped_type>::max());
	for(string w; ifs >> w;)
	{
		if(w.size() > MAXSIZE)
		{
			cout << w << " [" << hex << w.size() << "]: ";
		}
		if(first)
		{
			first = false;
		}
		else ofs << ' ';
		if(w.size())
		{
			ofs << hex << w.size() << ' ';
		}

		auto first(true);
		while(!w.empty())
		{
			const auto start(chrono::system_clock::now());
			const auto n(min(w.size(), MAXSIZE));
			const auto s(w.substr(0, n));
			if(first)
			{
				first = false;
			}
			else
			{
				cout << ' ';
				ofs << ' ';
			}
			cout << s << " [" << hex << s.size() << "]: " << flush << '[';

			if(dict.find(s) == dict.cend())
			{
				unsigned i{};
				while(i < MAX && s != GetWord(i))
				{
					i++;
				}
				if(i == MAX)
				{
					cerr << "Error: can't find index for word \"" << s << '\"' << endl;
					return;
				}
				dict[s] = i;
				cout << GetTime(start);
			}
			else
			{
				cout << "found";
			}
			cout << ']';
			ofs << hex << dict[s];
			w.erase(0, n);
		}
		cout << endl;
	}
	ofs << endl;
	cout << "Total time: [" << GetTime(start) << ']' << endl;
}
