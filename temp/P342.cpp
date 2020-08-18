#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> vec(10, 1);
    vec.reserve(10);

    std::fill_n(vec.begin(), 10, 0);
    for (int i : vec)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}