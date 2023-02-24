#pragma once

namespace gen
{
	class ttt;
}

class gen::ttt final
{
public:
	ttt(const int& i):
		i(i)
	{}

	~ttt(void)
	{}

	// lvalue
	int& get(void) &
	{
		return i;
	}

	// rvalue
	int get(void) &&
	{
		return i;
	}

private:
	int i{};
};
