#include <iostream>

using namespace std;

int main()
{
	 
	bool someValue = false;
	int x = 0, y = 0;
	
	// ��Ϊ�������ȼ����, ��ʽ�ȼ���(someValue ? ++x, ++y : --x), --y;
	// �ȼ���, (someValue ? ++x, ++y : --x); --y;
	// someValue = trueʱ, ++x, ++y, --y.
	// someValue = falseʱ, --x, --y. 
	someValue ? ++x, ++y : --x, --y;
	cout << x << endl;
	cout << y << endl;
	return 0;
}
