#include <iostream>

int main()
{
	// 2M: "\062\115"
	// 新行'\n' 
	// 制表符 '\t'
	std::cout << "\062\115\n";
	std::cout << "\062\t\115\n";
	
	return 0;
}
