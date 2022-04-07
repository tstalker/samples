#include "generic.hpp"

int main(void)
{
	{
		gen::B* pb(new gen::B(1));
		gen::fn(pb);
		gen::A* pa(pb);
		pa->Print();
		delete pa;
	}
	{
		gen::C* pc(new gen::C(2));
		gen::fn(pc);
		gen::A* pa(pc);
		pa->Print();
		delete pa;
	}
	{
		gen::D* pd(new gen::D(3));
		gen::fn(pd);
		gen::A* pa(pd);
		pa->Print();
		delete pa;
	}
	return EXIT_SUCCESS;
}
