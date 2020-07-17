#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> str_vec {"F", "D", "C", "B", "A", "A+"};
	string res;
	unsigned grade;
	cin >> grade;
	if (grade < 60)
	{
		res = str_vec[0];
	}	
	else
	{
		res = str_vec[grade/10-5];
	}
	cout << res << endl;
	
	return 0;
}
