
#include <iostream>

int main()
{
	int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i)
		// ��ʱ�ڲ������򸲸������������ 
		// ��0�ۼ���10 
		sum += i;
	// ��ʱiΪ100���ڲ�����������Ч 
	std::cout << i << " " << sum << std::endl;
	return 0;
}
