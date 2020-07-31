#include <forward_list>
#include <iostream>

using namespace std;

int main()
{
    forward_list<int> iForlist = {0, 1, 1, 2, 3, 5 ,8, 13, 21, 34, 55, 89};
    
    forward_list<int>::iterator pre = iForlist.before_begin();
    forward_list<int>::iterator cur = iForlist.begin();

    while (cur != iForlist.end())
    {
        if (*cur % 2)
        {
            cur = iForlist.erase_after(pre);
        }
        else
        {
            pre = cur;
            ++cur;
        }    
    }

    for (int &i : iForlist)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}