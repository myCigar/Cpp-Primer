#include <iostream>

using namespace std;

int fact(int val)
{
	int res = 1;
	while (val > 1)
	{
		res *= val;
		--val;
	}
	
	return res;
}

int main()
{
	int val;
	cin >> val;
	cout << fact(val) << endl;
	return 0;
}
