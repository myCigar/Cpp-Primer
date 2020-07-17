#include <iostream>
#include <string>

using namespace std;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
	char ch, preChar = '\0';
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
				if (preChar == 'f') ++fiCnt;
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
			case 'f':
				if (preChar == 'f') ++ffCnt;
				break;
			case 'l':
				if (preChar == 'f') ++flCnt;
				break;
			default:
				break;
		}
		preChar = ch;
	}
	cout << "a : " << aCnt << endl;
	cout << "e : " << eCnt << endl;
	cout << "i : " << iCnt << endl;
	cout << "o : " << oCnt << endl;
	cout << "u : " << uCnt << endl;
	cout << "ff : " << ffCnt << endl;
	cout << "fl : " << flCnt << endl;
	cout << "fi : " << fiCnt << endl;

	return 0;
}
