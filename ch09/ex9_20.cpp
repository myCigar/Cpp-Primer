#include <iostream>
#include <string>
#include <list>
#include <deque>

using namespace std;

int main()
{
    list<int> iList = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    deque<int> evenDeque;
    deque<int> oddDeque;

    for (list<int>::const_iterator beg = iList.cbegin(); beg != iList.cend(); ++beg)
    {
        if (*beg % 2 == 0)
            evenDeque.push_back(*beg);
        else
            oddDeque.push_back(*beg);
    }

    cout << "\neven number : ";
    for (int &i : evenDeque)
    {
        cout << i << " ";
    }

    cout << "\nodd number : ";
    for (int &i : oddDeque)
    {
        cout << i << " ";
    }
    return 0;
}