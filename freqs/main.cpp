#include <map>
#include <locale>
#include <string>
#include <fstream>
#include <iostream>

int
main(int argc, char* argv[])
{
	std::locale::global(std::locale("en_US.UTF-8"));
	if(argc != 3)
	{
		std::wcout << "Usage: " << argv[0] << " <infile> <outfile>" << std::endl;
		return 0;
	}

	const std::string inname(argv[1]);
	std::wifstream inf(inname);
	if(!inf)
	{
		std::wcerr << "Error: can\'t open file \"" << std::wstring(inname.cbegin(), inname.cend()) << '\"' << std::endl;
		return -1;
	}

	const std::string outname(argv[2]);
	std::wofstream outf(outname);
	if(!outf)
	{
		std::wcerr << "Error: can\'t create file \"" << std::wstring(outname.cbegin(), outname.cend()) << '\"' << std::endl;
		return -2;
	}

	std::map <std::wstring, size_t> m0;
	for(std::wstring w; inf;)
	{
		const auto c(std::towlower(inf.get()));
		if(std::iswalpha(c))
			w += c;
		else if(!w.empty())
		{
			m0[w]++;
			w.clear();
		}
	}

	std::multimap <size_t, std::wstring, std::greater <size_t>> m1;
	for(const auto& x: m0)
		m1.emplace(x.second, x.first);

	for(const auto& x: m1)
	{
		std::wcout << x.first << '\t' << x.second << std::endl;
		outf << x.first << '\t' << x.second << std::endl;
	}
}
