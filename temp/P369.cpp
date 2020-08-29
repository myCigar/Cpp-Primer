#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> iVec = {0, 1, 2, 0, 1, 1, 0, 2, 2};
    std::vector<int> destVec;
    std::replace_copy_if(iVec.begin(), iVec.end(), std::back_inserter(destVec), [](int i) {return i % 2;}, 3);

    for (int i : destVec)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}