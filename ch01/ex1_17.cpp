#include <iostream>

// ȫ�����ʱ����ֱ�Ӵ�ӡ�������Լ����ֵĴ���
// û���ظ�ֵʱ�����δ�ӡÿ�����ֳ��ֵĴ��� 

int main()
{
	int currVal = 0, val = 0;
	if (std::cin >> currVal)
	{
		int cnt = 1;
		while (std::cin >> val)
		{
			if (val == currVal)
				++cnt;
			else
			{
				std::cout << currVal << " occurs "
						  << cnt << " times" << std::endl;
				currVal = val;
				cnt = 1;
			} 
		}
		std::cout << currVal << " occurs " 
		          << cnt << " times" << std::endl;
	}
	return 0;
}
