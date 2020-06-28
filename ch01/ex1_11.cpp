#include <iostream>

int main()
{
	int v1, v2;
	int max, min;
	
	std::cout << "Please enter two numbers:";
	std::cin >> v1 >> v2;
	
	max = v1 > v2 ? v1 : v2;
	min = v1 < v2 ? v1 : v2;
	
	while (min <= max)
	{
		std::cout << min << std::endl;
		++min;
	}
	
	return 0;
}
