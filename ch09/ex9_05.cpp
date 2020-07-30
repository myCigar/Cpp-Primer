#include <iostream>
#include <vector>

auto find(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end, int v)
{
    while (begin != end)
    {
        if (*begin == v)
            return begin;
        ++begin;
    }
    return end;
}

int main()
{
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto iter = find(vec.cbegin(), vec.cend(), 10);
    if (iter != vec.cend())
        std::cout << "Find it" << std::endl;
    else
        std::cerr << "Not Find" << std::endl;

    return 0;
}

