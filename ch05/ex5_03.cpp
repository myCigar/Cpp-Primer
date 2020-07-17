#include <iostream>

using namespace std;

int main()
{
	int i = 50, sum = 0;
	while(i != 100)
	{
		sum += i, ++i;
	}
	cout << sum << endl;
	return 0;
}
