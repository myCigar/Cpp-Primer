#include <map>
#include <iostream>

int main()
{
    std::map<int, int> iMap;
    iMap[1] = 3;
    iMap.insert({1, 2});
    std::cout << iMap[1] << std::endl;

    return 0;
}