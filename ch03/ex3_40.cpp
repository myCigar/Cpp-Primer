#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	const char cstr1[] = {'h', 'e', 'l', 'l', 'o', '\0'};
	const char cstr2[] = {'w', 'o', 'r', 'l', 'd', '!', '\0'};
	char cstr3[20] = { };
	strcat(cstr3, cstr1);
	strcat(cstr3, " ");
	strcat(cstr3, cstr2);
	
	cout << cstr3 << endl;
	
	return 0;
} 
