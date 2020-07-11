#include <iostream>
#include <string>

using namespace std;

int main()
{
	// 读取一整行 
	string str;
	getline(cin, str);
	cout << str << endl;
	
	// 依次读入一个词 
	string str2;
	while(cin >> str2)
	{
		cout << str2 << endl;
	}
	return 0;
}
