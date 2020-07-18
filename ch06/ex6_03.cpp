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
	cout << fact(5) << endl;
	return 0;
}
