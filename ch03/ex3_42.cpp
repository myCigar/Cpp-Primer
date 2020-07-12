#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec = {1, 2, 3, 4, 5};
	int a[5];
	
	for (int i = 0; i != 5; ++i)
		a[i] = vec[i];
		
	for (int v : a)
		cout << v << endl;
	
	return 0;
} 
