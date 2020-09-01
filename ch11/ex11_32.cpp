#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <set>

using std::string;

int main()
{
    std::multimap<string, string> authors {
        {"alan", "DMA"},
        {"mary", "Wing"},
        {"alan", "Hello"},
        {"mary", "Wing2"},
        {"mary", "Wing3"},
    };

    std::set<string> names;
    for (auto const iter : authors)
    {
        names.insert(iter.first);
    }

    for (auto const iter : names)
    {
        auto range_pair = authors.equal_range(iter);
        std::cout << iter << ":{ ";
        for (auto beg = range_pair.first; beg != range_pair.second; ++beg)
        {
            std::cout << beg->second << ", ";
        }
        std::cout << " }" << std::endl;
    }

    return 0;
}