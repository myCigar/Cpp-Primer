#include "ex7_41.h"

int main()
{
    Sales_data("BookNumber2", 5, 23.9);
    std::cout << std::endl;
    Sales_data();
    std::cout << std::endl;
    Sales_data("BookNumber3");
    std::cout << std::endl;
    Sales_data(std::cin);

    return 0;
}