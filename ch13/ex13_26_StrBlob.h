#ifndef STR_BLOB_H_
#define STR_BLOB_H_

#include <memory>
#include "ex13_26_StrBlobPtr.h"

class StrBlobPtr;
class StrBlob {
    friend class StrBlobPtr;
public:
    StrBlob(const StrBlob& sb) : data(std::make_shared<vector<string>>(*sb.data));
    StrBlob& operator=(const StrBlob& sb) : data(std::make_shared<vector<string>>(*sb.data));
    StrBlobPtr begin() { return StrBlobPtr(*this); }
    StrBlobPtr end() { return StrBlobPtr(*this, data->size()); }
    void push_back(const std::string s) { data->push_back(s); }
private:
    std::shared_ptr<std::vector<std::string>> data;
};

#endif