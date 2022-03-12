#pragma once

#include <array>
#include <cstddef>

using type = int;

const std::size_t MAX(10);

void init(std::array<type, MAX>&);
void print(const std::array<type, MAX>&);
void sort(std::array<type, MAX>&);
