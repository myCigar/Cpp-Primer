#ifndef CPPPRIMER_CH13_QUERY_RESULT_H_
#define CH12_QUERY_RESULT_H_

#include <memory>
#include <string>
#include <map>
#include <set>
#include "ex13_42_StrVec.h"

using namespace std;

class QueryResult {
public:
    QueryResult(string _objWord,
                shared_ptr<StrVec> _text,
               shared_ptr<set<int>> _lines) : objWord(_objWord), text(_text), lines(_lines) { }
    void print();
private:
    std::string objWord;
    std::shared_ptr<StrVec> text;
    std::shared_ptr<set<int>> lines;
};

#endif  