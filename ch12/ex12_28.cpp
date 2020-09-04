#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int main()
{
    vector<string> text;
    map<string, set<int>> wordCounts;
    fstream f;
    f.open("text.txt");
    
    string line, word;
    while (getline(f, line))
    {
        text.push_back(line);
        istringstream is(line);
        while (is >> word)
        {
            if (word.size() > 1)
            {
                if(ispunct(word[0]))
                {
                    word = word.substr(1);
                }
                if (ispunct(word[word.size()-1]))
                {
                    word = word.substr(0, word.size()-1);
                }
            }
            wordCounts[word].insert(text.size());
        }
    }

    string queryWord;
    cout << "Please enter query word: ";
    cin >> queryWord;

    auto iter = wordCounts.find(queryWord);
    cout << iter->first << " occurs " << iter->second.size() << " times" << endl;

    for (int i : iter->second)
    {
        cout << "(line " << i << ") " << text[i-1] << endl;
    }

    return 0;
}