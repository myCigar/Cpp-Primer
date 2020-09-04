#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<string, unsigned> word_count;
    string word;
    while (cin >> word) 
    {
        auto ret = word_count.insert({word, 1});
        if (!ret.second)
        {
            ++ret.first->second;
        }
    }

    for (const auto &w : word_count)
    {
        cout << w.first << " occurs " << w.second 
             << ((w.second > 1) ? " times" : " time") << endl;
    }
    
    return 0;
}