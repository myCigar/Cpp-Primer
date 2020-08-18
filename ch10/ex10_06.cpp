#include <algorithm>
#include <list>
#include <iostream>

int main()
{
    std::list<int> iList = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::fill_n(iList.begin(), iList.size(), 0);

    for (int i : iList)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}