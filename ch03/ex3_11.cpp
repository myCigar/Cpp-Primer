#include <iostream>
using namespace std;

// c��������const char 
int main()
{
	const string str("Hello, Jiahao!!!");
	for (auto &c : str)
	{
		cout << c;
	}
	return 0;
} 
