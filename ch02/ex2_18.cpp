#include <iostream>

int main()
{
	int a = 10, c = 20;
	int *b = &a;
	// b指向a 
	std::cout << *b << std::endl;
	// 更改指针的值 
	b = &c;
	std::cout << *b << std::endl;
	// 更改所指对象的值 
	*b = 30;
	std::cout << c << std::endl;
	
	return 0;	
}
