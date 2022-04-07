#include <memory>
#include <iomanip>
#include <iostream>
#include <algorithm>

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
	std::shared_ptr<BaseData> Data;

public:
	Base(const std::shared_ptr<BaseData> &p):
		Data(p)
	{}

	Base(const Base &s):
		Base(s.Data)
	{}

	~Base(void)
	{}

	const std::shared_ptr<BaseData>
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
class Inherit:
	public Base
{
	class InheritData:
		public BaseData
	{
		T Value;

	public:
		InheritData(const T &s):
			Value(s)
		{}

		InheritData(const InheritData &s):
			InheritData(s.Value)
		{}

		~InheritData(void)
		{}

		void Print(void) const;
	};

public:
	Inherit(const T &s):
		Base(std::make_shared<InheritData>(s))
	{}

	~Inherit(void)
	{}
};

template <typename T>
void
Inherit<T>::InheritData::Print(void) const
{
	std::cout << Value << ' ';
}

template <>
class Inherit <double>:
	public Base
{
	class InheritData:
		public BaseData
	{
		double Value;

	public:
		InheritData(const double &d): Value(d)
		{}

		InheritData(const InheritData &s):
			InheritData(s.Value)
		{}

		~InheritData(void)
		{}

		void Print(void) const;
	};

public:
	Inherit(const double &d):
		Base(std::make_shared<InheritData>(d))
	{}

	~Inherit(void)
	{}
};

inline void
Inherit<double>::InheritData::Print(void) const
{
	std::cout << std::setprecision(8) << Value << ' ';
}

inline void
Print(const Base& v)
{
	v.Print();
}

int
main(void)
{
	const std::vector<Base> v
	{
		Inherit<char>('a'),
		Inherit<std::string>("abcde"),
		Inherit<int>(12345),
		Inherit<float>(1.23f),
		Inherit<double>(3.1415926)
	};

	for(std::size_t i{}; i < v.size(); i++)
	{
		v[i].Print();
	}

	std::cout << std::endl;
	for(auto p(v.cbegin()); p != v.cend(); p++)
	{
		p->Print();
	}

	std::cout << std::endl;
	for(const auto& x: v)
	{
		x.Print();
	}

	std::cout << std::endl;
	std::for_each(v.cbegin(), v.cend(), Print);

	std::cout << std::endl;
	std::for_each(v.cbegin(), v.cend(), std::mem_fn(&Base::Print));

	struct zzz
	{
		void operator () (const Base& v) const
		{
			v.Print();
		}
	};

	std::cout << std::endl;
	std::for_each(v.cbegin(), v.cend(), zzz());

	std::cout << std::endl;
	std::for_each(v.cbegin(), v.cend(), [](const Base& v)
	{
		v.Print();
	});

	std::cout << std::endl;
	return EXIT_SUCCESS;
}
