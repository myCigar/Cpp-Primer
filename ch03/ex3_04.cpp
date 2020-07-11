#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str, str2;
	getline(cin, str);
	getline(cin, str2);
	// 直接比较大小, 输出较大的字符串 
	if (str > str2)
		cout << str << endl;
	else
		cout << str2 << endl;
	
	// 输出长度较大的字符串 
	if (str.size() > str2.size())
		cout << str << endl;
	else 
		cout << str2 << endl;
			
	return 0;
}
