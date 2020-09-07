#ifndef EX13_30_HAS_PTR_H_
#define EX13_30_HAS_PTR_H_

#include <string>

class HasPtr {
    friend void swap(HasPtr&, HasPtr&);
public:
    HasPtr(const std::string &s = std::string()) : 
        ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr &ptr) : ps(new std::string(*(ptr.ps))), i(ptr.i) { }
    ~HasPtr() { delete ps; }
    HasPtr& operator=(HasPtr ptr);
private:
    std::string *ps;
    int i;
};

#endif