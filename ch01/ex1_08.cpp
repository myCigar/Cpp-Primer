#include <iostream>

int main()
{
	std::cout << "/*";  // 合法
	std::cout << "*/";  // 合法
	//std::cout << /* "*/" */;  // 不合法 
	std::cout << /* "*/" /* "/*" */;  // 合法 
	return 0;
}
