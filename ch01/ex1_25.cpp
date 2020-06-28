#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item total, item;
	if (std::cin >> total)
	{
		while (std::cin >> item)
		{
			if (total.isbn() == item.isbn())
				total += item;
			else
			{
				std::cout << total << std::endl;
				total = item;
			}
		}
		std::cout << total << std::endl;
	}
	else 
	{
		std::cerr << "No data !?" << std::endl;
		return -1;
	}
	return 0;
}
