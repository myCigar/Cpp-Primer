#include <iostream>

using namespace std;

void f()
{
    cout <<  "f() is called" << endl;
}

void f(int)
{
    cout << "f(int) is called" << endl;
}

void f(int, int)
{
    cout << "f(int, int) is called" << endl;
}

void f(double, double)
{
    cout << "f(double, double) is called" << endl;
}

int main()
{
    // ambiguous
    f(2.56, 42);

    // f(int)
    f(42);

    // f(int, int)
    f(42, 0);

    // f(double, double)
    f(2.56, 3.14);

    return 0;
}