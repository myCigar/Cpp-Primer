#ifndef EX13_31_HAS_PTR_H_
#define EX13_31_HAS_PTR_H_

#include <string>

class HasPtr {
    friend void swap(HasPtr&, HasPtr&);
public:
    HasPtr(const std::string &s = std::string()) : 
        ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr &ptr) : ps(new std::string(*(ptr.ps))), i(ptr.i) { }
    ~HasPtr() { delete ps; }
    HasPtr& operator=(HasPtr ptr);
    bool operator<(const HasPtr &ptr) { return this->ps < ptr.ps; }
private:
    std::string *ps;
    int i;
};

#endif