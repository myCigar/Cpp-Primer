#include <iostream>

using namespace std;

void exchange_ptr(int *p1, int *p2)
{
    int *pTmp = p1;
    p1 = p2;
    p2 = p1;
}