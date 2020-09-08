#ifndef EX13_40_STR_VEC_H_
#define EX13_40_STR_VEC_H_

#include <memory>
#include <utility>
#include <string>

class StrVec {
public:
    StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) { }
    StrVec(const StrVec&);
    StrVec(std::initializer_list<std::string> listStr);
    StrVec& operator=(const StrVec&);
    ~StrVec();
    void push_back(const std::string&);
    void pop_back();
    void reverse(std::size_t n);
    void resize(std::size_t n, const std::string &s = std::string());
    std::size_t size() const { return first_free - elements; }
    std::size_t capacity() const { return cap - elements; }
    std::string *begin() const { return elements; }
    std::string *end() const { return first_free; }
private:
    std::allocator<std::string> alloc;
    std::string *elements;
    std::string *first_free;
    std::string *cap;

    void chk_n_alloc();
    std::pair<std::string*, std::string*> alloc_n_copy(const std::string *b, const std::string *e);
    void free();
    void reallocate();
};  

StrVec::StrVec(std::initializer_list<std::string> listStr)
{
    std::pair<std::string*, std::string*> data = alloc_n_copy(listStr.begin(), listStr.end());
    elements = data.first;
    first_free = data.second;
    cap = data.second;
}

#endif