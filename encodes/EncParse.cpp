#include "Encode.hpp"

#include <algorithm>
#include <map>
#include <limits>
#include <fstream>
#include <iomanip>
#include <iostream>

void enc::Parse(std::string_view ifname, std::string_view ofname)
{
	const auto start(std::chrono::system_clock::now());
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

	auto first(true);
	std::map<std::string, unsigned> dict;
	const auto MAX(std::numeric_limits<decltype(dict)::mapped_type>::max());

	for(std::string w; ifs >> w;)
	{
		if(w.size() > MAXSIZE)
		{
			std::cout << w << " [" << std::hex << w.size() << "]: ";
		}

		if(first)
		{
			first = false;
		}
		else
		{
			ofs << ' ';
		}

		if(w.size())
		{
			ofs << std::hex << w.size() << ' ';
		}

		auto first(true);

		while(!w.empty())
		{
			const auto start(std::chrono::system_clock::now());
			const auto n(std::min(w.size(), MAXSIZE));
			const auto s(w.substr(0, n));

			if(first)
			{
				first = false;
			}
			else
			{
				std::cout << ' ';
				ofs << ' ';
			}

			std::cout << s << " [" << std::hex << s.size() << "]: " << std::flush << '[';

			if(dict.find(s) == dict.cend())
			{
				unsigned i{};

				while(i < MAX && s != GetWord(i))
				{
					i++;
				}

				if(i == MAX)
				{
					std::cerr << "Error: can't find index for word \"" << s << '\"' << std::endl;
					return;
				}

				dict[s] = i;
				std::cout << GetTime(start);
			}
			else
			{
				std::cout << "found";
			}

			std::cout << ']';
			ofs << std::hex << dict[s];
			w.erase(0, n);
		}

		std::cout << std::endl;
	}

	ofs << std::endl;
	std::cout << "Total time: [" << GetTime(start) << ']' << std::endl;
}
