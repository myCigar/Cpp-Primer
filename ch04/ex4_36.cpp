#include <iostream>

using namespace std;

int main()
{
	int i = 2;
	double d = 3.5;
	i *= static_cast<int>(d);
	cout << i << endl;
	return 0;
}
