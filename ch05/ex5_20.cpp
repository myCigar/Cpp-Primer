#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str, preStr = "";
	bool not_repeat = true;
	while (cin >> str)
	{
		if (str == preStr)
		{
			cout << str << " repeated" << endl;
			not_repeat = false;
			break;
		}
		preStr = str;
	}	
	if (not_repeat)
		cout << "All words have not repeated." << endl;
	
	return 0;
} 
