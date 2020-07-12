#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int arr1[10];
	int arr2[10];
	vector<int> vec;
	for (int i = 0; i != 10; ++i)
	{
		arr1[i] = i;
		arr2[i] = arr1[i];
		vec.push_back(i);
	}
	
	for (int v : vec)
		cout << v << " ";
	cout << endl;
	
	return 0;
}
