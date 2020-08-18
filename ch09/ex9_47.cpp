#include <iostream>
#include <string>

using namespace std;

int main()
{
    string numbers = {"0123456789"};
    string chars = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string str = {"ab2c3d7R4E6"};

    string::size_type pos = 0;
    while ((pos = str.find_first_of(numbers, pos)) != string::npos)
    {
        cout << "found number at index " << pos << " element is " << str[pos] << endl;
        ++pos;
    }

    pos = 0;
    while ((pos = str.find_first_of(chars, pos)) != string::npos)
    {
        cout << "found chars at index " << pos << " element is " << str[pos] << endl;
        ++pos;
    }

    return 0;
}