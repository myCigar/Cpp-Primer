#ifndef CH12_TEXT_QUERY_H_
#define CH12_TEXT_QUERY_H_

#include <fstream>
#include <string>
#include <memory>
#include <map>
#include <vector>
#include <set>
#include "ex13_21_QueryResult.h"

using namespace std;

class TextQuery {
public:
    TextQuery(std::ifstream &inf);
    TextQuery(const TextQuery&);
    TextQuery& operator=(const TextQuery&);
    ~TextQuery();
    QueryResult query(const string &) const;
private:
    std::shared_ptr<vector<string>> text;
    map<string, std::shared_ptr<set<int>>> wordCounts;
};

#endif