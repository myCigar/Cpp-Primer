#include "ex13_39_StrVec.h"
#include <iostream>

int main()
{
    StrVec sVec;
    sVec.push_back("Hello2");
    sVec.push_back("Hello3");

    for (std::string *beg = sVec.begin(); beg != sVec.end(); ++beg) {
        std::cout << *beg << std::endl;
    }
    return 0;
}