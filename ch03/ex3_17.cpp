#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
	vector<string> vec;
	string str;
	while(cin >> str)
	{
		vec.push_back(str);
	}
	
	for (auto &str : vec)
	{
		for (auto &c : str)
		{
			c = toupper(c);
		}
		cout << str << endl;
	}
	
	return 0;	
} 
