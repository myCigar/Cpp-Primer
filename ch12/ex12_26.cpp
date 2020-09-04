#include <string>
#include <memory>
#include <iostream>

int main()
{
    int n = 100;
    std::allocator<std::string> alloc;
    std::string *pStr = alloc.allocate(n);

    std::string s;
    std::string *q = pStr;
    while (std::cin >> s && q != pStr + n)
    {   
        alloc.construct(q++, s);
    }
    while (q != pStr)
        alloc.destroy(--q);

    alloc.deallocate(pStr, n);

    return 0;
}