#include <iostream>
#include <new>

class BaseClass
{
public:
	BaseClass(void)
	{}

	virtual ~BaseClass(void)
	{
		std::cout << "BaseClass::~BaseClass() -> " << m_id << std::endl;
	}

	void setId(std::size_t id)
	{
		m_id = id;
	}

	void print(void) const
	{
		std::cout << m_id << std::endl;
	}

protected:
	std::size_t m_id{};
};

class ChildClass: public BaseClass
{
public:
	ChildClass(void):
		m_buffer(new unsigned char[buf_size]{})
	{}

	~ChildClass(void)
	{
		std::cout << "ChildClass::~ChildClass() -> " << m_id << std::endl;
		delete[] m_buffer;
	}

private:
	static const std::size_t buf_size{20};

	unsigned char* m_buffer{nullptr};
};

void processing(BaseClass* arr, std::size_t count)
{
	auto ptr(dynamic_cast<ChildClass*>(arr)); // avoid slicing
	for(std::size_t i{}; i < count; i++)
	{
		ptr[i].setId(i);
	}
}

void print(const BaseClass* arr, std::size_t count)
{
	auto ptr(dynamic_cast<const ChildClass*>(arr)); // avoid slicing
	for(std::size_t i{}; i < count; i++)
	{
		ptr[i].print();
	}
}

int main(void)
{
	try
	{
		const std::size_t count(10);
		BaseClass* arr(new ChildClass[count]);

		processing(arr, count);
		print(arr, count);

		auto ptr(dynamic_cast<ChildClass*>(arr)); // avoid slicing
		delete[] ptr;
		return EXIT_SUCCESS;
	}
	catch(const std::bad_alloc& e)
	{
		std::cerr << "Memory allocation failed: " << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	catch(const std::bad_cast& e)
	{
		std::cerr << "Bad cast exception: " << e.what() << std::endl;
		return EXIT_FAILURE;
	}
	catch(...)
	{
		std::cerr << "Unknown exception" << std::endl;
		return EXIT_FAILURE;
	}
}
