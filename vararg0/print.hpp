#ifdef PRINT_HPP
#error Redefined header print.hpp
#endif

#define PRINT_HPP

#include <string_view>

void print(std::string_view, ...);
