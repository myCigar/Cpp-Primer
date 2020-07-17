#include <iostream>

using namespace std;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	unsigned spaceCnt = 0, tabCnt = 0, newLineCnt = 0;
	char ch;
	while (cin >> std::noskipws >> ch)
	{
		switch (ch)
		{
			case 'a':
			case 'A':
				++aCnt;
				break;
			case 'e':
			case 'E':
				++eCnt;
				break;
			case 'i':
			case 'I':
				++iCnt;
				break;
			case 'o':
			case 'O':
				++oCnt;
				break;
			case 'u':
			case 'U':
				++uCnt;
				break;
			case ' ':
				++spaceCnt;
				break;
			case '\t':
				++tabCnt;
				break;
			case '\n':
				++newLineCnt;
				break;
			default:
				break;
		}
	}
	cout << "a : " << aCnt << endl;
	cout << "e : " << eCnt << endl;
	cout << "i : " << iCnt << endl;
	cout << "o : " << oCnt << endl;
	cout << "u : " << uCnt << endl;
	cout << "space : " << spaceCnt << endl;
	cout << "tab : " << tabCnt << endl;
	cout << "newLine : " << newLineCnt << endl;
	
	return 0;
}
