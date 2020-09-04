#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include "StrBlobPtr.h"
#include "StrBlob.h"

int main()
{
    std::shared_ptr<StrBlob> texts;
    std::string line;
    while (getline(std::cin, line))
    {
        texts->push_back(line);
    }

    for (StrBlobPtr beg = texts->begin(); 1; beg.incr())
    {
        std::cout << beg.deref() << std::endl;
    }

    return 0;
}