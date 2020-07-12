#include <iostream>

using namespace std;

int main()
{
	int arr[5] = {0, 1, 2, 3, 4};
	int *pbeg = begin(arr);
	int *pend = end(arr);
	while (pbeg != pend)
	{
		*pbeg = 0;
		++pbeg;
	}
	
	for (int a : arr)
		cout << a << endl;
	return 0;
}
