#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<unsigned> scores(11, 0);
	vector<unsigned>::iterator it = scores.begin();
	unsigned grade;
	while (cin >> grade)
	{
		if (grade <= 100)
			++(*(it + grade / 10));
	}
	for (auto i : scores)
		cout << i << " ";
	cout << endl;
	
	return 0;
}
