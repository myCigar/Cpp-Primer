#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

int main()
{
    std::list<int> iList = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    auto riter = std::find(iList.rbegin(), iList.rend(), 0);

    for (std::list<int>::iterator beg = riter.base(); beg != iList.end(); ++beg)
    {
        std::cout << *beg << " ";
    }
    std::cout << std::endl;
    
    return 0;
}