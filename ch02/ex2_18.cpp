#include <iostream>

int main()
{
	int a = 10, c = 20;
	int *b = &a;
	// bָ��a 
	std::cout << *b << std::endl;
	// ����ָ���ֵ 
	b = &c;
	std::cout << *b << std::endl;
	// ������ָ�����ֵ 
	*b = 30;
	std::cout << c << std::endl;
	
	return 0;	
}
