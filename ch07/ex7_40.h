#ifndef EX7_40_H_
#define EX7_40_H_

#include <string>

class Book {
public:
    Book(std::string tp, double pce, unsigned flo, std::string bNo) : type(tp), price(pce), floor(flo), bookNo(bNo) { }
private:
    std::string type;
    double price;
    unsigned floor;
    std::string bookNo;
};

#endif