#include <iostream>
#include <string>
#include <forward_list>

using namespace std;

void insertString(forward_list<string> &iForlist, string loc, string insertStr)
{
    forward_list<string>::iterator cur = iForlist.begin();

    while (cur != iForlist.end())
    {
        if (*cur == loc)
        {
            cur = iForlist.insert_after(cur, insertStr);
        }
        ++cur;
    }
}

int main()
{

    return 0;
}