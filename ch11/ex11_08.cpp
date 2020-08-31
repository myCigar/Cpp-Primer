#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>

using std::string;
using std::vector;
using std::set;

int main()
{
    vector<string> vec_words;
    set<string> set_words;
    string word;
    while (std::cin >> word)
    {
        if (std::find(vec_words.begin(), vec_words.end(), word) 
            == vec_words.end())
        {
            vec_words.push_back(word);
        }
        set_words.insert(word);
    }

    for (const string str : vec_words)
    {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    for (const string str : set_words)
    {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}