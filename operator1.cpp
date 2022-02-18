#include <cstdlib>
#include <cstring>
#include <iostream>

using std::cerr;
using std::cout;
using std::endl;
using std::ostream;

using pchr = char*;
using cpchr = const char*;

class mystring
{
	pchr s{nullptr};
	size_t size{size_t()};

public:
	explicit mystring(void)
	{}

	explicit mystring(cpchr src):
		mystring(src, src ? strlen(src) + 1 : size_t())
	{}

	explicit mystring(const mystring &src): mystring(src.s, src.size)
	{}

	explicit mystring(cpchr, size_t);
	~mystring(void);
	const mystring& operator = (const mystring&);
	const mystring& operator += (const mystring&);
	const mystring& operator += (char);
	bool operator == (const mystring&) const;
	bool operator != (const mystring&) const;
	char& operator [] (size_t);
	char operator [] (size_t) const;
	void print(void) const;
	void error(cpchr, cpchr) const;

	size_t getsize(void) const
	{
		return size;
	}

	cpchr getstr(void) const
	{
		return s;
	}

	const mystring* operator -> (void) const
	{
		return this;
	}
};

mystring::mystring(cpchr src, size_t size): size(size)
{
	if(!size) return;
	s = new char[size];
	memcpy(s, src, size - 1);
	s[size - 1] = '\0';
}

mystring::~mystring(void)
{
	delete[] s;
	s = nullptr;
	size = size_t();
}

const mystring& mystring::operator = (const mystring &src)
{
	if(this == &src) return *this;
	delete[] s;
	s = nullptr;
	size = src.size;
	if(!size) return *this;
	s = new char[size];
	memcpy(s, src.s, size - 1);
	s[size - 1] = '\0';
	return *this;
}

const mystring& mystring::operator += (const mystring &src)
{
	if(!src.size) return *this;
	if(size)
	{
		mystring t(*this);
		delete[] s;
		s = nullptr;
		size += src.size - 1;
		s = new char[size];
		memcpy(s, t.s, t.size - 1);
		s[t.size - 1] = '\0';
		if(this == &src) memcpy(s + t.size - 1, t.s, t.size - 1);
		else memcpy(s + t.size - 1, src.s, src.size - 1);
	}
	else
	{
		size = src.size;
		s = new char[size];
		memcpy(s, src.s, size - 1);
	}
	s[size - 1] = '\0';
	return *this;
}

const mystring& mystring::operator += (char c)
{
	if(size)
	{
		mystring t(*this);
		delete[] s;
		s = nullptr;
		size++;
		s = new char[size];
		memcpy(s, t.s, t.size - 1);
		s[size - 2] = c;
	}
	else
	{
		size = 2;
		s = new char[size];
		s[0] = c;
	}
	s[size - 1] = '\0';
	return *this;
}

bool mystring::operator == (const mystring &src) const
{
	if(size != src.size) return false;
	if(s == nullptr && src.s == nullptr) return true;
	if(s == nullptr || src.s == nullptr) return false;
	return !static_cast <bool> (memcmp(s, src.s, size));
}

bool mystring::operator != (const mystring &src) const
{
	if(size != src.size) return true;
	if(s == nullptr && src.s == nullptr) return false;
	if(s == nullptr || src.s == nullptr) return true;
	return static_cast <bool> (memcmp(s, src.s, size));
}

char& mystring::operator[] (size_t i)
{
	if(i >= size) error("operator[]", "out of bounds");
	return s[i];
}

char mystring::operator[] (size_t i) const
{
	if(i >= size) error("operator[]", "out of bounds");
	return s[i];
}

void mystring::print(void) const
{
	if(s) cout << s << endl;
}

void mystring::error(cpchr f, cpchr s) const
{
	cerr << endl << "mystring::" << f << " error: " << s << endl;
	exit(EXIT_FAILURE);
}

ostream& operator << (ostream &s, const mystring &src)
{
	return s << src.getstr();
}

int main(void)
{
	const mystring a("abc");
	for(auto i = size_t(); i < a.getsize() && a[i]; i++)
		cout << a[i];
	cout << endl << a << endl;

	mystring b("def");
	for(auto i = size_t(); i < a.getsize(); i++)
		b[i] = a[i];
	cout << b << endl;
	return int();
}
