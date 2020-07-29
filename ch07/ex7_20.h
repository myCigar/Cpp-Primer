#ifndef EX7_20_H_
#define EX7_20_H_

#include <iostream>
#include <string>

class Sales_data {
friend void add(Sales_data &item1, const Sales_data &item2);

public:
    Sales_data() = default;
    Sales_data(const std::string &s) : bookNo(s) { }
    Sales_data(const std::string &s, unsigned n, double price) : bookNo(s), units_sold(n), revenue(n*price) { }
    Sales_data(std::istream &c) { read(c); }
    std::istream& read(std::istream &cin);
    void print() const;
    std::string isbn() const {return bookNo;}

private:
    std::string bookNo; 
    unsigned units_sold = 0;
    double revenue = 0.0;
    std::istream& read(std::istream &cin) 
    { 
        return cin >> bookNo >> units_sold >> revenue; 
    }
    void print() const 
    { 
        std::cout << "Book number : " << bookNo << std::endl
         << "Units sold : " << units_sold << std::endl
         << "Revenue : " << revenue << std::endl; 
    }
};

void add(Sales_data &item1, const Sales_data &item2)
{
    if (item1.isbn() == item2.isbn())
    {
        item1.units_sold += item2.units_sold;
        item1.revenue += item2.revenue;
    }
}

#endif