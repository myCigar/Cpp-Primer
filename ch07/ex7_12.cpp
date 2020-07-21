#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo; 
    unsigned units_sold = 0;
    double revenue = 0.0;

    Sales_data() = default;
    Sales_data(const std::string &s) : bookNo(s) { };
    Sales_data(const std::string &s, unsigned n, double price) : bookNo(s), units_sold(n), revenue(n*price) { };
    Sales_data(std::istream &c) { read(c); };

    std::istream& read(std::istream &cin);
    void print() const;
    
};

std::istream& Sales_data::read(std::istream &cin)
{
    return cin >> bookNo >> units_sold >> revenue;
}

void Sales_data::print() const
{
    std::cout << "Book number : " << bookNo << std::endl
         << "Units sold : " << units_sold << std::endl
         << "Revenue : " << revenue << std::endl;
}


int main()
{
    Sales_data item1;
    Sales_data item2("book-2019210867");
    Sales_data item3("book-2019210867", 5, 23.0);
    Sales_data item4(std::cin);

    item1.print();
    std::cout << std::endl;
    item2.print();
    std::cout << std::endl;
    item3.print();
    std::cout << std::endl;
    item4.print();

    return 0;
}