#include <iostream>
using namespace std;

int main()
{
	string str("Hello, Jiahao!!!");
	for (auto c : str)
	{
		if (!ispunct(c))
			cout << c;
	}
	cout << endl;
	return 0;
} 
