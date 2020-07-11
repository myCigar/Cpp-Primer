#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 0, 10, 10, 1, 2, 10, 10
int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};
	
	cout << "v1 size: " << v1.size() << endl;
	cout << "v2 size: " << v2.size() << endl;
	cout << "v3 size: " << v3.size() << endl;
	cout << "v4 size: " << v4.size() << endl;
	cout << "v5 size: " << v5.size() << endl;
	cout << "v6 size: " << v6.size() << endl;
	cout << "v7 size: " << v7.size() << endl;
	return 0;	
} 
