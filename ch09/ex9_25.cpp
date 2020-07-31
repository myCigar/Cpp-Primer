#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> iList = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int>::difference_type dis = 5;
    list<int>::iterator mid = iList.begin() + dis;

    return 0;
}