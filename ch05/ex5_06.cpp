#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> str_vec {"F", "D", "C", "B", "A", "A+"};
	unsigned grade;
	cin >> grade;
	
	string res = grade < 60 ? str_vec[0] : str_vec[grade/10-5];
	
	cout << res << endl;
	
	return 0;
}
