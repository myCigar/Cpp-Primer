#include <iostream>

using namespace std;

int main()
{
	int ia[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};
	
	// 版本1：范围for 
	for (int (&r)[4]: ia)
	for (int c : r)
		cout << c << " ";
	cout << endl;
	
	// 版本2：普通for，使用下标
	for (int i = 0; i != 3; ++i)
	for (int j = 0; j != 4; ++j)
		cout << ia[i][j] << " ";
	cout << endl;	
	
	// 版本3：普通for，使用指针
	for (int (*r)[4] = begin(ia); r != end(ia); ++r)
	for (int *c = begin(*r); c != end(*r); ++c)
		cout << *c << " ";
	cout << endl; 

	return 0;
}
