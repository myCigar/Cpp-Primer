/*
 * 有区别，加0前缀表示以8进制来存值。
 * int month = 09会保存，因为9超出了8进制最大值。 
 */
 
#include <iostream>

int main()
{
	int month = 09;
	std::cout << month << std::endl;
	return 0;
} 
