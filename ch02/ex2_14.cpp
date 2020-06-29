
#include <iostream>

int main()
{
	int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i)
		// 此时内层作用域覆盖了外层作用域 
		// 从0累加至10 
		sum += i;
	// 此时i为100，内层作用域不再有效 
	std::cout << i << " " << sum << std::endl;
	return 0;
}
