#include "TextQuery.h"
#include "QueryResult.h"
#include <sstream>
#include <iostream>

TextQuery::TextQuery(std::ifstream &inf) : text(new vector<string>)
{
    string line;
    while (getline(inf, line))
    {
        
        text->push_back(line);
        istringstream is(line);
        string word;
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
            auto iter = wordCounts[word];
            if (!iter)   // first meet word, need new set<int> to a shared_ptr
            {
                iter.reset(new set<int>);
            }
            iter->insert(text->size());
        }
    }
}

QueryResult TextQuery::query(const string &objWord) const
{
    shared_ptr<set<int>> nodata(new set<int>);
    cout << "111" << endl;
    auto iter = wordCounts.find(objWord);
    if (iter == wordCounts.end())
        return QueryResult(objWord, text, nodata);
    else
        return QueryResult(objWord, text, iter->second);
}