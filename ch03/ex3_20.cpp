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
	
	for (int i = 0, j = vec.size() - 1; 
		!vec.empty() && i <= j; ++i, --j)
	{
		if (i == j)
		{
			cout << vec[i] << " ";
			break;
		}
			
		
		cout << vec[i] + vec[j] << " ";
	}
	cout << endl;
	return 0;	
} 
