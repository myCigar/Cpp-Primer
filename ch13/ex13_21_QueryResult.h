#ifndef CH12_QUERY_RESULT_H_
#define CH12_QUERY_RESULT_H_

#include <memory>
#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;

class QueryResult {
public:
    QueryResult(std::string _objWord, 
        std::shared_ptr<vector<string>> _text, 
        std::shared_ptr<set<int>> _lines) : objWord(_objWord), text(_text), lines(_lines) { }
    void print();
private:
    std::string objWord;
    std::shared_ptr<vector<string>> text;
    std::shared_ptr<set<int>> lines;
};

#endif