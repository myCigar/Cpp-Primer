#include <iostream>
#include <string>

using namespace std;

int main()
{
	// ��ȡһ���� 
	string str;
	getline(cin, str);
	cout << str << endl;
	
	// ���ζ���һ���� 
	string str2;
	while(cin >> str2)
	{
		cout << str2 << endl;
	}
	return 0;
}
