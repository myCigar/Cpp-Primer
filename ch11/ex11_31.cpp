#include <iostream>
#include <map>
#include <string>

using std::string;

int main()
{
    std::multimap<string, string> authors {
        {"alan", "DMA"},
        {"mary", "Wing"},
        {"alan", "Hello"}
    };

    auto found = authors.find("alan");
    auto count = authors.count("alan");
    while (count) 
    {
        authors.erase(found);
        ++found;
        --count;
    }

    for (auto const iter : authors)
    {
        std::cout << iter.first << " " << iter.second << std::endl;
    }

    return 0;
}