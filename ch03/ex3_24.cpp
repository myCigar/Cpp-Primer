#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<int> vec;
	int i;
	while (cin >> i)
	{
		vec.push_back(i);
	}
	
	for (auto it = vec.begin(), jt = vec.end(); 
		it != jt; ++it, --jt)
	{
		if (it == jt - 1)
		{
			cout << *it << " ";
			break;
		}
		cout << *it + *(jt-1) << " ";
	}
	cout << endl;
	
	return 0;	
} 
