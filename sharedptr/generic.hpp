#pragma once

#include <memory>
#include <iomanip>
#include <iostream>

namespace gen
{
	using namespace std;
	class Base;
template <typename T>
	class Inherit;

	void Print(const Base&);
}

class gen::Base
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
	shared_ptr<BaseData> Data;

public:
	Base(const shared_ptr<BaseData> &p):
		Data(p)
	{}

	Base(const Base &s):
		Base(s.Data)
	{}

	~Base(void)
	{}

	const shared_ptr<BaseData>
	Get(void) const
	{
		return Data;
	}

	void Print(void) const
	{
		Data->Print();
	}
};

template <typename T>
class gen::Inherit:
	public Base
{
	class InheritData:
		public BaseData
	{
		T Value;

	public:
		InheritData(const T& s):
			Value(s)
		{}

		InheritData(const InheritData& s):
			InheritData(s.Value)
		{}

		~InheritData(void)
		{}

		void Print(void) const;
	};

public:
	Inherit(const T &s):
		Base(make_shared<InheritData>(s))
	{}

	~Inherit(void)
	{}
};

template <typename T>
void
gen::Inherit<T>::InheritData::Print(void)
const
{
	cout << Value << ' ';
}

template <>
class gen::Inherit<double>:
	public Base
{
	class InheritData:
		public BaseData
	{
		double Value;

	public:
		InheritData(const double& d): Value(d)
		{}

		InheritData(const InheritData& s):
			InheritData(s.Value)
		{}

		~InheritData(void)
		{}

		void Print(void) const;
	};

public:
	Inherit(const double& d):
		Base(make_shared<InheritData>(d))
	{}

	~Inherit(void)
	{}
};

inline void
gen::Inherit<double>::InheritData::Print(void)
const
{
	cout << setprecision(8) << Value << ' ';
}
