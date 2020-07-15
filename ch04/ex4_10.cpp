#include <iostream>

using namespace std;

int main()
{
	int a;
	while (cin >> a && a != 42)
	{
		cout << "Continue enter number" << endl;
	}
	cout << "a : " << a << endl;
	return 0;
}
