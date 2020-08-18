#include <list>
#include <forward_list>
#include <iostream>

using namespace std;

int main()
{
    list<int> li = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int>::iterator iter = li.begin();
    while (iter != li.end())
    {
        if (*iter % 2) 
        {
            iter = li.insert(iter, *iter);
            ++iter;
            ++iter;
        }
        else
        {
            iter = li.erase(iter);
        }
    }
    for (list<int>::iterator beg = li.begin(); beg != li.end(); ++beg)
    {
        cout << *beg << endl;
    }


    forward_list<int> fi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    forward_list<int>::iterator pre_iter = fi.before_begin();
    forward_list<int>::iterator cur_iter = fi.begin();
    while (cur_iter != fi.end())
    {
        if (*cur_iter % 2) 
        {
            cur_iter = fi.insert_after(cur_iter, *cur_iter);
            pre_iter = cur_iter;
            ++cur_iter;
        }
        else
        {
            cur_iter = fi.erase_after(pre_iter);
            ++pre_iter;
        }
    }

    for (forward_list<int>::iterator beg = fi.begin(); beg != fi.end(); ++beg)
    {
        cout << *beg << endl;
    }

    return 0;
}