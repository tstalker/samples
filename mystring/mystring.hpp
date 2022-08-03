#pragma once

#include <cstring>
#include <iostream>

namespace gen
{
	using namespace std;
	class mystring;

	inline const char* cstr(const char*);
	ostream& operator << (ostream&, const mystring&);
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
	mystring(const size_t, const char*);
	~mystring(void);

	mystring(void):
		size{},
		ptr(nullptr)
	{
		cout << "mystring::mystring() -> " << *this << endl;
	}

	mystring(const char* s):
		mystring(estimsize(s), s)
	{
		cout << "mystring::mystring(const char* \"" << cstr(s) << "\") -> " << *this << endl;
	}

	mystring(const mystring& s):
		mystring(s.size, s.ptr)
	{
		cout << "mystring::mystring(const mystring& " << s << ") -> " << *this << endl;
	}

private:
	void alloc(const mystring&);
	void origin(void);
	void checkrange(const size_t) const;
	void out(ostream& = cout) const;

	static char*
	alloc(const std::size_t sz)
	{
		return sz ? new char[sz]{} : nullptr;
	}

	size_t
	estimsize(const char* s)
	{
		return s ? strlen(s) : size_t();
	}

	void
	copy(const mystring& s)
	{
		copy(s.ptr);
	}

	void
	copy(const char* s)
	{
		copy_n(s, size, ptr);
	}

public:
	void clear(void);
	const mystring& operator = (mystring&&);
	const mystring& operator = (const mystring&);
	char& operator [] (const size_t);
	const char& operator [] (const size_t) const;
	char& operator () (const size_t);
	const char& operator () (const size_t) const;
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
	size_t size{size_t()};
	char* ptr{nullptr};

	friend ostream& operator << (ostream&, const mystring&);
};
