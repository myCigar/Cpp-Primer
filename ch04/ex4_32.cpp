#include <iostream>

using namespace std;

int main()
{
	 
	constexpr int size = 5;
	int ia[size] = {1, 2, 3, 4, 5};
	// ix和ptr只需判断其中一个就可以实现遍历ia数组, 功能相同
	// 不同的是, ix使用整数, ptr使用指针 
	for (int *ptr = ia, ix = 0; 
		ix != size && ptr != ia+size; ++ix, ++ptr)
		{
			;
		}
	return 0;
}
