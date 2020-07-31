#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main()
{
    string str;
    deque<string> sDeque;
    while (cin >> str)
    {
        sDeque.push_back(str);
    }

    for (deque<string>::const_iterator beg = sDeque.cbegin(); 
            beg != sDeque.cend(); ++beg)
    {
        cout << *beg << endl;
    }
    return 0;
}