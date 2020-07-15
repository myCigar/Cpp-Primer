#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	if (a > b && b > c && c > d)
		cout << "Right" << endl;
	else
		cout << "Error" << endl;
	return 0;
}
