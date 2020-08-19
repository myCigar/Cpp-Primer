#include <iostream>

int main()
{
    auto sum = [] (int a, int b) { return a + b; };
    std::cout << sum(15, 16) << std::endl;

    return 0;
}