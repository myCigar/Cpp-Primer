#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec(10, 2, 3);
	
	for (int a : vec)
		cout << a << " ";
	cout << endl;
	return 0;
} 
