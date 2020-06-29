#include <iostream>

int main()
{
	// 错误, 应该是直接此时input_value并没有被初始化，没有分配内存空间
	// int input_value;
	// std::cin >> input_value; 
	std::cin >> int input_value;
	
	// 正确, 先初始化i，再将double类型的3.14赋值给i, i为3 
	int i = {3.14};
	
	// 错误，初始化时不能连续等于，此时wage还没有被分配内存
	// double salary = 9999.99, wage = 9999.99; 
	double salary = wage = 9999.99;
	
	// 正确 
	int i = 3.14; 
	return 0;
}
