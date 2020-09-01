#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <sstream>

using std::string;
using std::map;
using std::ifstream;

const string &transform(const string &word, map<string, string> &ruleMap)
{
    return ruleMap[word];
}

map<string, string> buildMap(ifstream &r)
{
    string first;
    string second;
    map<string, string> ruleMap;
    while (r >> first && std::getline(r, second))
    {
        if (second.size() > 1)
        {
            ruleMap[first] = second.substr(1);
        } 
    }
    return ruleMap;
}

void word_transform(ifstream &txtStream, ifstream &ruleStream)
{
    map<string, string> ruleMap = buildMap(ruleStream);
    string line;
    while (std::getline(txtStream, line))
    {
        std::istringstream stream(line);
        string word;
        while (stream >> word)
        {
            std::cout << transform(word, ruleMap) << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    ifstream txtStream("word.txt");
    ifstream ruleStream("rules.txt");
    
    word_transform(txtStream, ruleStream);
    
    txtStream.close();
    ruleStream.close();

    return 0;
}