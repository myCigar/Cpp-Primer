#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
    vector<int> iVec(begin(ia), end(ia));
    list<int> iList(begin(ia), end(ia));

    for (vector<int>::iterator beg = iVec.begin(); beg != iVec.end();)
    {
        if (*beg % 2 == 0)
        {
            beg = iVec.erase(beg);
        }
        else
        {
            ++beg;
        }
    }

    for (list<int>::iterator beg = iList.begin(); beg != iList.end();)
    {
        if (*beg % 2)
        {
            beg = iList.erase(beg);
        }
        else
        {
            ++beg;
        }
    }

    for (int &i : iVec)
        cout << i << " ";
    cout << endl;

    for (int &i : iList)
        cout << i << " ";
    cout << endl;

    return 0;
}