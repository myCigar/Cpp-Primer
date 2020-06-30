#include <iostream>

int main()
{
	int i = 0;
	
	// 非法: double类型的指针不能指向int类型的变量 
	double *dp = &i;
	// 非法: 虽然i此时为0, 看起来好像是给ip复制空指针。
	// 实际上, i已经初始化了，其类型为int，这里将int类型赋值给int *类型，显然不可以。
	// 这里i与字面值0还是有区别的，一个已经在内存中了，一个不在。 
	int *ip = i;
	// 合法 
	int *p = &i
	
	return 0; 
} 
