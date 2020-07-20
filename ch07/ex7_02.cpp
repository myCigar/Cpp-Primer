#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo; 
    unsigned units_sold = 0;
    double revenue = 0.0;

    std::istream& read(std::istream &cin);
    std::string isbn() const;
    void combine(const Sales_data &trans2);
    void print(std::ostream &cout) const;
};

std::istream& Sales_data::read(std::istream &cin)
{
    return cin >> bookNo >> units_sold >> revenue;
}

std::string Sales_data::isbn() const
{
    return bookNo;
}

void Sales_data::combine(const Sales_data &trans2)
{   
    units_sold += trans2.units_sold;
    revenue += trans2.revenue;
}


void Sales_data::print(std::ostream &cout) const
{
    cout << "Book number : " << bookNo << std::endl
         << "Units sold : " << units_sold << std::endl
         << "Revenue : " << revenue << std::endl;
}