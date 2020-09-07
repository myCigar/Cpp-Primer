#include "ex13_30_HasPtr.h"
#include <iostream>

void swap(HasPtr& v1, HasPtr& v2)
{
    using std::swap;
    swap(v1.ps, v2.ps);
    swap(v1.i, v2.i);
    std::cout << "void swap(HasPtr& v1, HasPtr& v2)" << std::endl;
}

HasPtr& HasPtr::operator=(HasPtr v)
{
    swap(*this, v);
    return *this;
}

int main()
{
    HasPtr v1("Hello");
    HasPtr v2("World");
    HasPtr v3(v1);

    v1 = v2;

    return 0;
}

