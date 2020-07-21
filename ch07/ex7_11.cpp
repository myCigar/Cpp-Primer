#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo; 
    unsigned units_sold = 0;
    double revenue = 0.0;

    Sales_data() = default;
    Sales_data(const std::string &s) : bookNo(s) { };
    Sales_data(const std::string &s, unsigned n, double price) : bookNo(s), units_sold(n), revenue(n*price) { };
};

std::ostream& print(std::ostream &cout, const Sales_data &item)
{
    cout << "bookNo : " << item.bookNo << std::endl
         << "units_sold : " << item.units_sold << std::endl
         << "revenue : " << item.revenue << std::endl;
    
    return cout;
}


int main()
{
    Sales_data item1;
    Sales_data item2("book-2019210867");
    Sales_data item3("book-2019210867", 5, 23.0);

    print(std::cout, item1);
    std::cout << std::endl;
    print(std::cout, item2);
    std::cout << std::endl;
    print(std::cout, item3);
}