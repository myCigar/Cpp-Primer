#include <iostream>

int main()
{
	int i, &ri = i;
	i = 5;
	ri = 10;
	// ri �� i��Ϊ0 
	std::cout << i << " " << ri << std::endl;
	return 0;
}
