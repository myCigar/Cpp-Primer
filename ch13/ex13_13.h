#ifndef CPP_PRIMER_CH13_EX13_13_H_
#define CPP_PRIMER_CH13_EX13_13_H_

#include <iostream>

struct X {
    X() { std::cout << "X()" << std::endl; }
    X(const X&) { std::cout << "X(const X&)" << std::endl; }
    X& operator=(const X&)
    {
        std::cout << "X& operator=(const X&)" << std::endl;
        return *this;
    }
    ~X() { std::cout << "~X()" << std::endl; }
};

#endif