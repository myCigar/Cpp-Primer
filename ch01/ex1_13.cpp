#include <iostream>

int main()
{
	int sum = 0;
	// ex1_9
	for (int val = 50; val <= 100; ++val)
		sum += val;
	std::cout << sum << std::endl;
	
	// ex1_10
	for (int val = 10; val >= 0; --val)
		std::cout << val << " ";
	std::cout << std::endl;
	
	// ex1_11
	int v1, v2;
	int max, min;
	std::cout << "Please enter two numbers:";
	for (std::cin >> v1 >> v2; v1 <= v2; ++v1)
		std::cout << v1 << " ";
	std::cout << std::endl;
	
	return 0;
} 
