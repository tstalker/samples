#include <memory>
#include <iomanip>
#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;
using std::mem_fn;
using std::string;
using std::vector;
using std::shared_ptr;
using std::make_shared;
using std::setprecision;

class Base
{
protected:
	class BaseData
	{
	public:
		virtual ~BaseData(void)
		{}

		virtual void Print(void) const = 0;
	};

private:
	shared_ptr <BaseData> Data;

public:
	Base(const shared_ptr <BaseData> &p): Data(p)
	{}

	Base(const Base &s): Base(s.Data)
	{}

	~Base(void)
	{}

	const shared_ptr <BaseData> &Get(void) const
	{
		return Data;
	}

	void Print(void) const
	{
		Data->Print();
	}
};

template <typename Type> class Inherit: public Base
{
	class InheritData: public BaseData
	{
		Type Value;

	public:
		InheritData(const Type &s): Value(s)
		{}

		InheritData(const InheritData &s): InheritData(s.Value)
		{}

		~InheritData(void)
		{}

		void Print(void) const;
	};

public:
	Inherit(const Type &s): Base(make_shared <InheritData> (s))
	{}

	~Inherit(void)
	{}
};

template <typename Type> void Inherit <Type>::InheritData::Print(void) const
{
	cout << Value << ' ';
}

template <> class Inherit <double>: public Base
{
	class InheritData: public BaseData
	{
		double Value;

	public:
		InheritData(const double &d): Value(d)
		{}

		InheritData(const InheritData &s): InheritData(s.Value)
		{}

		~InheritData(void)
		{}

		void Print(void) const;
	};

public:
	Inherit(const double &d): Base(make_shared <InheritData> (d))
	{}

	~Inherit(void)
	{}
};

void Inherit <double>::InheritData::Print(void) const
{
	cout << setprecision(8) << Value << ' ';
}

void Print(const Base &v)
{
	v.Print();
}

int main(void)
{
	const vector <Base> Vector
	{
		Inherit <char> ('a'),
		Inherit <string> ("abcde"),
		Inherit <int> (789),
		Inherit <float> (1.23f),
		Inherit <double> (3.1415926)
	};

	for(auto i = size_t(); i < Vector.size(); i++)
		Vector[i].Print();

	cout << endl;
	for(auto p(Vector.cbegin()); p != Vector.cend(); p++)
		p->Print();

	cout << endl;
	for(const auto &x: Vector)
		x.Print();

	cout << endl;
	for_each(Vector.cbegin(), Vector.cend(), Print);

	cout << endl;
	for_each(Vector.cbegin(), Vector.cend(), mem_fn(&Base::Print));

	struct zzz
	{
		void operator () (const Base &v) const
		{
			v.Print();
		}
	};

	cout << endl;
	for_each(Vector.cbegin(), Vector.cend(), zzz());

	cout << endl;
	for_each(Vector.cbegin(), Vector.cend(), [](const Base &v)
	{
		v.Print();
	});

	cout << endl;
	return int();
}
