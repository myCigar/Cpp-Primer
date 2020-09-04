#include "StrBlobPtr.h"

std::string& StrBlobPtr::deref() const
{   
    std::shared_ptr<std::vector<std::string>> ret = check(curr, "end");
    return (*ret)[curr];
}

StrBlobPtr& StrBlobPtr::incr()
{
    check(curr, "end");
    ++curr;
    return *this;
}