#include <string>

class HasPtr {
public:
    HasPtr(const std::string &s = std::string()) : 
        ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr &ptr) : ps(new std::string(*(ptr.ps))), i(ptr.i) { }
private:
    std::string *ps;
    int i;
};

