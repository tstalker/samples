#pragma once

#include <string>
#include <exception>

namespace gen
{
	using namespace std;
	class length_exceeded;
}

class gen::length_exceeded:
	public exception
{
public:
	length_exceeded(const size_t n)
	{
		s += to_string(n);
	}

	const char* what(void) const noexcept
	{
		return s.c_str();
	}

private:
	string s{"length exceeded "};
};
