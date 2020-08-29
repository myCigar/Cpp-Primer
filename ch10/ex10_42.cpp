#include <algorithm>
#include <list>
#include <string>
#include <iostream>

void PrintList(const std::list<std::string> &words)
{
    for (const std::string &word : words)
    {
        std::cout << word << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::list<std::string> words;
    std::string word;
    while (std::cin >> word)
    {
        words.push_back(word);
    }

    words.sort();
    PrintList(words);
    words.unique();
    PrintList(words);

    return 0;
}