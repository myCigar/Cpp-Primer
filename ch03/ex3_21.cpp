#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> v7{10, "hi"};
	
	for (vector<string>::iterator it = v7.begin(); 
		it != v7.end(); ++it)
		{
			cout << *it << endl;
		}
	cout << "v7 size: " << v7.size() << endl;
	return 0;	
} 
