#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    string::size_type sz = 6;
    vector<string> words;
    string word;
    while (cin >> word)
    {
        words.push_back(word);
    }

    unsigned count = count_if(words.begin(), words.end(), [sz](const string &str) -> int { return str.size() >= sz; });

    cout << count << endl;

    return 0;
}