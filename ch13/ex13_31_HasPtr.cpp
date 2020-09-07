#include "ex13_31_HasPtr.h"
#include <iostream>
#include <algorithm>
#include <vector>

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
    std::vector<HasPtr> pVec;
    pVec.push_back(HasPtr("Hello"));
    pVec.push_back(HasPtr("World"));
    pVec.push_back(HasPtr("Apple"));
    pVec.push_back(HasPtr("Boy"));
    
    std::sort(pVec.begin(), pVec.end());

    return 0;
}

