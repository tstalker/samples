#include <string>
#include <exception>

class length_exceeded: public std::exception
{
public:
	length_exceeded(const size_t n)
	{
		s += std::to_string(n);
	}

	const char* what(void) const noexcept
	{
		return s.c_str();
	}

private:
	std::string s{"length exceeded "};
};
