#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
    string str;
    list<string> sList;
    while (cin >> str)
    {
        sList.push_back(str);
    }

    for (list<string>::const_iterator beg = sList.cbegin(); 
            beg != sList.cend(); ++beg)
    {
        cout << *beg << endl;
    }
    return 0;
}