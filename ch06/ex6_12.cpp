#include <iostream>

using namespace std;

void exchange_vals(int &p1, int &p2)
{
    int tmp = p1;
    p1 = p2;
    p2 = tmp;
}

int main()
{
    int a = 5, b = 10;
    exchange_vals(a, b);
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    return 0;
}