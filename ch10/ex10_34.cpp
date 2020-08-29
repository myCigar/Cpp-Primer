#include <iostream>
#include <vector>
#include <iterator>

int main()
{
    std::vector<int> iVec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (std::vector<int>::const_reverse_iterator rbeg = iVec.crbegin(); 
            rbeg != iVec.crend(); ++rbeg)
    {
        std::cout << *rbeg << " ";
    }
    std::cout << std::endl;
    
    return 0;
}