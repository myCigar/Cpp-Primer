#include <string>

class HasPtr {
public:
    HasPtr(const std::string &s = std::string()) : 
        ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr &ptr) : ps(new std::string(*(ptr.ps))), i(ptr.i) { }
    HasPtr& operator=(const HasPtr& ptr)
    {
        std::string *tmp = new std::string(*ptr.ps);
        delete ps;
        ps = tmp;
        i = ptr.i;
        return *this;
    }
private:
    std::string *ps;
    int i;
};

