#include <iostream>

using namespace std;

int main()
{
	 
	bool someValue = false;
	int x = 0, y = 0;
	
	// 因为逗号优先级最低, 下式等价于(someValue ? ++x, ++y : --x), --y;
	// 等价于, (someValue ? ++x, ++y : --x); --y;
	// someValue = true时, ++x, ++y, --y.
	// someValue = false时, --x, --y. 
	someValue ? ++x, ++y : --x, --y;
	cout << x << endl;
	cout << y << endl;
	return 0;
}
