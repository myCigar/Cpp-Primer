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

void add(Sales_data &item1, const Sales_data &item2)
{
    if (item1.bookNo == item2.bookNo)
    {
        item1.units_sold += item2.units_sold;
        item1.revenue += item2.revenue;
    }
}


int main()
{
    Sales_data total(std::cin);
    if (!total.bookNo.empty())
    {
        std::istream &is = std::cin;
        while (is)
        {
            Sales_data trans(is);
            if (total.bookNo == trans.bookNo)
            {
                add(total, trans);
            }
            else
            {
                total.print();
                total = trans;
            }
        }
        total.print();
    }
    else
    {
        std::cerr << "No data ?!" << std::endl;
    }
    return 0;
}