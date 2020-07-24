#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units;
    double revenue;
};

int main()
{
    Sales_data item = {"Book-2019210867", 10, 15.9};

    return 0;
}