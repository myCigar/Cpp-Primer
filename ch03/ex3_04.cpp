#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str, str2;
	getline(cin, str);
	getline(cin, str2);
	// ֱ�ӱȽϴ�С, ����ϴ���ַ��� 
	if (str > str2)
		cout << str << endl;
	else
		cout << str2 << endl;
	
	// ������Ƚϴ���ַ��� 
	if (str.size() > str2.size())
		cout << str << endl;
	else 
		cout << str2 << endl;
			
	return 0;
}
