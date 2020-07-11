#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<string> vec;
	string str;
	while (cin >> str)
	{
		vec.push_back(str);
	}
	cout << vec.size() << endl;
	return 0;
}
