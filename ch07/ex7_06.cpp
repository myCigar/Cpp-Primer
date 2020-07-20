#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo; 
    unsigned units_sold = 0;
    double revenue = 0.0;
};

std::istream& read(std::istream &cin, Sales_data &item)
{
    double price = 0.0;
    cin >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    
    return cin;
}

std::ostream& print(std::ostream &cout, const Sales_data &item)
{
    cout << "bookNo : " << item.bookNo << std::endl
         << "units_sold : " << item.units_sold << std::endl
         << "revenue : " << item.revenue;
    
    return cout;
}

void add(Sales_data &item1, const Sales_data &item2)
{
    if (item1.bookNo == item2.bookNo)
    {
        item1.units_sold += item2.units_sold;
        item1.revenue += item2.revenue;
    }
}