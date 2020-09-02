#ifndef CH_12_STRBLOB_H_
#define CH_12_STRBLOB_H_

#include <string>
#include <vector>
#include <initializer_list>
#include <memory>
#include <exception>

class StrBlob {
public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob() : data(std::make_shared<std::vector<std::string>>()) { }
    StrBlob(std::initializer_list<std::string> i1) : 
        data(std::make_shared<std::vector<std::string>>(i1)) { }
    size_type size() const { return data->size(); };
    bool empty() const { return data->empty(); };
    // Add or remove
    void push_back(const std::string &t) { data->push_back(t); };
    void pop_back() const { data->pop_back(); };
    // element visit
    std::string &front() const;
    std::string &back() const;
private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const
    {
        if (i > data->size())
            throw std::out_of_range(msg);
    }
};

#endif