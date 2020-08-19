#include <iostream>

int main()
{
    auto f = [] { return 42; };
    std::cout << f() << std::endl;
    
    return 0;
}