// 形参和局部变量本质上是一样的，都是栈上开辟的内存空间，在函数结束时被释放。
// 只是形参比局部变量多了一个作用，担任着函数调用者与被调函数信息传递的接口。
// 局部静态变量与形参和局部变量不同的是，它是在堆上开辟的内存，
// 局部静态变量只有在函数第一次被调用时才被初始化，同时在程序结束时才被释放。

#include <iostream>

using namespace std;

int fact(int val)
{
	static unsigned count_calls = 0;
	++count_calls;
	
	int res = 1;
	while (val > 1)
	{
		res *= val;
		--val;
	}
	
	cout << "This function has been called " << count_calls << " times." << endl;
	
	return res;
}

int main()
{
	int val;
	while (cin >> val)
	{
		cout << "The fact of " << val << " is " << fact(val) << endl;
	}
	return 0;
}
