#include <iostream>
#include <memory>
#include <vector>
#include <string>

class StrBlob;
class StrBlobPtr;

class StrBlobPtr {
public:
    StrBlobPtr() : curr(0) { }
    StrBlobPtr(StrBlob &a, std::size_t sz = 0) : wptr(a.data), curr(sz) { }
    std::string &deref() const;
    StrBlobPtr& incr();

private:
    std::shared_ptr<std::vector<std::string>> 
        check(std::size_t, const std::string &) const;
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;

    std::shared_ptr<std::vector<std::string>>
    check(std::size_t i, const std::string &msg) const
    {
        std::shared_ptr<std::vector<std::string>> ret = wptr.lock();
        if (!ret)
            throw std::runtime_error("unbound StrBlobPrt");
        if (i >= ret->size())
            throw std::out_of_range(msg);
        return ret;
    }
};

std::string &StrBlobPtr::deref() const
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


class StrBlob {
    friend class StrBlobPtr;
public:
    StrBlobPtr begin() { return StrBlobPtr(*this); }
    StrBlobPtr end() { return StrBlobPtr(*this, data->size()); }
private:
    std::shared_ptr<std::vector<std::string>> data;
};