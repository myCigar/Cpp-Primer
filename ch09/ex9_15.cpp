#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> iVec1 = {1, 2, 3, 4, 5, 6, 7};
    vector<int> iVec2 = {1, 3, 3, 4, 5, 6, 7};

    cout << (iVec1 == iVec2) << endl;

    return 0;
}