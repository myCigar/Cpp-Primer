#include <numeric>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<double> iVec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = accumulate(iVec.cbegin(), iVec.cend(), 0);
    cout << sum << endl;

    return 0;
}