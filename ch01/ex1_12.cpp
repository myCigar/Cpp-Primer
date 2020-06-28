#include <iostream>

int main()
{
	int sum = 0;
	// 从-100累加至100，sum结果为0 
	for (int val = -100; val <= 100; ++val)
		sum += val;	
	std::cout << sum << std::endl;
	return 0;	
} 
