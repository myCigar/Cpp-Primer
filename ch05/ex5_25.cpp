#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
	int a, b;
	while (cin >> a >> b) 
	{
		try {
			if (b == 0)
			{
				throw logic_error("The divisor cannot be zero.");
			}
			else 
			{
				cout << (a / b) << endl;
				break;
			}
		}
		catch (logic_error err) {
			cout << err.what() << endl;
		}
	}
	
	
	return 0;
}
