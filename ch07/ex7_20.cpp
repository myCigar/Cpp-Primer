#include "ex7_20.h"

int main()
{
    Sales_data total;
    if (total.read(std::cin))
    {
        Sales_data trans;
        while (total.read(std::cin))
        {
            if (total.isbn() == trans.isbn())
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