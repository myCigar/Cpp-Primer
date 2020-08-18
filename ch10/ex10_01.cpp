#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> iVec;
    int num;
    while (cin >> num)
    {
        iVec.push_back(num);
    }
    cout << count(iVec.cbegin(), iVec.cend(), 2) << endl;

    return 0;
}