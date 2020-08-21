#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <functional>

using namespace std;
using namespace placeholders;

bool check_size(const int &i, const string &str)
{
    return i > str.size();
}

int main()
{
    vector<int> lengths = {1, 2, 3, 4, 5};
    string word = "hello";

    vector<int>::iterator iter = find_if(lengths.begin(), lengths.end(), bind(check_size, _1, word));
    if (iter != lengths.end())
    {
        cout << *iter << endl;
    }  
    else
    {
        cout << "Not found!" << endl;
    }

    return 0;
}