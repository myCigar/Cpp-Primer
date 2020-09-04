#include <string>
#include <vector>
#include <set>
#include <map>
#include <fstream>
#include <memory>

using std::set;
using std::string;
using std::vector;
using std::map;

class QueryResult;

class TextQuery {
public:
    TextQuery(std::ifstream &inf);
    QueryResult query(const string &) const;
private:
    std::shared_ptr<vector<string>> text;
    std::shared_ptr<map<string, set<int>>> wordCounts;
};

class QueryResult {
public:
    QueryResult(std::shared_ptr<vector<string>> pText, 
        std::shared_ptr<map<string, set<int>>> pC) : text(pText), wordCounts(pC) { }
    void print();
private:
    std::shared_ptr<vector<string>> text;
    std::shared_ptr<map<string, set<int>>> wordCounts;
};