//
// Created by someone on 2020/9/7.
//

#include "ex13_42_StrVec.h"
#include <algorithm>

void StrVec::chk_n_alloc()
{
    if (size() == capacity())
        reallocate();
}

std::pair<std::string*, std::string*>
StrVec::alloc_n_copy(const std::string *b, const std::string *e)
{
    auto data = alloc.allocate(e - b);
    return {data, std::uninitialized_copy(b, e, data)};
}

void StrVec::free()
{
    std::for_each(elements, first_free, [this](std::string &rhs){ alloc.destroy(&rhs); });
    alloc.deallocate(elements, cap - elements);
}

void StrVec::reallocate()
{
    std::size_t new_size = capacity() ? 2 * capacity() : 1;
    std::string *newdata = alloc.allocate(new_size);
    std::string *dest = newdata;
    std::string *elem = elements;
    for (std::size_t i = 0; i != size(); ++i) {
        alloc.construct(dest++, std::move(*elem++));
    }
    free();
    elements = newdata;
    first_free = dest;
    cap = elements + new_size;
}

void StrVec::push_back(const std::string& s)
{
    chk_n_alloc();
    *first_free++ = s;
}

void StrVec::pop_back()
{
    if (size() > 0) {
        alloc.destroy(--first_free);
        alloc.deallocate(first_free, 1);
    }
}

void StrVec::reverse(std::size_t n)
{
    while (n > capacity()) {
        reallocate();
    }
}

void StrVec::resize(std::size_t n, const std::string &s)
{
    reverse(n);
    while (n > size()) {
        push_back(s);
    }
    while (n < size()) {
        pop_back();
    }
}

StrVec::StrVec(const StrVec& s)
{
    std::pair<std::string*, std::string*> data = alloc_n_copy(s.begin(), s.end());
    elements = data.first;
    first_free = data.second;
    cap = data.second;
}

StrVec& StrVec::operator=(const StrVec& s)
{
    std::pair<std::string*, std::string*> data = alloc_n_copy(s.begin(), s.end());
    free();
    elements = data.first;
    first_free = data.second;
    cap = data.second;
}

StrVec::StrVec(std::initializer_list<std::string> listStr)
{
    std::pair<std::string*, std::string*> data = alloc_n_copy(listStr.begin(), listStr.end());
    elements = data.first;
    first_free = data.second;
    cap = data.second;
}

StrVec::~StrVec()
{
    free();
}
