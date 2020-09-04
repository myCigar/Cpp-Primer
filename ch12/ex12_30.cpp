#include "TextQuery.h"
#include "QueryResult.h"
#include <iostream>

using namespace std;

void runQueries(ifstream &infile)
{
    TextQuery tq(infile);

    while (true)
    {
        cout << "Enter word to look for, or q to quit: ";
        string s;
        if (!(cin >> s) || s == "q")
            break;
        tq.query(s).print();
    }
}

int main()
{
    ifstream infile("text.txt");

    runQueries(infile);

    infile.close();
    return 0;
}