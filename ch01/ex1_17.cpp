#include <iostream>

// 全部相等时，就直接打印该数字以及出现的次数
// 没有重复值时，依次打印每个数字出现的次数 

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
