#include "QueryResult.h"
#include <iostream>

using namespace std;

void QueryResult::print()
{
    cout << objWord << " occurs " << lines->size() << " times" << endl;

    for (int i : *lines)
    {
        cout << "(line " << i << ") " << (*text)[i] << endl;
    }
}