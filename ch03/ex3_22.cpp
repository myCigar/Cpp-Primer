#include <iostream>
#include <string>
using namespace std;

int main()
{
	string text;
	getline(cin, text);
	
	for (auto it = text.begin(); 
		it != text.end() && (*it) != ' '; ++it)
	{
		*it = toupper(*it);
		cout << *it;
	}
	return 0;	
} 
