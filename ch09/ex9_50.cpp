#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> siVec = {"1", "-2", "3", "-4", "5", "-6", "7", "-8", "9", "-10"};
    int iRes = 0;
    for (string &s : siVec)
    {
        iRes += stoi(s);
    }
    cout << iRes << endl;

    vector<string> sdVec = {"0.1", "-0.2", "0.3", "-0.4", "0.5", "-0.6", "0.7", "-0.8", "0.9", "-1.0"};
    double dRes = 0;
    for (string &s : sdVec)
    {
        dRes += stod(s);
    }
    cout << dRes << endl;


    return 0;
}