#include <iostream>
using namespace std;

int main()
{
	string str("Hello, Jiahao");
	for (auto &c : str)
	{
		c = 'X';
	}
	cout << str << endl;
	return 0;
} 
