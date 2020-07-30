#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(int argc, char *argv[])
{
    list<int> iList = {1, 2, 3, 4};
    vector<double> dVec(iList.begin(), iList.end());
    for (double &d : dVec)
    {
        cout << d << endl;
    }

    vector<int> iVec(iList.begin(), iList.end());
    for (int &i : iVec)
    {
        cout << i << endl;
    }
    return 0;
}