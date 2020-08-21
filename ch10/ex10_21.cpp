#include <iostream>

using namespace std;

int main()
{
    int i = 5;
    auto check_zero = [&i]() -> bool { return i != 0 ? i-- : i; };

    while (check_zero()) 
    {
        cout << i << endl;
    }
    cout << i << endl;

    return 0;
}