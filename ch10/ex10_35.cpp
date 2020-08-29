#include <iostream>
#include <vector>
#include <iterator>

int main()
{
    std::vector<int> iVec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (std::vector<int>::iterator beg = iVec.end() - 1; 
            beg != iVec.begin() - 1; --beg)
    {
        std::cout << *beg << " ";
    }
    std::cout << std::endl;
    
    return 0;
}