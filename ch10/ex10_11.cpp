#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

void PrintVector(const std::vector<std::string> &words)
{
    for (const std::string &word : words)
    {
        std::cout << word << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<std::string> words;
    std::string word;
    while (std::cin >> word)
    {
        words.push_back(word);
    }

    std::stable_sort(words.begin(), words.end(), isShorter);
    PrintVector(words);

    return 0;
}