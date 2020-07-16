#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s = "word";
	// 因为'+'优先级高于'=='，所以先执行s + s[s.size() - 1]. 
	//string p1 = s + s[s.size() - 1] == 's' ? "" : "s";
	// 应在条件运算符中添加括号，调整下运算顺序，如下 
	string p2 = s + ((s[s.size() - 1] == 's') ? "" : "s");
	cout << p2 << endl;
	return 0;
}
