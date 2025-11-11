#include "Decode.hpp"

#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>

void dec::Parse(std::string_view ifname, std::string_view ofname)
{
	std::ifstream ifs(ifname.data());

	if(!ifs)
	{
		std::cerr << "Error: can't open file \"" << ifname << '\"' << std::endl;
		return;
	}

	std::ofstream ofs(ofname.data(), std::ios::binary);

	if(!ofs)
	{
		std::cerr << "Error: can't create file \"" << ofname << '\"' << std::endl;
		return;
	}

	for(std::size_t n{}; ifs >> std::hex >> n;)
	{
		if(static auto first(true); first)
		{
			first = false;
		}
		else
		{
			std::cout << ' ';
			ofs << ' ';
		}

		for(; n; n -= std::min(n, MAXSIZE))
		{
			unsigned m{};

			if(!(ifs >> std::hex >> m))
			{
				std::cerr << "Error: wrong format file \"" << ifname << '\"' << std::endl;
				return;
			}

			const auto w(GetWord(m));
			ofs << w;
			std::cout << w;
		}
	}

	ofs << std::endl;
	std::cout << std::endl;
}
