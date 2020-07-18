#include <iostream>
#include <initializer_list>

using namespace std;

int sum(initializer_list<int> arr)
{
    int res = 0;
    for (auto beg = arr.begin(); beg != arr.end(); ++beg)
    {
        res += *beg;
    }
    return res;
}


int main()
{
    cout << sum({10, 20}) << endl;
    return 0;
}