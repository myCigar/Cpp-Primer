#include "ex13_39_StrVec.h"
#include <iostream>

int main()
{
    StrVec sVec;
    for (int i = 1; i != 10; ++i) {
        sVec.push_back(std::string(i, 'A'));
    }
    sVec.resize(20, "Hello");

    for (std::string *beg = sVec.begin(); beg != sVec.end(); ++beg) {
        std::cout << *beg << std::endl;
    }
    return 0;
}