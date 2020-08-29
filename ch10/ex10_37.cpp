#include <iostream>
#include <vector>
#include <list>
#include <iterator>

int main()
{
    std::vector<int> iVec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::list<int> iList(iVec.rbegin()+2, iVec.rend()-3);

    for (std::list<int>::iterator beg = iList.begin(); beg != iList.end(); ++beg)
    {
        std::cout << *beg << " ";
    }
    std::cout << std::endl;

    return 0;
}