#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

bool isLongerThanN(const string &str)
{
    return str.size() >= 5;
}

void PrintVector(vector<string>::const_iterator begin, vector<string>::const_iterator end)
{
    while (begin != end)
    {
        std::cout << *begin++ << " ";
    }
    std::cout << std::endl;
}

int main()
{
    vector<string> words;
    string word;
    while (cin >> word)
    {
        words.push_back(word);
    }

    vector<string>::iterator end = partition(words.begin(), words.end(), isLongerThanN);
    PrintVector(words.cbegin(), end);

    return 0;
}