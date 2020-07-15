#include <iostream>

using namespace std;

int main()
{
	double dval; int ival; int *pi;
	//dval = ival = pi = 0; // 错误, int * 不能赋值给int
	pi = 0;
	dval = ival = 0;
	return 0;
}
