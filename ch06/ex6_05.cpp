#include <iostream>

using namespace std;

double abs(double val)
{
	return (val > 0) ? val : -val;
}

int main()
{
	double val;
	cin >> val;
	cout << abs(val) << endl;
	return 0;
}
