#include <vector>
#include <fstream>
#include <iostream>

const auto MAX(99u);
const auto SIZE(10u);

int main(void)
{
	std::vector<float> Data;
	std::fstream fs;
	fs.exceptions(std::ios_base::badbit | std::ios_base::eofbit | std::ios_base::failbit);

	try
	{
		fs.open("data.txt", std::ios::in | std::ios::out);
		auto x = float();
		fs >> x;
		std::cout << x << std::endl;
		fs << 7.77;
	}
	catch(const std::ios_base::failure& e)
	{
		std::cerr << "(): ios_base::failure exception" << std::endl;
		if(fs.eof())
		{
			std::cerr << "eof" << std::endl;
		}
		for(auto& x: Data)
		{
			std::cerr << x << ' ';
		}
		std::cerr << std::endl;
	}
	catch(...)
	{
		std::cerr << "(): Unknown exception" << std::endl;
	}
}
