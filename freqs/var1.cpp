#include <set>
#include <fstream>
#include <iostream>
#include <functional>
#include <unordered_map>

using namespace std;
using mymap = unordered_map <wstring, uint64_t>;

bool cmp(const mymap::value_type& l, const mymap::value_type& r)
{
	return l.second > r.second || (l.second == r.second && l.first < r.first);
}

int main(void)
{
	locale::global(locale("en_US.UTF-8"));
	wifstream ifile("in.txt");
	mymap words;
	for(wstring s; ifile;)
	{
		auto c(ifile.get());
		if(iswalpha(c))
			s += towlower(c);
		else if(!s.empty())
		{
			++words[s];
			s.clear();
		}
	}

	set <mymap::value_type, function <decltype(cmp)>> sorted_words(words.cbegin(), words.cend(), cmp);
	wofstream ofile("out.txt");
	for(const auto& w: sorted_words)
	{
		wcout << w.second << '\t' << w.first << endl;
		ofile << w.second << '\t' << w.first << endl;
	}
}
