#include <iostream>

int main()
{
	int v1 = 0, v2 = 0;
	
	std::cin >> v1 >> v2;
	// 不合法，多了两个分号 
	std::cout << "The sum of " << v1
	          << " and " << v2
	          << " is " << v1 + v2 << std::endl;
	          
	return 0;
}
