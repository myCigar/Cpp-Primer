#include <iostream>
#include <string>

using namespace std;

bool has_upper(const string &str)
{
    for (auto &c : str)
    {
        if (c >= 'A' && c <= 'Z')
            return true;
    }
    return false;
}

void convert2lower(string &str)
{
    for (auto &c : str)
    {
        if (c >= 'A' && c <= 'Z')
            c = tolower(c);
    }
}


int main()
{
    cout << has_upper("hello") << endl;
    
    string str = "HELLO WORLD";
    convert2lower(str);
    cout << str << endl;
    
    return 0;
}