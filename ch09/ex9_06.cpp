#include <list>

int main()
{
    std::list<int> lst;
    std::list<int>::iterator iter1 = lst.begin(), iter2 = lst.end();

    while (iter1 < iter2);
    
    return 0; 
}