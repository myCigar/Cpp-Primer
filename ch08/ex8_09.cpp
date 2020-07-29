#include <iostream>
#include <sstream>
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
    istringstream is("Hello, world, my name is jia hao.");
    istream &c = read(is);
    cout << c.rdstate() << endl;

    return 0;
}