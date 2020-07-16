#include <iostream>
#include <vector>

using namespace std;
// 前置效率更高，无需任何修改，只需将--ix, --cnt换成ix++, cnt--即可。 
int main()
{
	vector<int> ivec {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	vector<int>::size_type cnt = ivec.size();
	for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
	{
		ivec[ix] = cnt;
	}
	for (auto iv : ivec)
	{
		cout << iv << " ";
	}
	cout << endl;
	return 0;
}
