#include <iostream>
#include <string>

using namespace std;

void Replace(string &s, const string &oldVal, const string &newVal)
{
    string::iterator beg = s.begin();
    while (beg != s.end())
    {
        string str(beg, beg + oldVal.size());
        if (str == oldVal)
        {
            beg = s.erase(beg, beg + oldVal.size());
            beg = s.insert(beg, newVal.begin(), newVal.end());
            beg += newVal.size();
        }
        else
        {
            ++beg;
        }
    }
}

int main()
{
    string str = "tho you are ugly.";
    Replace(str, "tho", "though");
    cout << str << endl;

    return 0;
}