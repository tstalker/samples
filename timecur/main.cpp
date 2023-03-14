#include <chrono>
#include <iostream>

int main(void)
{
	const auto now(std::chrono::system_clock::now());
	const auto ttime(std::chrono::system_clock::to_time_t(now));
	const auto ctime(std::ctime(&ttime));
	std::cout << ctime << std::endl;
	return EXIT_SUCCESS;
}
