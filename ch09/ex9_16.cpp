#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    list<int> iList = {1, 2, 3, 4, 5, 6, 7};
    vector<int> iVec = {1, 3, 3, 4, 5, 6, 7};
    vector<int> iVec2(iList.begin(), iList.end());

    cout << (iVec2 == iVec) << endl;

    return 0;
}