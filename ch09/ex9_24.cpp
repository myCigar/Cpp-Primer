#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> iVec;
    // out of range
    iVec.at(0);
    cout << iVec[0] << endl;
    cout << iVec.front() << endl;
    cout << *iVec.begin() << endl;
    cout << "Hello" << endl;
    return 0;
}