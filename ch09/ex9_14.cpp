#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    list<const char *> chList = {"Hello, ", "my " , "name ", "is ", "Trump"};
    vector<string> sVec = {"Hello, ", "my ", "name ", "is ", "Obama"};

    sVec.assign(chList.begin(), chList.end());
    for (string &str : sVec)
    {
        cout << str;
    }
    cout << endl;

    return 0;
}