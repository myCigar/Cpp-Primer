#include "QueryResult.h"
#include <iostream>

using namespace std;

void QueryResult::print()
{
    if (lines->size() == 0)
    {
        cout << "Not found!" << endl;
        return;
    }

    cout << objWord << " occurs " << lines->size() << " times" << endl;

    for (int i : *lines)
    {
        cout << "(line " << i << ") " << (*text)[i-1] << endl;
    }
}