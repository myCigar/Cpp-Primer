#include "Sales_item.h"
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

bool isIsbnSmaller(const Sales_item &item1, const Sales_item &item2)
{
    return item1.isbn() < item2.isbn();
}

void PrintVector(const std::vector<Sales_item> &items)
{
    for (const Sales_item &item : items)
    {
        std::cout << item.isbn() << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<Sales_item> items;
    Sales_item item;
    while (std::cin >> item)
    {
        items.push_back(item);
    }

    std::stable_sort(items.begin(), items.end(), isIsbnSmaller);
    PrintVector(items);

    return 0;
}