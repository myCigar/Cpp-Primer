#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

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

    std::sort(words.begin(), words.end());
    PrintVector(words);
    auto end_unique = std::unique(words.begin(), words.end());
    PrintVector(words);
    words.erase(end_unique, words.end());
    PrintVector(words);

    return 0;
}