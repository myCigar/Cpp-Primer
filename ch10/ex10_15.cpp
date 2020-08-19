#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    auto sum = [a] (int b) { return a + b; };
    std::cout << sum(16) << std::endl;

    return 0;
}