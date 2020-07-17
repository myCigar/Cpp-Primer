#include <iostream>
#include <string>

using namespace std;

int main()
{
	string rsp;
	do {
		cout << "Please enter two strings:";
		string str1, str2;
		cin >> str1 >> str2;
		cout << (str1.size() < str2.size() ? str1 : str2) << " is shorter than other." << endl;
		cout << "Continue ? Please input yes or no:";
		cin >> rsp;		
	} while (!rsp.empty() && rsp[0] == 'y');
	return 0;	
} 
