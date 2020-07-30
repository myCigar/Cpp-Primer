#include <vector>

bool find(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end, int v)
{
    while (begin != end)
    {
        if (*begin == v)
            return true;
        ++begin;
    }
    return false;
}

