#ifndef EX13_27_HASPTR_H_
#define EX13_27_HASPTR_H_

#include <string>

class HasPtr {
public:
    HasPtr() : ps(new std::string()), i(0), use_cptr(new std::size_t(1)) { }
    HasPtr(const HasPtr& copy_ptr) : ps(copy_ptr.ps), i(copy_ptr.i), use_cptr(copy_ptr.use_cptr) { ++use_cptr; }
    HasPtr& operator=(const HasPtr& equal_ptr);
    ~HasPtr();
private:
    std::string *ps;
    int i;
    std::size_t *use_cptr;
};

HasPtr::~HasPtr()
{
    if (--(*use_cptr) == 0) {
        delete ps;
        delete use_cptr;
    }
}

HasPtr& HasPtr::operator=(const HasPtr& equal_ptr)
{
    ++(*equal_ptr.use_cptr);
    if (--(*use_cptr) == 0) {
        delete ps;
        delete use_cptr;
    }
    ps = equal_ptr.ps;
    i = equal_ptr.i;
    use_cptr = equal_ptr.use_cptr;
    return *this;
}

#endif
