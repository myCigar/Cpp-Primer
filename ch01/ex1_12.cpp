#include <iostream>

int main()
{
	int sum = 0;
	// ��-100�ۼ���100��sum���Ϊ0 
	for (int val = -100; val <= 100; ++val)
		sum += val;	
	std::cout << sum << std::endl;
	return 0;	
} 
