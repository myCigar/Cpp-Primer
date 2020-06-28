#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item currItem, item;
	if (std::cin >> currItem)
	{
		int cnt = 1;
		while (std::cin >> item)
		{
			if (currItem.isbn() == item.isbn())
				++cnt;
			else
			{
				std::cout << currItem.isbn() << " occurs " 
						  << cnt << " times.";
				currItem = item;
				cnt = 1;
			}
		}
		std::cout << currItem.isbn() << " occurs " 
				  << cnt << " times.";
	}
	return 0;
}
