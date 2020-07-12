#include <iostream>

using namespace std;

int main()
{
	int ia[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};
	
	// �汾1����Χfor 
	for (auto &r: ia)
	for (int c : r)
		cout << c << " ";
	cout << endl;
	
	// �汾2����ͨfor��ʹ���±�
	for (int i = 0; i != 3; ++i)
	for (int j = 0; j != 4; ++j)
		cout << ia[i][j] << " ";
	cout << endl;	
	
	// �汾3����ͨfor��ʹ��ָ��
	for (auto r = begin(ia); r != end(ia); ++r)
	for (auto c = begin(*r); c != end(*r); ++c)
		cout << *c << " ";
	cout << endl; 

	return 0;
}
