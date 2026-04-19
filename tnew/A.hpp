#pragma once

#include <iostream>
#include <string>

class A
{
public:
    A(void):
        name(__func__)
    {
        std::cout << name << "::" << __func__ << "()" << std::endl;
    }

    ~A(void)
    {
        std::cout << name << "::" << __func__ << "()" << std::endl;
    }

private:
    std::string name;
};
