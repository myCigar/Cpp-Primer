#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec1 {0, 1, 1, 3};
	vector<int> vec2 {0, 1, 1, 2, 3, 5, 8};
	
	// ÏÂ±ê
	for (int i = 0; i < vec1.size() && i < vec2.size(); ++i)
	{
		if (vec1[i] != vec2[i])
			cout << "false" << endl; 
	}
	
	// µü´úÆ÷
	for (auto p1 = vec1.begin(), p2 = vec2.begin(); 
		p1 != vec1.end() && p2 != vec2.end(); ++p1, ++p2)
	{
		if (*p1 != *p2)
		{
			cout << "false" << endl;
			return -1;
		}
			
	}
 	
	cout << "true" << endl;
	return 0;
}
