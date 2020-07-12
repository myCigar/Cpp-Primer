#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string str1 = "hello1";
	string str2 = "hello2";
	if (str1 < str2)
		cout << "str1 < str2" << endl;
	else if (str1 == str2)
		cout << "str1 == str2" << endl;
	else
		cout << "str1 > str2";
		
	const char cstr1[] = {'h', 'e', 'l', 'l', 'o', '1', '\0'};
	const char cstr2[] = {'h', 'e', 'l', 'l', 'o', '2', '\0'};
	if (strcmp(cstr1, cstr2) < 0)
		cout << "cstr1 < cstr2" << endl;
	else if (strcmp(cstr1, cstr2) == 0)
		cout << "cstr1 == cstr2" << endl;
	else
		cout << "cstr1 > cstr2";
	
	return 0;
} 
