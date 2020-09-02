#include "ex12_02.h"
#include <iostream>

std::string &StrBlob::front() const 
{
    check(0, "front on empty StrBlob");
    return data->front();
}

std::string &StrBlob::back() const
{
    check(0, "back on empty StrBlob");
    return data->back();
}

int main()
{
    const StrBlob csb{ "hello", "world", "pezy" };
    StrBlob sb{ "hello", "world", "Mooophy" };

    std::cout << csb.front() << " " << csb.back() << std::endl;
    sb.back() = "pezy";
    std::cout << sb.front() << " " << sb.back() << std::endl;
}