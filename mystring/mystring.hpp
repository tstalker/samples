#pragma once

#include <cstring>
#include <iostream>
#include <algorithm>

inline const char*
cstr(const char* s)
{
	return s ? s : "<nullptr>";
}

class mystring
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

	mystring(const char* s):
		mystring(estimsize(s), s)
	{
		std::cout << "mystring::mystring(const char* \"" << cstr(s) << "\") -> " << *this << std::endl;
	}

	mystring(const mystring& s):
		mystring(s.size, s.ptr)
	{
		std::cout << "mystring::mystring(const mystring& " << s << ") -> " << *this << std::endl;
	}

private:
	void alloc(const mystring&);
	void origin(void);
	void checkrange(const std::size_t) const;
	void out(std::ostream& = std::cout) const;

	static char* alloc(const std::size_t sz)
	{
		return sz ? new char[sz]{} : nullptr;
	}

	std::size_t estimsize(const char* s)
	{
		return s ? strlen(s) : 0;
	}

	void copy(const mystring& s)
	{
		copy(s.ptr);
	}

	void copy(const char* s)
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

	std::size_t getsize(void) const
	{
		return size;
	}

	char* begin(void)
	{
		return ptr;
	}

	const char* begin(void) const
	{
		return ptr;
	}

	const char* cbegin(void) const
	{
		return ptr;
	}

	char* end(void)
	{
		return ptr + size;
	}

	const char* end(void) const
	{
		return ptr + size;
	}

	const char* cend(void) const
	{
		return ptr + size;
	}

private:
	std::size_t size{std::size_t()};
	char* ptr{nullptr};

	friend std::ostream& operator << (std::ostream&, const mystring&);
};
