#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sum, str;
	while (getline(cin, str))
		sum += str;
	cout << sum << endl;
	
	string sum2, str2;
	while (getline(cin, str2))
		sum2 += str2 + " ";
	cout << sum2 << endl;
	return 0;
}
