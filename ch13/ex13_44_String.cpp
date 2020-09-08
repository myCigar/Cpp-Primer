//
// Created by someone on 2020/9/8.
//

#include "ex13_44_String.h"
#include <algorithm>

String::String(const char *b)
{
    std::size_t str_size = getsize(b);
    std::pair<const char *, const char *> data
        = alloc_n_copy(b, b + str_size);
    elements = data.first;
    first_free = data.second;
    cap = data.second;
}

String::~String()
{
    free();
}

std::size_t String::getsize(const char *b)
{
    std::size_t str_size = 0;
    while (*b != '\0') {
        ++str_size;
        ++b;
    }
    return str_size;
}

std::pair<const char *, const char *>
String::alloc_n_copy(const char *b, const char *e)
{
    char* beg = alloc.allocate(e - b);
    return {beg, std::uninitialized_copy(b, e, beg)};
}

void String::free()
{
    std::for_each(elements, first_free, [this](const char &p){ alloc.destroy(&p); });
    alloc.deallocate((char *)elements, cap - elements);
}

std::ostream& operator<<(std::ostream &os, const String &str)
{
    os.write(str.elements, str.size());
    return os;
}


