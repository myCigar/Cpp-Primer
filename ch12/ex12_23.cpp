#include <iostream>
#include <string>

using namespace std;

char *connect(const char *ch1, const char *ch2)
{
    int length1 = 0;
    int length2 = 0;
    while (ch1[length1] != '\0') length1++;
    while (ch1[length2] != '\0') length2++;

    char *ret = new char[length1 + length2 + 1];

    int i = 0, j = 0;
    while (ch1[i] != '\0') 
    {
        ret[i] = ch1[i];
        ++i;
        ++j;
    }
    i = 0;
    while (ch2[i] != '\0') 
    {
        ret[j] = ch2[i];
        ++i;
        ++j;
    }

    return ret;
}

int main()
{
    cout << connect("hello, ", "world!") << endl;
    cout << string("hello, ") + string("world!") << endl;
    return 0;
}