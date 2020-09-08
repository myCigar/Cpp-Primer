#ifndef CPPPRIMER_CH13_TEXT_QUERY_H_
#define CPPPRIMER_CH13_TEXT_QUERY_H_

#include <fstream>
#include <string>
#include <memory>
#include <map>
#include "ex13_42_StrVec.h"
#include "ex13_42_QueryResult.h"

using namespace std;

class TextQuery {
public:
    TextQuery(std::ifstream &inf);
    QueryResult query(const string &) const;
private:
    std::shared_ptr<StrVec> text;
    map<string, std::shared_ptr<set<int>>> wordCounts;
};

#endif