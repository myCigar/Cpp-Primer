#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vec;
	int i;
	while (cin >> i)
	{
		vec.push_back(i);
	}
	
	cout << vec.size() << endl;
	return 0;
}
