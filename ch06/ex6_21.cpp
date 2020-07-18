#include <iostream>

using namespace std;

int compare(const int v1, const int *p)
{
    return v1 > *p ? v1 : *p;
}

int main()
{
    int v1 = 10, v2 = 20;
    cout << compare(v1, &v2) << endl;
    return 0;
}