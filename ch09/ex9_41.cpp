#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<char> vChar = {'h', 'e', 'l', 'l', 'o', ',', 'w', 'o', 'r', 'l', 'd', '!'};
    string s1(vChar.begin(), vChar.end());

    cout << s1 << endl;

    return 0;
}