#include <set>
#include <fstream>
#include <iostream>
#include <functional>
#include <unordered_map>

using mymap = std::unordered_map<std::wstring, std::uint64_t>;

bool cmp(const mymap::value_type& l, const mymap::value_type& r)
{
	return l.second > r.second || (l.second == r.second && l.first < r.first);
}

int main(void)
{
	std::locale::global(locale("en_US.UTF-8"));
	std::wifstream ifile("in.txt");
	mymap words;

	for(std::wstring s; ifile;)
	{
		auto c(ifile.get());

		if(std::iswalpha(c))
		{
			s += std::towlower(c);
		}
		else if(!s.empty())
		{
			++words[s];
			s.clear();
		}
	}

	std::set<mymap::value_type, std::function<decltype(cmp)>> sorted_words(words.cbegin(), words.cend(), cmp);
	std::wofstream ofile("out.txt");

	for(const auto& w: sorted_words)
	{
		std::wcout << w.second << '\t' << w.first << std::endl;
		ofile << w.second << '\t' << w.first << std::endl;
	}
}
