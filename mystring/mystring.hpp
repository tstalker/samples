#pragma once

#include <algorithm>
#include <cstring>
#include <iostream>

namespace gen
{
	class mystring;

	inline const char* cstr(const char*);
	std::ostream& operator << (std::ostream&, const mystring&);
}

using gen::operator <<;

inline const char*
gen::cstr(const char* s)
{
	return s ? s : "<nullptr>";
}

class gen::mystring
{
public:
	mystring(mystring&&);
	mystring(const std::size_t, const char*);
	~mystring(void);

	mystring(void):
		size{},
		ptr(nullptr)
	{
		std::cout << "mystring::mystring() -> " << *this << std::endl;
	}

	mystring(
		const char* s):
		mystring(estimsize(s), s)
	{
		std::cout << "mystring::mystring(const char* \"" << cstr(s) << "\") -> " << *this << std::endl;
	}

	mystring(
		const mystring& s):
		mystring(s.size, s.ptr)
	{
		std::cout << "mystring::mystring(const mystring& " << s << ") -> " << *this << std::endl;
	}

private:
	void alloc(const mystring&);
	void origin(void);
	void checkrange(const std::size_t) const;
	void out(std::ostream& = std::cout) const;

	static char*
	alloc(
		const std::size_t sz)
	{
		return sz ? new char[sz]{} : nullptr;
	}

	std::size_t
	estimsize(
		const char* s)
	{
		return s ? std::strlen(s) : std::size_t();
	}

	void
	copy(
		const mystring& s)
	{
		copy(s.ptr);
	}

	void
	copy(
		const char* s)
	{
		std::copy_n(s, size, ptr);
	}

public:
	void clear(void);
	const mystring& operator = (mystring&&);
	const mystring& operator = (const mystring&);
	char& operator [] (const std::size_t);
	const char& operator [] (const std::size_t) const;
	char& operator () (const std::size_t);
	const char& operator () (const std::size_t) const;
	mystring operator ~ (void) const;

	auto
	getsize(void)
	const
	{
		return size;
	}

	auto
	begin(void)
	{
		return ptr;
	}

	auto
	begin(void)
	const
	{
		return ptr;
	}

	auto
	cbegin(void)
	const
	{
		return begin();
	}

	auto
	end(void)
	{
		return ptr + size;
	}

	auto
	end(void)
	const
	{
		return ptr + size;
	}

	auto
	cend(void)
	const
	{
		return end();
	}

private:
	std::size_t size{std::size_t()};
	char* ptr{nullptr};

	friend std::ostream& operator << (std::ostream&, const mystring&);
};
