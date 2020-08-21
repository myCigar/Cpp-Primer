#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <functional>

using namespace std;
using namespace placeholders;

bool check_size(const string &str, string::size_type sz)
{
    return str.size() >= sz;
}

int main()
{
    string::size_type sz = 6;
    vector<string> words;
    string word;
    while (cin >> word)
    {
        words.push_back(word);
    }

    unsigned count = count_if(words.begin(), words.end(), bind(check_size, _1, sz));

    cout << count << endl;

    return 0;
}