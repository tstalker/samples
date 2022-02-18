class X{};

X t;

X f(void)
{
	return t;
}

int main(void)
{
	X &r0 = t;
//	X &r1 = f();
//	X &&r2 = t;
	X &&r3 = f();
	return int();
}
