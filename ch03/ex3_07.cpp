#include <iostream>
using namespace std;

/* һ�� */
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
