#include <iostream>
#include <algorithm>
#include <string>
#include <map>

std::string strip(std::string word)
{
    word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());
    return word;
}

int main()
{
    std::map<std::string, unsigned> word_count;
    std::string word;
    while (std::cin >> word) 
    {
        for (const char &ch : word)
        {
            std::tolower(ch);
        }

        ++word_count[strip(word)];
    }

    for (const auto &w : word_count)
    {
        std::cout << w.first << " occurs " << w.second 
             << ((w.second > 1) ? " times" : " time") << std::endl;
    }
    
    return 0;
}