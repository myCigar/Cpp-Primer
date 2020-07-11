#include <iostream>
using namespace std;

/* Ò»Ñש */
int main()
{
	string str("Hello, Jiahao");
	for (char &c: str)
	{
		c = 'X';
	}
	cout << str << endl;
	return 0;
} 
