#include <array>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <iostream>

int
main(void)
{
	const std::array src
	{
		0.123456789,
		1.23456789,
		12.3456789,
		123.456789,
		1234.56789,
		12345.6789,
		123456.789,
		1234567.89,
		12345678.9
	};

	for(const auto& r: src)
	{
		const auto s(std::to_string(r));
		const auto n(s.find('.'));
		const auto x(std::trunc(r));
		const auto m(x <= 0);

		std::cout
			<< std::left
			<< std::setw(n + 3)
			<< std::setfill('0')
			<< std::setprecision(n + 2 - m)
			<< r
			<< std::endl;
	}

	return EXIT_SUCCESS;
}
