#include "ex6_08.h"

int fact(int val)
{
    int res = 1;
    while (val > 1)
    {
        res *= val;
        --val;
    }

    return res;
}