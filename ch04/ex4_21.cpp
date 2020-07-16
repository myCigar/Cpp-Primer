#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (int &v : vec)
	{
		v = (v % 2 == 0) ? v : 2 * v;
	}
	for (int v : vec)
	{
		cout << v << " ";
	}
	cout << endl;
	return 0;
}
