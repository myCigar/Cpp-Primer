#include <iostream>
#include <string>

using namespace std;

void Replace(string &s, const string &oldVal, const string &newVal)
{
    for (int i = 0; i != s.size(); ++i)
    {
        if (s.substr(i, i + oldVal.size()) == oldVal)
        {
            s.replace(i, oldVal.size(), newVal);
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