#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str, preStr = "";
	string maxStr;
	unsigned maxCnt = 1, curCnt = 1;
	while (cin >> str)
	{
		if (str == preStr)
		{
			++curCnt;
			if (curCnt > maxCnt)
			{
				maxStr = str;
				maxCnt = curCnt;
			}
		}
		else
		{
			curCnt = 1;
		}
		preStr = str;
	}
	if (maxCnt > 1)
		cout << maxStr << " : " << maxCnt << endl;
	else
		cout << "任何单词都没有连续出现过" << endl;
	
	return 0;
}
