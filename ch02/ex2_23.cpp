#include <iostream>

/*
 * 无法判断是否指向合法的对象 
 * 比如下面的例子，b初始为变量a的地址，输出*(b+1)也可以正确打印
 * 但是*(b+1)实际上指向了非法对象 
 * 所以仅仅根据指向的地址，判断不了其位置是否合法。 
 */

int main()
{
	int a = 10;
	int *b = &a;
	
	std::cout << *(b + 1) << std::endl;
	
	return 0;
}
