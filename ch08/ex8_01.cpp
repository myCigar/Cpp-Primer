#include <iostream>
#include <string>

using namespace std;

istream& read(istream &c)
{
    string str;
    while (c >> str)
        cout << str << endl;
    c.clear();
    
    return c;
}

int main()
{
    istream &c = read(cin);
    
    cout << c.rdstate() << endl;

    return 0;
}

