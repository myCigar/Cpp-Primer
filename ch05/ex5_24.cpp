#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (b == 0)
	{
		throw logic_error("The divisor cannot be zero.");
	}
	else 
	{
		cout << (a / b) << endl;
	}
	return 0;
}
