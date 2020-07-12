#include <iostream>
#include <vector>

using namespace std;

bool compareTwoArray(int *pb1, int *pe1, int *pb2, int *pe2)
{
	if ((pe1 - pb1) != (pe2 - pb2))
		return false;
	
	for (int *i = pb1, *j = pb2; 
		(i != pe1) && (j != pe2); ++i, ++j)
	{
		if (*i != *j)
			return false; 
	}
	
	return true;
}

int main()
{
	int arr1[5] = {0, 1, 2, 3, 4};
	int arr2[5] = {0, 1, 2, 3, 4};
	if (compareTwoArray(begin(arr1), end(arr1), begin(arr2), end(arr2)))
		cout << "Two arrays are equal" << endl;
	else
		cout << "Two arrays are not equal" << endl;
		
	vector<int> vec1 = {1, 2, 3, 4, 5};
	vector<int> vec2 = {1, 2, 3, 4, 6};
	if (vec1 == vec2)
		cout << "Two vectors are equal" << endl;
	else
		cout << "Two vectors are not equal" << endl;
	return 0;
}
