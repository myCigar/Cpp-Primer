#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <list>

void PrintVector(const std::vector<std::string> &words)
{
    for (const std::string &word : words)
    {
        std::cout << word << " ";
    }
    std::cout << std::endl;
}

void PrintList(const std::list<std::string> &words)
{
    for (const std::string &word : words)
    {
        std::cout << word << " ";
    }
    std::cout << std::endl;
}

bool check_equal(const std::string &str1, const std::string &str2)
{
    return str1 == str2;
}

int main()
{
    std::vector<std::string> words;
    std::list<std::string> lists;
    std::string word;
    while (std::cin >> word)
    {
        words.push_back(word);
    }

    std::stable_sort(words.begin(), words.end());
    PrintVector(words);
    auto end_unique = std::unique_copy(words.begin(), words.end(), std::back_inserter(lists), check_equal);
    PrintList(lists);

    return 0;
}