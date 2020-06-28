#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	// 0-201-78345-X 5 45.00
	// 0-201-78346-X 8 65.00
 	std::cout << item1 << std::endl;
	std::cout << item2 << std::endl;
	return 0;
}
