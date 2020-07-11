#include <iostream>
using namespace std;

/*
 * 我认为传统for更好，因为不用在循环中更新索引值。 
 */

int main()
{
	string str1("Hello, Jiahao");
	string::size_type index = 0;
	while(!str1.empty() && index != str1.size())
	{
		str1[index] = 'X';
		++index;
	}
	cout << str1 << endl;
	
	string str2("Hello, Jiahao");
	for (string::size_type index = 0; 
		!str2.empty() && index != str2.size(); ++index)
	{
		str2[index] = 'X';
	} 
	cout << str2 << endl;
	return 0;
} 
