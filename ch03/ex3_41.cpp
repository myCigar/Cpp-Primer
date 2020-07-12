#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	vector<int> vec(begin(arr), end(arr));
	
	for (auto v : vec)
		cout << v << endl; 
	
	return 0;
} 
