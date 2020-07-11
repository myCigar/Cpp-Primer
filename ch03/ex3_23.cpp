#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec(10, 50);
	for (auto it = vec.begin(); it != vec.end(); ++it)
	{
		(*it) *= 2;
	}
	
	for (auto i : vec)
	{
		cout << i << " ";
	} 
	return 0;
}
