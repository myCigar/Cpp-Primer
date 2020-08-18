#include <algorithm>
#include <list>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    list<string> sList;
    string str;
    while (cin >> str)
    {
        sList.push_back(str);
    }
    cout << count(sList.cbegin(), sList.cend(), "hi") << endl;

    return 0;
}