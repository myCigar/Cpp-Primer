#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s = "word";
	// ��Ϊ'+'���ȼ�����'=='��������ִ��s + s[s.size() - 1]. 
	//string p1 = s + s[s.size() - 1] == 's' ? "" : "s";
	// Ӧ�������������������ţ�����������˳������ 
	string p2 = s + ((s[s.size() - 1] == 's') ? "" : "s");
	cout << p2 << endl;
	return 0;
}
