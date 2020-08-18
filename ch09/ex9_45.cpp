#include <iostream>
#include <string>

using namespace std;

string Add_fixs(string name, const string &pre, const string &suf)
{
    name.insert(name.begin(), pre.begin(), pre.end());
    name.append(suf);

    return name;
}

int main()
{
    string name = "Jerry";
    cout << Add_fixs(name, "Mr ", " Jr.") << endl;

    return 0;
}