#include "A.hpp"

int main(void)
{
    auto pb(new std::byte[sizeof(A)]{});
    auto pa(new(pb) A);
    std::cout << pa << std::endl;
    std::cout << pb << std::endl;
    pa->~A();
    pa = nullptr;
    delete[] pb;
    pb = nullptr;
    return EXIT_SUCCESS;
}
