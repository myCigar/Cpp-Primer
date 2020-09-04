#ifndef STR_BLOB_PTR_H_
#define STR_BLOB_PTR_H_

#include <memory>
#include <vector>
#include <string>
#include "StrBlob.h"

class StrBlobPtr {
public:
    StrBlobPtr() : curr(0) { }
    StrBlobPtr(StrBlob &a, std::size_t sz = 0) : wptr(a.data), curr(sz) { }
    std::string &deref() const;
    StrBlobPtr& incr();

private:
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

#endif 